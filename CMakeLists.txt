#
# Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License").
# You may not use this file except in compliance with the License.
# A copy of the License is located at
# 
#  http://aws.amazon.com/apache2.0
# 
# or in the "license" file accompanying this file. This file is distributed
# on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
# express or implied. See the License for the specific language governing
# permissions and limitations under the License.
#

cmake_minimum_required (VERSION 2.8.12)

# 3.0 or higher is strongly suggested; build settings (target_compile_options/etc...) sometimes do not get propagated properly under certain conditions prior to this version
# Making this a hard requirement is potentially disruptive to existing customers who aren't affected by the bad behavior though, so just warn for now
if(CMAKE_MAJOR_VERSION LESS 3)
    message(WARNING "Building with CMake 3.0 or higher is strongly suggested; current version is ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}.${CMAKE_PATCH_VERSION}")
endif()

# git is required for Android builds and optional for all other platforms
find_package(Git)

# Cmake invocation variables:
#   CUSTOM_MEMORY_MANAGEMENT - if set to 1, generates the sdk project files with custom memory management enabled, otherwise disables it
#   BUILD_ONLY - a semi-colon delimited list, if this is set we will build only the projects listed. Core will always be built as will its unit tests.
#                    Also if a high level client is specified then we will build its dependencies as well. If a project has tests, the tests will be built.
#   REGENERATE_CLIENTS - all clients being built on this run will be regenerated from the api definitions, this option involves some setup of python, java 8, jdk 1.8, and maven
#   ADD_CUSTOM_CLIENTS - semi-colon delimited list of format serviceName=<yourserviceName>,version=<theVersionNumber>;serviceName2=<yourOtherServiceName>,version=<versionNumber2>
#                          to use these arguments, you should add the api definition .normal.json file for your service to the api-description folder in the generator.
#   NDK_DIR - directory where the android NDK is installed; if not set, the location will be read from the ANDROID_NDK environment variable
#   CUSTOM_PLATFORM_DIR - directory where custom platform scripts, modules, and source resides

# TODO: convert boolean invocation variables to options
option(ENABLE_UNITY_BUILD "If enabled, the SDK will be built using a single unified .cpp file for each service library.  Reduces the size of static library binaries on Windows and Linux" OFF)
option(MINIMIZE_SIZE "If enabled, the SDK will be built via a unity aggregation process that results in smaller static libraries; additionally, release binaries will favor size optimizations over speed" OFF)
option(BUILD_SHARED_LIBS "If enabled, all aws sdk libraries will be build as shared objects; otherwise all Aws libraries will be built as static objects" ON)
option(FORCE_SHARED_CRT "If enabled, will unconditionally link the standard libraries in dynamically, otherwise the standard library will be linked in based on the BUILD_SHARED_LIBS setting" ON)
option(DISABLE_ANDROID_STANDALONE_BUILD "If enabled, the android build will not attempt to generate a standalone toolchain and instead rely on externally passed cmake parameters to specify the complete build environment.  The included toolchain file is still used." OFF)
option(SIMPLE_INSTALL "If enabled, removes all the additional indirection (platform/cpu/config) in the bin and lib directories on the install step" ON)
option(NO_HTTP_CLIENT "If enabled, no platform-default http client will be included in the library.  For the library to be used you will need to provide your own platform-specific implementation" OFF)
option(NO_ENCRYPTION "If enabled, no platform-default encryption will be included in the library.  For the library to be used you will need to provide your own platform-specific implementations" OFF)
option(USE_IXML_HTTP_REQUEST_2 "If enabled on windows, the com object IXmlHttpRequest2 will be used for the http stack" OFF)
option(ENABLE_RTTI "Flag to enable/disable rtti within the library" ON)
option(ENABLE_TESTING "Flag to enable/disable building unit and integration tests" ON)
option(ANDROID_BUILD_CURL "When building for Android, should curl be built as well" ON)
option(ANDROID_BUILD_OPENSSL "When building for Android, should Openssl be built as well" ON)
option(ANDROID_BUILD_ZLIB "When building for Android, should Zlib be built as well" ON)
option(FORCE_CURL "Forces usage of the Curl client rather than the default OS-specific api" OFF)

set(BUILD_ONLY "" CACHE STRING "A semi-colon delimited list of the projects to build")
set(CPP_STANDARD "11" CACHE STRING "Flag to upgrade the C++ standard used. The default is 11. The minimum is 11.")

# backwards compatibility with old command line params
if("${STATIC_LINKING}" STREQUAL "1")
    SET(BUILD_SHARED_LIBS OFF)
endif()

if(MINIMIZE_SIZE)
    message(STATUS "MINIMIZE_SIZE enabled")
    SET(ENABLE_UNITY_BUILD ON) # MINIMIZE_SIZE always implies UNITY_BUILD
endif()

SET(PYTHON_CMD "python")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

include(resolve_platform)
include(CMakePackageConfigHelpers)

# use response files to prevent command-line-too-big errors for large libraries like iam
SET(CMAKE_CXX_USE_RESPONSE_FILE_FOR_OBJECTS 1)
SET(CMAKE_CXX_USE_RESPONSE_FILE_FOR_INCLUDES 1)
SET(CMAKE_CXX_RESPONSE_FILE_LINK_FLAG "@")

if(COMMAND apply_pre_project_platform_settings)
    apply_pre_project_platform_settings()
endif()

include(initialize_project_version)

cmake_policy(SET CMP0028 NEW)
cmake_policy(SET CMP0048 NEW)
cmake_policy(SET CMP0054 NEW)
cmake_policy(SET CMP0056 NEW)

project("aws-cpp-sdk-all" VERSION "${PROJECT_VERSION}" LANGUAGES CXX)

# http client, encryption, zlib, uuid
include(external_dependencies)

if(COMMAND apply_post_project_platform_settings)
    apply_post_project_platform_settings()
endif()

set(CMAKE_CONFIGURATION_TYPES
        Debug                   # Setup for easy debugging. No optimizations.
        DebugOpt                # An optimized version of Debug.
        Release                 # Fully optimized, no debugging information.
        RelWithDebInfo          # A debuggable version of Release.
        MinSizeRel              # Like Release, but optimized for memory rather than speed.
        )

include(compiler_settings)

include(sdks)

include(utilities)

get_filename_component(AWS_NATIVE_SDK_ROOT "${CMAKE_CURRENT_SOURCE_DIR}" ABSOLUTE)

include(build_external)

if(ENABLE_BCRYPT_ENCRYPTION)
    set(CRYPTO_LIBS Bcrypt)
elseif(ENABLE_OPENSSL_ENCRYPTION)
    set(CRYPTO_LIBS ${OPENSSL_LIBRARIES} ${ZLIB_LIBRARIES})
endif()

if(ENABLE_CURL_CLIENT)
    set(CLIENT_LIBS ${CURL_LIBRARIES})
elseif(ENABLE_WINDOWS_CLIENT)
    if(USE_IXML_HTTP_REQUEST_2)
        set(CLIENT_LIBS msxml6 runtimeobject)
    else()
        set(CLIENT_LIBS Wininet winhttp)
    endif()
endif()

add_sdks()

