# AWS SDK for C++
The AWS SDK for C++ provides a modern C++ (version C++ 11 or later) interface for Amazon Web Services (AWS). It is meant to be performant and fully functioning with low- and high-level SDKs, while minimizing dependencies and providing platform portability (Windows, OSX, Linux, and mobile).

AWS SDK for C++ is now in General Availability and recommended for production use. We invite our customers to join the development efforts by submitting pull requests and sending us feedback and ideas via GitHub Issues.

## __Jump To:__
* [Change log](https://github.com/aws/aws-sdk-cpp/tags)
* [API Docs](https://sdk.amazonaws.com/cpp/api/LATEST/index.html)
* [Getting Started](#getting-started)
* [Getting Help](#getting-help)
* [Using the SDK and Other Topics](#using-the-sdk-and-other-topics)

# Getting Started

## Building the SDK:

### Minimum Requirements:
* Visual Studio 2015 or later
* OR GNU Compiler Collection (GCC) 4.9 or later
* OR Clang 3.3 or later
* 4GB of RAM (required for building some of the larger clients; SDK build may fail on EC2 instance types t2.micro, t2.small, and other small instance types due to insufficient memory)
* Supported platforms
  * Amazon Linux
  * Windows
  * Mac

### Building From Source:

#### To create an **out-of-source build**:
1. Install CMake and the relevant build tools for your platform. Ensure these are available in your executable path.
2. Clone this repository with submodules

    ```sh
    git clone --recurse-submodules https://github.com/aws/aws-sdk-cpp
    ```

3. Create your build directory. Replace `<BUILD_DIR>` with your build directory name:
4. Build the project:

    ```sh
   cd <BUILD_DIR>
   cmake <path-to-root-of-this-source-code> \
    -DCMAKE_BUILD_TYPE=Debug \
    -DCMAKE_INSTALL_PREFIX=<path-to-install> \
    -DBUILD_ONLY="s3"
   cmake --build . --config=Debug
   cmake --install . --config=Debug
   ```

   **_NOTE:_** BUILD_ONLY is an optional flag used to list only the services you are using. Building the whole SDK can take a long time. Also, check out the list of [CMake parameters](./docs/CMake_Parameters.md)

#### Other Dependencies:
To compile in Linux, you must have the header files for libcurl, libopenssl. The packages are typically available in your package manager.

Debian based Linux distributions example:
   `sudo apt-get install libcurl-dev`

RPM based Linux distributions example:
   `sudo [yum|dnf|zypper] install libcurl-devel`

### Building for MacOS

Building for macOS is largely the same as building on a *nix system except for how the system consumes the curl dependency and compilers.

You must install the [xcode command line tools](https://mac.install.guide/commandlinetools/4.html). This is required for Apple clang and gcc. This also installs libcurl as well.

> :warning: If you are using macOS Sonoma, there is a [known issue](https://github.com/aws/aws-sdk-cpp/issues/2804) where using libcurl version 8.4.0 on macOS can lead to issues. [This issue is being tracked with curl and Apple](https://github.com/curl/curl/issues/12525). In the meanwhile, please use an updated version of [curl from Homebrew](https://formulae.brew.sh/formula/curl). You can include this in your project via the CMAKE_PREFIX_PATH.
>
> ```
> cmake -DCMAKE_PREFIX_PATH="/opt/homebrew/opt/curl/" \
>  -DAUTORUN_UNIT_TESTS=OFF \
>  -DBUILD_ONLY="s3" \
>  -DCMAKE_INSTALL_PREFIX="~/sdk-install" \
>  ..
> ```

### Building for Android
To build for Android, add `-DTARGET_ARCH=ANDROID` to your CMake command line. Currently, we support Android APIs from 19 to 28 with Android NDK 19c, and we are using the built-in CMake toolchain file supplied by Android NDK, assuming you have the appropriate environment variables (ANDROID_NDK) set.

##### Android on Windows
Building for Android on Windows requires some additional setup. In particular, you will need to run CMake from a Visual Studio developer command prompt (2015 or higher). Additionally, you will need 'git' and 'patch' in your path. If you have Git installed on a Windows system, then the patch is likely found in a sibling directory (.../Git/usr/bin/). Once you've verified these requirements, your CMake command line will change slightly to use nmake:

   ```sh
   cmake -G "NMake Makefiles" `-DTARGET_ARCH=ANDROID` <other options> ..
   ```

Nmake builds targets in a serial fashion. To make things quicker, we recommend installing JOM as an alternative to nmake and then changing the CMake invocation to:

   ```sh
   cmake -G "NMake Makefiles JOM" `-DTARGET_ARCH=ANDROID` <other options> ..
   ```

### Building aws-sdk-cpp - Using vcpkg

You can download and install aws-sdk-cpp using the [vcpkg](https://github.com/Microsoft/vcpkg) dependency manager:

    git clone https://github.com/Microsoft/vcpkg.git
    cd vcpkg
    ./bootstrap-vcpkg.sh
    ./vcpkg integrate install
    ./vcpkg install aws-sdk-cpp

The aws-sdk-cpp port in vcpkg is kept up to date by Microsoft team members and community contributors. If the version is out of date, please [create an issue or pull request](https://github.com/Microsoft/vcpkg) on the vcpkg repository.

# Maintenance and support for SDK major versions

For information about maintenance and support for SDK major versions and our underlying dependencies, see the following in the AWS SDKs and Tools Shared Configuration and Credentials Reference Guide

* [AWS SDKs and Tools Maintenance Policy](https://docs.aws.amazon.com/credref/latest/refdocs/maint-policy.html)
* [AWS SDKs and Tools Version Support Matrix](https://docs.aws.amazon.com/credref/latest/refdocs/version-support-matrix.html)


# Getting Help

The best way to interact with our team is through GitHub. You can open a [discussion](https://github.com/aws/aws-sdk-cpp/discussions/new/choose) for guidance questions or an [issue](https://github.com/aws/aws-sdk-cpp/issues/new/choose) for bug reports or feature requests.

You may also find help on community resources such as [StackOverFlow](https://stackoverflow.com/) with the tag [#aws-sdk-cpp](https://stackoverflow.com/questions/tagged/aws-sdk-cpp). If you have a support plan with [AWS Support](https://aws.amazon.com/premiumsupport/), you can also create a new support case.

Please make sure to check out our resources too before opening an issue:
* [Developer Guide](https://docs.aws.amazon.com/sdk-for-cpp/v1/developer-guide/welcome.html) and [API reference](http://sdk.amazonaws.com/cpp/api/LATEST/index.html)
* [Changelog](./CHANGELOG.md) for recent breaking changes.
* [Contribution](./CONTRIBUTING.md) guide.
* [samples repo](https://github.com/awsdocs/aws-doc-sdk-examples/tree/master/cpp).


# Using the SDK and Other Topics
* Other docs for how to build the sdk
  * [CMake Parameters](./docs/CMake_Parameters.md)
  * [Add as CMake external project](./docs/CMake_External_Project.md)
  * [Building for Docker](https://github.com/aws/aws-sdk-cpp/tree/master/CI/docker-file) (To build for Docker, ensure your container meets the [minimum requirements](#minimum-requirements))
  * [Building on an EC2 instance](https://github.com/aws/aws-sdk-cpp/wiki/Building-the-SDK-from-source-on-EC2)
* SDK usage
  * [API Docs](https://sdk.amazonaws.com/cpp/api/LATEST/index.html)
  * [Using the SDK](./docs/SDK_usage_guide.md)
  * [Credentials Providers](./docs/Credentials_Providers.md)
  * [Client Configuration Parameters](./docs/ClientConfiguration_Parameters.md)
  * [Service Client](./docs/Service_Client.md)
  * [Memory Management](./docs/Memory_Management.md)
  * [Advanced Topics](./docs/Advanced_topics.md)
* [Coding Standards](./docs/CODING_STANDARDS.md)
* [License](./LICENSE)
* [Code of Conduct](./CODE_OF_CONDUCT.md)
