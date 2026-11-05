# Toolchain Policy

The AWS SDK for C++ is written in C++17, and C++17 is the oldest standard it builds with. You can build with a newer standard by setting `CMAKE_CXX_STANDARD`, for example to 20.

Amazon Linux is the SDK's main platform, so it's what our minimums are based on. The minimum GCC and CMake versions are the ones that ship with the oldest Amazon Linux we support. They go up only when that Amazon Linux reaches end of support, not when a compiler or CMake version gets old. Today the oldest is Amazon Linux 2.

The SDK supports Clang, Apple Clang and MSVC as well, so it builds on macOS and Windows, not just Linux. Their minimums don't come from Amazon Linux. For each one, it's the first version with all of C++17's core language features.

| Toolchain | Minimum | Why |
| --- | --- | --- |
| GCC | 7.3 | Amazon Linux 2's `gcc` |
| CMake | 3.17 | Amazon Linux 2's `cmake3` |
| Clang | 5 | First release with all of C++17's core language features |
| Apple Clang | 9.1 (Xcode 9.3) | First release based on Clang 5 |
| MSVC | 19.14 (Visual Studio 2017 version 15.7) | First release with all of C++17's core language features |
