# AWS SDK for C++ - Package Building Guide

This document describes how to build and use DEB and RPM packages for the AWS SDK for C++.

## Overview

The AWS SDK for C++ provides CPack-based packaging support for generating DEB and RPM packages. The packages are organized into logical service groups, with separate binary (runtime) and development packages for each group.

### Package Types

1. **Runtime Packages**: Contain compiled libraries (.so or .a files) and pkg-config files
2. **Development Packages**: Contain header files and CMake configuration files

### Package Formats

- **RPM**: For Red Hat, Fedora, CentOS, Amazon Linux, and other RPM-based distributions
- **DEB**: For Debian, Ubuntu, and other DEB-based distributions

## Table of Contents

- [Overview](#overview)
  - [Package Types](#package-types)
  - [Package Formats](#package-formats)
- [Packaging Configuration Files](#packaging-configuration-files)
  - [Core CMake Configuration Files](#core-cmake-configuration-files)
  - [Package Maintenance Scripts](#package-maintenance-scripts)
  - [Build and Documentation Files](#build-and-documentation-files)
  - [Modified Files](#modified-files)
  - [File Structure](#file-structure)
- [Service Groups](#service-groups)
- [Package Naming](#package-naming)
  - [RPM Packages](#rpm-packages)
  - [DEB Packages](#deb-packages)
- [Building Packages](#building-packages)
  - [Prerequisites](#prerequisites)
  - [Using the Build Script (Recommended)](#using-the-build-script-recommended)
  - [Manual Build Process](#manual-build-process)
- [Installing Packages](#installing-packages)
  - [RPM Installation](#rpm-installation)
  - [DEB Installation](#deb-installation)
- [Using the SDK from Packages](#using-the-sdk-from-packages)
  - [CMake Integration](#cmake-integration)
  - [Example Application](#example-application)
  - [pkg-config Integration](#pkg-config-integration)
- [Package Dependencies](#package-dependencies)
  - [Runtime Package Dependencies](#runtime-package-dependencies)
  - [Development Package Dependencies](#development-package-dependencies)
- [Uninstalling Packages](#uninstalling-packages)
  - [RPM Uninstallation](#rpm-uninstallation)
  - [DEB Uninstallation](#deb-uninstallation)
- [Troubleshooting](#troubleshooting)
  - [Missing Dependencies](#missing-dependencies)
  - [CMake Can't Find Package](#cmake-cant-find-package)
  - [Library Not Found at Runtime](#library-not-found-at-runtime)
  - [Package Version Conflicts](#package-version-conflicts)
- [Advanced Topics](#advanced-topics)
  - [Building Static Library Packages](#building-static-library-packages)
  - [Cross-Architecture Builds](#cross-architecture-builds)
  - [Creating Package Repositories](#creating-package-repositories)
- [Package Maintainer Information](#package-maintainer-information)
  - [File Locations](#file-locations)
  - [Modifying Service Groups](#modifying-service-groups)
  - [Package Metadata](#package-metadata)
- [Support and Feedback](#support-and-feedback)

## Packaging Configuration Files

The CPack packaging system is implemented through the following configuration files:

### Core CMake Configuration Files

| File | Purpose |
|------|---------|
| `cmake/ServiceGroupMapping.cmake` | Maps individual AWS service libraries to logical package groups (core, storage, compute, etc.) |
| `cmake/CPackConfig.cmake` | Main CPack configuration - defines package metadata, generators (RPM/DEB), and global settings |
| `cmake/CPackComponents.cmake` | Defines package components, component groups, and inter-package dependencies for both RPM and DEB |

### Package Maintenance Scripts

| File | Purpose |
|------|---------|
| `cmake/rpm-scripts/post.sh` | RPM post-install script - runs `ldconfig` to update shared library cache |
| `cmake/rpm-scripts/postun.sh` | RPM post-uninstall script - runs `ldconfig` after package removal |
| `cmake/deb-scripts/postinst` | DEB post-install script - runs `ldconfig` on package configuration |
| `cmake/deb-scripts/postrm` | DEB post-remove script - runs `ldconfig` after package removal |

### Build and Documentation Files

| File | Purpose |
|------|---------|
| `scripts/build-packages.sh` | Automated build script for generating packages with configurable options |
| `docs/PACKAGING.md` | Comprehensive documentation for building, installing, and using packages |

### Modified Files

| File | Modifications |
|------|---------------|
| `CMakeLists.txt` | Added `ENABLE_CPACK_PACKAGING` option and CPack integration (lines 75, 362-366) |
| `cmake/utilities.cmake` | Modified `setup_install()` and `do_packaging()` macros to add COMPONENT support for CPack |
| `src/aws-cpp-sdk-core/CMakeLists.txt` | Added COMPONENT parameters to library and header installation commands for packaging |

### File Structure

```
aws-sdk-cpp/
├── cmake/
│   ├── ServiceGroupMapping.cmake      # NEW - Service to group mapping
│   ├── CPackConfig.cmake              # NEW - Main CPack configuration
│   ├── CPackComponents.cmake          # NEW - Component definitions
│   ├── utilities.cmake                # MODIFIED - Added COMPONENT support
│   ├── rpm-scripts/
│   │   ├── post.sh                    # NEW - RPM post-install
│   │   └── postun.sh                  # NEW - RPM post-uninstall
│   └── deb-scripts/
│       ├── postinst                   # NEW - DEB post-install
│       └── postrm                     # NEW - DEB post-remove
├── scripts/
│   └── build-packages.sh              # NEW - Build automation script
├── docs/
│   └── PACKAGING.md                   # NEW - Packaging documentation
├── src/aws-cpp-sdk-core/
│   └── CMakeLists.txt                 # MODIFIED - Added COMPONENT support
└── CMakeLists.txt                     # MODIFIED - CPack integration

Total: 9 new files, 3 modified files
```

## Service Groups

The 418+ AWS services are organized into 19 logical groups to avoid creating hundreds of individual packages:

| Group | Services Included |
|-------|-------------------|
| **core** | aws-cpp-sdk-core, access-management, identity-management, queues, text-to-speech, transfer |
| **storage** | S3, Glacier, EFS, FSx, Backup, Storage Gateway |
| **compute** | EC2, Lambda, Batch, Lightsail, Elastic Beanstalk |
| **containers** | ECS, EKS, ECR, App Runner |
| **database** | DynamoDB, RDS, Redshift, Neptune, DocumentDB, ElastiCache, MemoryDB |
| **networking** | VPC, Route53, CloudFront, ELB, API Gateway, Direct Connect |
| **messaging** | SQS, SNS, Kinesis, EventBridge, MQ |
| **aiml** | Bedrock, SageMaker, Rekognition, Comprehend, Textract, Transcribe, Polly, Lex |
| **analytics** | Athena, EMR, Glue, QuickSight, OpenSearch, Clean Rooms |
| **security** | IAM, STS, Cognito, KMS, Secrets Manager, WAF, GuardDuty, Macie, Inspector |
| **management** | CloudFormation, CloudWatch, Config, Systems Manager, Organizations |
| **appintegration** | AppConfig, AppSync, Step Functions, AppFlow, EventBridge Scheduler |
| **devtools** | CodeCommit, CodeBuild, CodeDeploy, CodePipeline, X-Ray, Cloud9 |
| **media** | MediaConvert, MediaLive, MediaPackage, IVS, Elemental |
| **iot** | IoT Core, IoT Analytics, IoT Events, Greengrass |
| **business** | WorkSpaces, WorkDocs, WorkMail, Chime, Connect |
| **migration** | DMS, DataSync, Transfer, Snow Family, Migration Hub |
| **costmgmt** | Cost Explorer, Budgets, Billing, Pricing, Savings Plans, Marketplace |
| **misc** | Other services not in above groups |

## Package Naming

### RPM Packages

```
Runtime:      aws-sdk-cpp-{group}-{version}-{release}.{arch}.rpm
Development:  aws-sdk-cpp-{group}-devel-{version}-{release}.{arch}.rpm
Static:       aws-sdk-cpp-{group}-static-{version}-{release}.{arch}.rpm
```

Examples:
- `aws-sdk-cpp-core-1.11.725-1.x86_64.rpm`
- `aws-sdk-cpp-core-devel-1.11.725-1.x86_64.rpm`
- `aws-sdk-cpp-storage-1.11.725-1.x86_64.rpm`

### DEB Packages

```
Runtime:      libaws-sdk-cpp-{group}_{version}-{release}_{arch}.deb
Development:  libaws-sdk-cpp-{group}-dev_{version}-{release}_{arch}.deb
Static:       libaws-sdk-cpp-{group}-static_{version}-{release}_{arch}.deb
```

Examples:
- `libaws-sdk-cpp-core_1.11.725-1_amd64.deb`
- `libaws-sdk-cpp-core-dev_1.11.725-1_amd64.deb`
- `libaws-sdk-cpp-storage_1.11.725-1_amd64.deb`

## Building Packages

### Prerequisites

**System Requirements:**
- Linux operating system
- CMake 3.13 or later
- GCC/Clang compiler
- rpmbuild (for RPM packages)
- dpkg-dev (for DEB packages)

**System Dependencies:**
- libcurl development headers
- OpenSSL development headers
- zlib development headers

**Install dependencies on different distributions:**

```bash
# Amazon Linux / RHEL / CentOS / Fedora
sudo yum install cmake3 gcc-c++ libcurl-devel openssl-devel zlib-devel rpm-build

# Debian / Ubuntu
sudo apt install cmake g++ libcurl4-openssl-dev libssl-dev zlib1g-dev dpkg-dev rpm
```

### Using the Build Script (Recommended)

The easiest way to build packages is using the provided automation script:

```bash
# Build shared libraries with default services (core, s3, ec2, dynamodb, lambda)
./scripts/build-packages.sh

# Build all services as shared libraries
./scripts/build-packages.sh Release shared all

# Build specific services as static libraries
./scripts/build-packages.sh Release static "s3;ec2;dynamodb"
```

**Script Parameters:**
1. `BUILD_TYPE`: Release, Debug, RelWithDebInfo, or MinSizeRel (default: Release)
2. `LIBRARY_TYPE`: shared or static (default: shared)
3. `BUILD_SERVICES`: Semicolon-separated service list or "all" (default: "core;s3;ec2;dynamodb;lambda")

### Manual Build Process

If you prefer to build packages manually:

#### Step 1: Configure CMake

```bash
mkdir build-packaging && cd build-packaging

cmake .. \
    -DCMAKE_BUILD_TYPE=Release \
    -DBUILD_SHARED_LIBS=ON \
    -DBUILD_ONLY="s3;ec2;dynamodb;lambda" \
    -DSIMPLE_INSTALL=ON \
    -DENABLE_CPACK_PACKAGING=ON \
    -DCMAKE_INSTALL_PREFIX=/usr \
    -DCMAKE_INSTALL_LIBDIR=lib64 \
    -DUSE_OPENSSL=ON \
    -DFORCE_CURL=ON \
    -DENABLE_TESTING=OFF
```

**Important CMake Options:**
- `-DENABLE_CPACK_PACKAGING=ON` - **Required** to enable package generation
- `-DSIMPLE_INSTALL=ON` - **Required** for standard Linux filesystem layout
- `-DBUILD_SHARED_LIBS=ON` - Build shared libraries (OFF for static)
- `-DBUILD_ONLY="list"` - Build only specified services (omit to build all)
- `-DCMAKE_INSTALL_PREFIX=/usr` - Install location (standard is /usr)
- `-DCMAKE_INSTALL_LIBDIR=lib64` - Use lib64 on x86_64 systems

#### Step 2: Build the SDK

```bash
make -j$(nproc)
```

#### Step 3: Generate Packages

```bash
# Generate both RPM and DEB packages
cpack -G "RPM;DEB"

# Or generate individually
cpack -G RPM
cpack -G DEB
```

The packages will be created in the current build directory.

## Installing Packages

### RPM Installation

**Using rpm command:**

```bash
# Install core library (required)
sudo rpm -ivh aws-sdk-cpp-core-1.11.725-1.x86_64.rpm
sudo rpm -ivh aws-sdk-cpp-core-devel-1.11.725-1.x86_64.rpm

# Install additional service groups
sudo rpm -ivh aws-sdk-cpp-storage-1.11.725-1.x86_64.rpm
sudo rpm -ivh aws-sdk-cpp-storage-devel-1.11.725-1.x86_64.rpm
```

**Using yum/dnf (handles dependencies automatically):**

```bash
sudo yum install ./aws-sdk-cpp-core-*.rpm ./aws-sdk-cpp-storage-*.rpm
```

**Verify installation:**

```bash
# List installed packages
rpm -qa | grep aws-sdk-cpp

# Check package contents
rpm -ql aws-sdk-cpp-core
rpm -ql aws-sdk-cpp-core-devel

# Check dependencies
rpm -qR aws-sdk-cpp-storage
```

### DEB Installation

**Using dpkg command:**

```bash
# Install core library (required)
sudo dpkg -i libaws-sdk-cpp-core_1.11.725-1_amd64.deb
sudo dpkg -i libaws-sdk-cpp-core-dev_1.11.725-1_amd64.deb

# Install additional service groups
sudo dpkg -i libaws-sdk-cpp-storage_1.11.725-1_amd64.deb
sudo dpkg -i libaws-sdk-cpp-storage-dev_1.11.725-1_amd64.deb
```

**Using apt (handles dependencies automatically):**

```bash
sudo apt install ./libaws-sdk-cpp-core_*.deb ./libaws-sdk-cpp-storage_*.deb
```

**Verify installation:**

```bash
# List installed packages
dpkg -l | grep aws-sdk-cpp

# Check package contents
dpkg -L libaws-sdk-cpp-core
dpkg -L libaws-sdk-cpp-core-dev

# Check dependencies
dpkg-deb -I libaws-sdk-cpp-storage_*.deb
```

## Using the SDK from Packages

### CMake Integration

After installing the packages, you can use CMake's `find_package()` to locate the SDK:

```cmake
cmake_minimum_required(VERSION 3.13)
project(MyAWSApp)

# Find the AWS SDK packages
find_package(aws-cpp-sdk-core REQUIRED)
find_package(aws-cpp-sdk-s3 REQUIRED)

# Create your executable
add_executable(myapp main.cpp)

# Link against AWS SDK libraries
target_link_libraries(myapp
    AWS::aws-cpp-sdk-core
    AWS::aws-cpp-sdk-s3
)
```

### Example Application

```cpp
#include <aws/core/Aws.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/ListBucketsRequest.h>
#include <iostream>

int main() {
    Aws::SDKOptions options;
    Aws::InitAPI(options);
    {
        Aws::S3::S3Client s3_client;
        auto outcome = s3_client.ListBuckets();

        if (outcome.IsSuccess()) {
            std::cout << "S3 Buckets:\n";
            for (const auto& bucket : outcome.GetResult().GetBuckets()) {
                std::cout << "  " << bucket.GetName() << std::endl;
            }
        }
    }
    Aws::ShutdownAPI(options);
    return 0;
}
```

**Build the application:**

```bash
mkdir build && cd build
cmake ..
make
./myapp
```

### pkg-config Integration

For non-CMake projects, you can use pkg-config (shared libraries only):

```bash
# Get compile flags
pkg-config --cflags aws-cpp-sdk-core aws-cpp-sdk-s3

# Get link flags
pkg-config --libs aws-cpp-sdk-core aws-cpp-sdk-s3

# Compile example
g++ myapp.cpp $(pkg-config --cflags --libs aws-cpp-sdk-core aws-cpp-sdk-s3) -o myapp
```

## Package Dependencies

### Runtime Package Dependencies

All service group runtime packages depend on:
- **aws-sdk-cpp-core** (or libaws-sdk-cpp-core) - Required
- **libcurl** >= 7.58.0
- **openssl-libs** (or libssl) >= 1.1.1
- **zlib** >= 1.2.11

### Development Package Dependencies

All service group development packages depend on:
- Corresponding runtime package (same version)
- **aws-sdk-cpp-core-devel** (or libaws-sdk-cpp-core-dev)
- Development headers for: libcurl, OpenSSL, zlib
- **cmake** >= 3.13

## Uninstalling Packages

### RPM Uninstallation

```bash
# Remove specific packages
sudo rpm -e aws-sdk-cpp-storage-devel aws-sdk-cpp-storage

# Remove all AWS SDK packages
sudo rpm -e $(rpm -qa | grep aws-sdk-cpp)
```

### DEB Uninstallation

```bash
# Remove specific packages
sudo apt remove libaws-sdk-cpp-storage-dev libaws-sdk-cpp-storage

# Remove all AWS SDK packages
sudo apt remove libaws-sdk-cpp-*
```

## Troubleshooting

### Missing Dependencies

If package installation fails due to missing dependencies:

```bash
# RPM: Install dependencies first
sudo yum install libcurl openssl-libs zlib

# DEB: Use apt to handle dependencies
sudo apt install -f
```

### CMake Can't Find Package

Ensure the development package is installed:

```bash
# Check if installed
rpm -q aws-sdk-cpp-core-devel     # RPM
dpkg -l | grep libaws-sdk-cpp-core-dev  # DEB

# Verify CMake config files exist
ls /usr/lib64/cmake/aws-cpp-sdk-core/   # RPM (x86_64)
ls /usr/lib/cmake/aws-cpp-sdk-core/     # DEB
```

### Library Not Found at Runtime

Update the library cache:

```bash
sudo ldconfig
```

Or check your LD_LIBRARY_PATH:

```bash
export LD_LIBRARY_PATH=/usr/lib64:$LD_LIBRARY_PATH
```

### Package Version Conflicts

When upgrading, remove old packages first:

```bash
# RPM
sudo rpm -e --nodeps aws-sdk-cpp-core  # Remove without dependencies
sudo rpm -ivh aws-sdk-cpp-core-NEW.rpm  # Install new version

# DEB
sudo dpkg --purge libaws-sdk-cpp-core
sudo dpkg -i libaws-sdk-cpp-core_NEW.deb
```

## Advanced Topics

### Building Static Library Packages

```bash
cmake .. \
    -DCMAKE_BUILD_TYPE=Release \
    -DBUILD_SHARED_LIBS=OFF \
    -DENABLE_CPACK_PACKAGING=ON \
    -DSIMPLE_INSTALL=ON \
    -DCMAKE_INSTALL_PREFIX=/usr

make -j$(nproc)
cpack -G "RPM;DEB"
```

Static packages are named with `-static` suffix:
- `aws-sdk-cpp-core-static-1.11.725-1.x86_64.rpm`
- `libaws-sdk-cpp-core-static_1.11.725-1_amd64.deb`

### Cross-Architecture Builds

The packaging system automatically detects the build architecture:
- x86_64 / amd64 (Intel/AMD 64-bit)
- aarch64 / arm64 (ARM 64-bit)

### Creating Package Repositories

**For RPM:**

```bash
# Create repository directory
mkdir -p /path/to/repo

# Copy packages
cp *.rpm /path/to/repo/

# Create repository metadata
createrepo_c /path/to/repo

# Configure client
cat > /etc/yum.repos.d/aws-sdk-cpp.repo <<EOF
[aws-sdk-cpp]
name=AWS SDK for C++
baseurl=file:///path/to/repo
enabled=1
gpgcheck=0
EOF
```

**For DEB:**

```bash
# Create repository directory
mkdir -p /path/to/repo

# Copy packages
cp *.deb /path/to/repo/

# Create package index
cd /path/to/repo
dpkg-scanpackages . /dev/null | gzip -9c > Packages.gz

# Configure client
cat >> /etc/apt/sources.list <<EOF
deb [trusted=yes] file:///path/to/repo ./
EOF

sudo apt update
```

## Package Maintainer Information

### File Locations

- **CMake Modules**: `cmake/ServiceGroupMapping.cmake`, `cmake/CPackConfig.cmake`, `cmake/CPackComponents.cmake`
- **Build Scripts**: `scripts/build-packages.sh`
- **Maintenance Scripts**: `cmake/rpm-scripts/`, `cmake/deb-scripts/`

### Modifying Service Groups

To add or modify service group mappings, edit `cmake/ServiceGroupMapping.cmake` and update the pattern matching in `get_service_group_component()` function.

### Package Metadata

Package metadata (version, description, dependencies) is configured in:
- `cmake/CPackConfig.cmake` - General settings
- `cmake/CPackComponents.cmake` - Per-component settings

## Support and Feedback

For issues related to packaging:
- GitHub Issues: https://github.com/aws/aws-sdk-cpp/issues
- AWS SDK Documentation: https://docs.aws.amazon.com/sdk-for-cpp/

For issues with the AWS SDK itself, refer to the main README.md and SDK documentation.
