# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0
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
    message(STATUS "Building with new CMake scripts.")
    string(CONCAT DESCRIPTION_STRING "The AWS SDK for C++ provides a modern C++ (standard version C++11 or later) "
            "interface for Amazon Web Services (AWS).")

    list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

    find_package(Git QUIET) # Adding development helper tools as git_hash built when available.

    include(project_version)
    obtain_project_version(SDK_PROJECT_VERSION aws-cpp-sdk_GIT_HASH)

    project("aws-cpp-sdk"
            LANGUAGES CXX
            VERSION ${SDK_PROJECT_VERSION}
            DESCRIPTION ${DESCRIPTION_STRING}
            HOMEPAGE_URL "https://docs.aws.amazon.com/sdk-for-cpp"
            )

    # Setting C++ minimum requirements
    set(CMAKE_CXX_STANDARD 11)
    set(CMAKE_CXX_EXTENSIONS OFF)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)

    # Setting build to hide symbols in targets by default
    set(CMAKE_CXX_VISIBILITY_PRESET hidden)
    set(CMAKE_VISIBILITY_INLINES_HIDDEN YES)

    # Preventing writes to package registry by default
    set(CMAKE_EXPORT_NO_PACKAGE_REGISTRY YES)

    message(STATUS "Generating source file for introspection of version to ${CMAKE_PROJECT_VERSION} ")
    configure_file(
            VersionConfig.h.in
            src/aws-cpp-sdk-core/include/aws/core/VersionConfig.h
            @ONLY
    )

    # Validating config type and setting default if needed
    get_property(is_multi_conf_build GLOBAL PROPERTY GENERATOR_IS_MULTI_CONFIG)
    if (NOT is_multi_conf_build)
        set(allowed_build_types Debug Release RelWithDebInfo MinSizeRel)
        # cmake-gui helper
        set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "${allowed_build_types}")
        if (NOT CMAKE_BUILD_TYPE)
            message(STATUS "Setting build type to 'RelWithDebInfo' as none was specified.")
            set(CMAKE_BUILD_TYPE "RelWithDebInfo" CACHE STRING "Choose the type of build." FORCE)
        elseif (NOT CMAKE_BUILD_TYPE IN_LIST allowed_build_types)
            message(FATAL_ERROR "Unknown build type: ${CMAKE_BUILD_TYPE}")
        endif ()
    endif ()

    # Options definition
    option(BUILD_TESTING "If enabled, the SDK will include tests in the build" OFF)

    message(STATUS "Setting toolchain and dependencies")
    if (BUILD_TESTING)
        message(STATUS "Building tests")
        enable_testing()
        # Testing dependency
        find_package(GTest 1.11 REQUIRED)
        include(GoogleTest) # for gtest_discover_tests()
    endif ()

    # Project dependencies http library (curl or OS), tinyxml2, cJSON, ssl (open or other), CRT
    find_package(CURL REQUIRED)
    find_package(ZLIB REQUIRED)
    find_package(OpenSSL REQUIRED COMPONENTS Crypto)
    pkg_check_modules(tinyxml2 REQUIRED IMPORTED_TARGET tinyxml2>=9.0.0)
    pkg_check_modules(CJSON REQUIRED IMPORTED_TARGET libcjson>=1.7.15)
    find_package(aws-crt-cpp 0.17.9 EXACT REQUIRED COMPONENTS io)

    message(STATUS "Preparing core library build")
    add_subdirectory(src)

    message(STATUS "Preparing CPack metadata")
    add_subdirectory(packaging)

    message(WARNING "The dependencies are currently checked only for a basic Linux build, new ones need to be added for other platforms yet")

    message(WARNING "Anything below this warning is a TODO not yet implemented.")

    message(STATUS "Setting up core library.")
    message(STATUS "Prepare CRT dependency.")
    message(STATUS "Building core library.")
    message(STATUS "Building core library tests.")
    message(STATUS "Add support for static analysis.")
    message(STATUS "Building client libraries.")
    message(STATUS "Setting up tests.")
    message(STATUS "Setting up installation.")
    message(STATUS "Setting up packaging. ")
    message(STATUS "Setting up docs.")
    message(STATUS "Add support support for SDK flags.")
    message(STATUS "Add previously available options.")
endif ()
