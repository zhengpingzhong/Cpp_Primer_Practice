#include <iostream>

// 编写程序，在标准输出上打印Hello，World。
int main()
{
    int a;
    int b;
    std::cout << "请输入两个数字" << std::endl;
    std::cin >> a >> b;
    std::cout << "a *  b = " << a * b << std::endl;
    std::cout << "bye bye" << std::endl;
    system("pause");
    return 0;
}