# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

option(LEGACY_BUILD "If enabled, the SDK will use 1.9 version of CMake files to build" ON)
if (LEGACY_BUILD)
    message(WARNING "In 1.10.0 release, our CMake build scripts are been updated to provide modern, more stable, CMake "
            "builds. The legacy support fallbacks to the 1.9 CMake scripts to allow customers to upgrade their "
            "building scripts at their own pace. "
            "The legacy support is set by default in 1.10.0, when you complete build updating scripts please "
            "update the build flags as mentioned in README.md and set -DLEGACY_BUILD=OFF. "
            "The legacy support will be removed at 1.11.0 release.")
    list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_legacy")
    include(initialize_project_version)
    project("aws-cpp-sdk-all" VERSION "${PROJECT_VERSION}" LANGUAGES CXX)
    include(legacy_main)
else ()
    message(STATUS "Building with 1.10 CMake scripts.")
    string(CONCAT DESCRIPTION_STRING "The AWS SDK for C++ provides a modern C++ (standard version C++11 or later) "
            "interface for Amazon Web Services (AWS).")
    project("aws-cpp-sdk"
            LANGUAGES CXX
            VERSION 1.10.0
            DESCRIPTION ${DESCRIPTION_STRING}
            HOMEPAGE_URL "https://docs.aws.amazon.com/sdk-for-cpp"
            )
    set(CMAKE_CXX_STANDARD 11)
    set(CMAKE_CXX_EXTENSIONS OFF)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)

    message(STATUS "Building ${PROJECT_NAME} ${PROJECT_VERSION}")

    message(WARNING "This builds nothing yet.")
endif ()
