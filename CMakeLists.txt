# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_legacy")
include(initialize_project_version)
project("aws-cpp-sdk-all" VERSION "${PROJECT_VERSION}" LANGUAGES CXX)
include(legacy_main)
