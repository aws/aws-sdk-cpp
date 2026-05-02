# AWS SDK for C++

A modern, performant C++11 interface for Amazon Web Services — fully featured, low-dependency, and cross-platform.

> **Status:** Generally Available — production-ready. Contributions welcome via pull requests and [GitHub Issues](https://github.com/aws/aws-sdk-cpp/issues/new/choose).

---

## Contents

- [Minimum Requirements](#minimum-requirements)
- [Building from Source](#building-from-source)
- [Platform-Specific Guides](#platform-specific-guides)
- [Package Managers](#package-managers)
- [Maintenance & Support](#maintenance--support)
- [Getting Help](#getting-help)
- [SDK Reference](#sdk-reference)

---

## Minimum Requirements

| Requirement | Minimum Version |
|---|---|
| Visual Studio | 2015 or later |
| GCC | 4.9 or later |
| Clang | 3.3 or later |
| RAM | 4 GB (larger clients may fail on `t2.micro`/`t2.small`) |

**Supported platforms:** Amazon Linux · Windows · macOS

---

## Building from Source

### 1. Install dependencies

On **Debian/Ubuntu:**
```sh
sudo apt-get install libcurl-dev
```

On **RPM-based Linux** (RHEL, Fedora, SUSE):
```sh
sudo yum install libcurl-devel     # or dnf / zypper
```

### 2. Clone with submodules

```sh
git clone --recurse-submodules https://github.com/aws/aws-sdk-cpp
```

### 3. Build

Replace `<BUILD_DIR>` and `<path-to-*>` with your actual paths:

```sh
cd <BUILD_DIR>
cmake <path-to-root-of-this-source-code> \
  -DCMAKE_BUILD_TYPE=Debug \
  -DCMAKE_INSTALL_PREFIX=<path-to-install> \
  -DBUILD_ONLY="s3"

cmake --build . --config=Debug
cmake --install . --config=Debug
```

> **Tip:** `BUILD_ONLY` limits compilation to the services you need. Building the full SDK takes a long time. See all available [CMake parameters](./docs/CMake_Parameters.md).

### Optional: Request Compression (zlib)

Zlib is only needed if you enable gzip/deflate request compression:

```cmake
-DENABLE_ZLIB_REQUEST_COMPRESSION=ON
```

Install zlib if using this flag:

| Platform | Command |
|---|---|
| Debian/Ubuntu | `sudo apt-get install zlib1g-dev` |
| RPM-based | `sudo yum install zlib-devel` |

---

## Platform-Specific Guides

### macOS

Building on macOS follows the standard Unix flow. First, install the Xcode command line tools (required for Apple Clang, GCC, and libcurl):

```sh
xcode-select --install
```

> **⚠️ macOS Sonoma:** libcurl 8.4.0 has a [known issue](https://github.com/aws/aws-sdk-cpp/issues/2804). Use [curl from Homebrew](https://formulae.brew.sh/formula/curl) instead:
> ```sh
> cmake -DCMAKE_PREFIX_PATH="/opt/homebrew/opt/curl/" \
>   -DAUTORUN_UNIT_TESTS=OFF \
>   -DBUILD_ONLY="s3" \
>   -DCMAKE_INSTALL_PREFIX="~/sdk-install" \
>   ..
> ```

### Android

Add `-DTARGET_ARCH=ANDROID` to your CMake command. Supported API levels: 19–28 with NDK 19c. Set the `ANDROID_NDK` environment variable before building.

**Building for Android on Windows** requires a Visual Studio developer command prompt (2015+) with `git` and `patch` in your PATH (check `.../Git/usr/bin/`).

Use NMake:
```sh
cmake -G "NMake Makefiles" -DTARGET_ARCH=ANDROID <other options> ..
```

For faster parallel builds, use [JOM](https://wiki.qt.io/Jom) instead of NMake:
```sh
cmake -G "NMake Makefiles JOM" -DTARGET_ARCH=ANDROID <other options> ..
```

For Docker, ensure your container meets the [minimum requirements](#minimum-requirements). See the [Docker build files](https://github.com/aws/aws-sdk-cpp/tree/master/CI/docker-file).

---

## Package Managers

### vcpkg

```sh
git clone https://github.com/Microsoft/vcpkg.git
cd vcpkg
./bootstrap-vcpkg.sh
./vcpkg integrate install
./vcpkg install aws-sdk-cpp
```

The vcpkg port is maintained by Microsoft and community contributors. To report an outdated version, [open an issue on vcpkg](https://github.com/Microsoft/vcpkg).

### Conan

```sh
conan install --requires="aws-sdk-cpp/[*]" --build="aws-*"
```

The Conan recipe is maintained by JFrog and community contributors. To report an outdated version, [open an issue on ConanCenterIndex](https://github.com/conan-io/conan-center-index).

---

## Maintenance & Support

See the AWS SDKs and Tools Shared Configuration Reference for details on versioning policy and support timelines:

- [AWS SDKs and Tools Maintenance Policy](https://docs.aws.amazon.com/credref/latest/refdocs/maint-policy.html)
- [AWS SDKs and Tools Version Support Matrix](https://docs.aws.amazon.com/credref/latest/refdocs/version-support-matrix.html)

---

## Getting Help

| Channel | Use for |
|---|---|
| [GitHub Discussions](https://github.com/aws/aws-sdk-cpp/discussions/new/choose) | Questions and guidance |
| [GitHub Issues](https://github.com/aws/aws-sdk-cpp/issues/new/choose) | Bug reports and feature requests |
| [Stack Overflow `#aws-sdk-cpp`](https://stackoverflow.com/questions/tagged/aws-sdk-cpp) | Community Q&A |
| [AWS Support](https://aws.amazon.com/premiumsupport/) | If you have a support plan |

Before opening an issue, please check:
- [Developer Guide](https://docs.aws.amazon.com/sdk-for-cpp/v1/developer-guide/welcome.html) and [API Reference](http://sdk.amazonaws.com/cpp/api/LATEST/index.html)
- [Changelog](./CHANGELOG.md) for recent breaking changes
- [Contribution Guide](./CONTRIBUTING.md)
- [Code Samples](https://github.com/awsdocs/aws-doc-sdk-examples/tree/master/cpp)

---

## SDK Reference

### Build & Configuration
- [CMake Parameters](./docs/CMake_Parameters.md)
- [CMake External Project](./docs/CMake_External_Project.md)
- [Building on EC2](https://github.com/aws/aws-sdk-cpp/wiki/Building-the-SDK-from-source-on-EC2)
- [Visual Studio Setup](./docs/Visual_Studio_building_and_debugging.md)

### Usage
- [API Docs](https://sdk.amazonaws.com/cpp/api/LATEST/index.html)
- [SDK Usage Guide](./docs/SDK_usage_guide.md)
- [Credentials Providers](./docs/Credentials_Providers.md)
- [Client Configuration](./docs/ClientConfiguration_Parameters.md)
- [Service Client](./docs/Service_Client.md)
- [Memory Management](./docs/Memory_Management.md)
- [Advanced Topics](./docs/Advanced_topics.md)

### Project
- [Changelog](https://github.com/aws/aws-sdk-cpp/tags)
- [Coding Standards](./docs/CODING_STANDARDS.md)
- [License](./LICENSE)
- [Code of Conduct](./CODE_OF_CONDUCT.md)
-
