# CPack Configuration for AWS SDK C++
# Generates DEB and RPM packages for the AWS SDK

# Only support Linux packaging for now
if(NOT CMAKE_SYSTEM_NAME STREQUAL "Linux")
    message(STATUS "CPack packaging is currently only supported on Linux")
    return()
endif()

message(STATUS "Configuring CPack for DEB and RPM package generation")

# =============================================================================
# Version Information
# =============================================================================

# Read version from VERSION file
if(EXISTS "${CMAKE_SOURCE_DIR}/VERSION")
    file(READ "${CMAKE_SOURCE_DIR}/VERSION" SDK_VERSION_STRING)
    string(STRIP "${SDK_VERSION_STRING}" SDK_VERSION_STRING)
    string(REPLACE "." ";" VERSION_LIST "${SDK_VERSION_STRING}")
    list(LENGTH VERSION_LIST VERSION_LIST_LENGTH)

    if(VERSION_LIST_LENGTH GREATER_EQUAL 3)
        list(GET VERSION_LIST 0 CPACK_PACKAGE_VERSION_MAJOR)
        list(GET VERSION_LIST 1 CPACK_PACKAGE_VERSION_MINOR)
        list(GET VERSION_LIST 2 CPACK_PACKAGE_VERSION_PATCH)
        set(CPACK_PACKAGE_VERSION "${SDK_VERSION_STRING}")
        message(STATUS "Package version: ${CPACK_PACKAGE_VERSION}")
    else()
        message(WARNING "VERSION file format is invalid, using default version 1.0.0")
        set(CPACK_PACKAGE_VERSION "1.0.0")
        set(CPACK_PACKAGE_VERSION_MAJOR "1")
        set(CPACK_PACKAGE_VERSION_MINOR "0")
        set(CPACK_PACKAGE_VERSION_PATCH "0")
    endif()
else()
    message(WARNING "VERSION file not found, using default version 1.0.0")
    set(CPACK_PACKAGE_VERSION "1.0.0")
    set(CPACK_PACKAGE_VERSION_MAJOR "1")
    set(CPACK_PACKAGE_VERSION_MINOR "0")
    set(CPACK_PACKAGE_VERSION_PATCH "0")
endif()

# =============================================================================
# Basic Package Information
# =============================================================================

set(CPACK_PACKAGE_NAME "aws-sdk-cpp")
set(CPACK_PACKAGE_VENDOR "Amazon Web Services")
set(CPACK_PACKAGE_CONTACT "AWS SDK Team <aws-sdk-cpp@amazon.com>")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "AWS SDK for C++ - High performance C++ library for Amazon Web Services")
set(CPACK_PACKAGE_DESCRIPTION
    "The AWS SDK for C++ provides a modern C++ interface for Amazon Web Services.
It provides high-level and low-level APIs for nearly all AWS features, minimizing dependencies and providing platform portability.")
set(CPACK_PACKAGE_HOMEPAGE_URL "https://github.com/aws/aws-sdk-cpp")

# License and documentation files
if(EXISTS "${CMAKE_SOURCE_DIR}/LICENSE")
    set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_SOURCE_DIR}/LICENSE")
endif()
if(EXISTS "${CMAKE_SOURCE_DIR}/README.md")
    set(CPACK_RESOURCE_FILE_README "${CMAKE_SOURCE_DIR}/README.md")
endif()

# =============================================================================
# Generator Configuration
# =============================================================================

# Support both RPM and DEB generators
set(CPACK_GENERATOR "RPM;DEB")

# One rpm/deb per component. ONE_PER_GROUP would collapse {group}-runtime and
# {group}-devel into a single package and bypass our per-component name and
# Requires settings, since CPack would look up the group-level CPACK_RPM_<GROUP>_*
# variables instead of the per-component CPACK_RPM_<GROUP>-RUNTIME_* / -DEVEL_*.
set(CPACK_COMPONENTS_GROUPING IGNORE)
set(CPACK_COMPONENT_INCLUDE_TOPLEVEL_DIRECTORY OFF)

# Architecture detection
if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64|amd64|AMD64")
    set(CPACK_PACKAGE_ARCHITECTURE "x86_64")
elseif(CMAKE_SYSTEM_PROCESSOR MATCHES "aarch64|arm64|ARM64")
    set(CPACK_PACKAGE_ARCHITECTURE "aarch64")
else()
    set(CPACK_PACKAGE_ARCHITECTURE "${CMAKE_SYSTEM_PROCESSOR}")
endif()

# =============================================================================
# RPM-Specific Configuration
# =============================================================================

set(CPACK_RPM_COMPONENT_INSTALL ON)
set(CPACK_RPM_PACKAGE_LICENSE "Apache-2.0")
set(CPACK_RPM_PACKAGE_GROUP "Development/Libraries")
set(CPACK_RPM_PACKAGE_URL "${CPACK_PACKAGE_HOMEPAGE_URL}")
set(CPACK_RPM_PACKAGE_RELEASE "1")
set(CPACK_RPM_FILE_NAME "RPM-DEFAULT")
set(CPACK_RPM_PACKAGE_ARCHITECTURE "${CPACK_PACKAGE_ARCHITECTURE}")

# Exclude standard system directories from RPM
set(CPACK_RPM_EXCLUDE_FROM_AUTO_FILELIST_ADDITION
    "/usr"
    "/usr/lib"
    "/usr/lib64"
    "/usr/lib64/cmake"
    "/usr/lib/cmake"
    "/usr/include"
    "/usr/include/aws"
    "/usr/include/smithy"
    "/usr/share"
    "/usr/bin"
)

# Enable automatic dependency detection
set(CPACK_RPM_PACKAGE_AUTOREQ ON)
set(CPACK_RPM_PACKAGE_AUTOPROV ON)

# =============================================================================
# DEB-Specific Configuration
# =============================================================================

set(CPACK_DEB_COMPONENT_INSTALL ON)
set(CPACK_DEBIAN_PACKAGE_SECTION "devel")
set(CPACK_DEBIAN_PACKAGE_PRIORITY "optional")
set(CPACK_DEBIAN_FILE_NAME "DEB-DEFAULT")
set(CPACK_DEBIAN_PACKAGE_HOMEPAGE "${CPACK_PACKAGE_HOMEPAGE_URL}")
set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "${CPACK_PACKAGE_ARCHITECTURE}")

# Map x86_64 to amd64 for Debian
if(CPACK_PACKAGE_ARCHITECTURE STREQUAL "x86_64")
    set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "amd64")
endif()

# Enable automatic dependency detection (requires dpkg-shlibdeps)
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS ON)
set(CPACK_DEBIAN_PACKAGE_GENERATE_SHLIBS ON)

# =============================================================================
# Include Component Definitions
# =============================================================================

# This file defines all component groups and their dependencies
include(${CMAKE_CURRENT_LIST_DIR}/CPackComponents.cmake)

# =============================================================================
# Include CPack Module
# =============================================================================

# This must come last to process all the configuration
include(CPack)

message(STATUS "CPack configuration complete")
message(STATUS "  Generators: RPM, DEB")
message(STATUS "  Package name: ${CPACK_PACKAGE_NAME}")
message(STATUS "  Package version: ${CPACK_PACKAGE_VERSION}")
message(STATUS "  Library type: ${BUILD_SHARED_LIBS}")
message(STATUS "To generate packages, run: cpack -G RPM or cpack -G DEB")
