# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
# aws_sdk_service_clients.cmake - Discovers and builds generated service clients
# and high-level SDKs for the modern (non-legacy) build path.

include_guard(GLOBAL)
include(sdksCommon)

# ---------------------------------------------------------------------------
# aws_sdk_add_service_client(<target_name> <source_dir> [DEPS dep1 dep2 ...])
#
# Creates a modern library target for a generated service client or high-level SDK.
# ---------------------------------------------------------------------------
function(aws_sdk_add_service_client _target _source_dir)
    cmake_parse_arguments(_ARG "" "" "DEPS" ${ARGN})

    file(GLOB_RECURSE _src "${_source_dir}/source/*.cpp")
    file(GLOB_RECURSE _hdrs "${_source_dir}/include/*.h")

    add_library(${_target} ${_src} ${_hdrs})
    add_library(AWS::${_target} ALIAS ${_target})

    target_include_directories(${_target} PUBLIC
        $<BUILD_INTERFACE:${_source_dir}/include>
        $<INSTALL_INTERFACE:include>)

    # Link core + any extra dependencies
    set(_link_deps aws-cpp-sdk-core)
    if(_ARG_DEPS)
        list(APPEND _link_deps ${_ARG_DEPS})
    endif()
    target_link_libraries(${_target} PUBLIC ${_link_deps})

    # DLL export definitions (Windows only — on non-Windows, symbols are visible by default)
    string(REGEX REPLACE "^aws-cpp-sdk-" "" _service_upper "${_target}")
    string(REPLACE "-" "_" _service_upper "${_service_upper}")
    string(TOUPPER "${_service_upper}" _service_upper)
    if(WIN32 AND BUILD_SHARED_LIBS)
        target_compile_definitions(${_target} PRIVATE "AWS_${_service_upper}_EXPORTS")
    endif()

    aws_sdk_set_compiler_options(${_target})

    # -- Install rules --
    include(GNUInstallDirs)
    install(TARGETS ${_target}
        EXPORT ${_target}-targets
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    )

    install(DIRECTORY "${_source_dir}/include/"
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
        FILES_MATCHING PATTERN "*.h"
    )

    install(EXPORT ${_target}-targets
        FILE ${_target}-targets.cmake
        NAMESPACE AWS::
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${_target}
    )

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
        "${CMAKE_CURRENT_BINARY_DIR}/${_target}-config-version.cmake"
        VERSION ${PROJECT_VERSION}
        COMPATIBILITY AnyNewerVersion
    )

    # Generate per-service config file
    file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/${_target}-config.cmake"
        "include(CMakeFindDependencyMacro)\n"
        "find_dependency(aws-cpp-sdk-core)\n"
        "if(NOT TARGET AWS::${_target})\n"
        "  include(\"\${CMAKE_CURRENT_LIST_DIR}/${_target}-targets.cmake\")\n"
        "endif()\n"
    )

    install(FILES
        "${CMAKE_CURRENT_BINARY_DIR}/${_target}-config.cmake"
        "${CMAKE_CURRENT_BINARY_DIR}/${_target}-config-version.cmake"
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${_target}
    )
endfunction()

# ---------------------------------------------------------------------------
# aws_sdk_build_service_clients()
#
# Main entry point. Validates AWS_SDK_BUILD_ONLY, discovers service directories,
# and adds targets for selected services and high-level SDKs.
# ---------------------------------------------------------------------------
function(aws_sdk_build_service_clients)
    # -- Require AWS_SDK_BUILD_ONLY --
    if(NOT AWS_SDK_BUILD_ONLY)
        message(FATAL_ERROR
            "AWS_SDK_BUILD_ONLY is required in the modern build path.\n"
            "Specify services: -DAWS_SDK_BUILD_ONLY=\"s3;dynamodb\"\n"
            "To build all services: -DAWS_SDK_BUILD_ONLY=\"all\"")
    endif()

    # -- Discover all available generated clients --
    file(GLOB _all_client_dirs LIST_DIRECTORIES true
        "${CMAKE_SOURCE_DIR}/generated/src/aws-cpp-sdk-*")

    set(_available_services "")
    foreach(_dir IN LISTS _all_client_dirs)
        if(IS_DIRECTORY "${_dir}")
            get_filename_component(_dirname "${_dir}" NAME)
            string(REGEX REPLACE "^aws-cpp-sdk-" "" _svc "${_dirname}")
            list(APPEND _available_services "${_svc}")
        endif()
    endforeach()

    # -- Determine which services to build --
    if(AWS_SDK_BUILD_ONLY STREQUAL "all")
        set(_services_to_build ${_available_services})
    else()
        set(_services_to_build ${AWS_SDK_BUILD_ONLY})
    endif()

    # -- Resolve high-level SDK dependencies into the service list --
    # HIGH_LEVEL_SDK_LIST and SDK_DEPENDENCY_LIST come from sdksCommon.cmake
    set(_high_level_to_build "")
    foreach(_svc IN LISTS _services_to_build)
        list(FIND HIGH_LEVEL_SDK_LIST "${_svc}" _hl_idx)
        if(_hl_idx GREATER -1)
            list(APPEND _high_level_to_build "${_svc}")
            # Add generated service dependencies for this high-level SDK
            get_dependencies_for_sdk("${_svc}" _deps)
            if(_deps)
                string(REPLACE "," ";" _dep_list "${_deps}")
                foreach(_dep IN LISTS _dep_list)
                    if(NOT _dep STREQUAL "core")
                        list(FIND _services_to_build "${_dep}" _dep_idx)
                        if(_dep_idx EQUAL -1)
                            list(APPEND _services_to_build "${_dep}")
                        endif()
                    endif()
                endforeach()
            endif()
        endif()
    endforeach()
    list(REMOVE_DUPLICATES _services_to_build)

    # -- Build generated service clients --
    set(_built_count 0)
    foreach(_svc IN LISTS _services_to_build)
        set(_svc_dir "${CMAKE_SOURCE_DIR}/generated/src/aws-cpp-sdk-${_svc}")
        if(IS_DIRECTORY "${_svc_dir}")
            set(_target "aws-cpp-sdk-${_svc}")
            aws_sdk_add_service_client(${_target} "${_svc_dir}")
            math(EXPR _built_count "${_built_count} + 1")
        endif()
    endforeach()

    # -- Build high-level SDKs --
    foreach(_hl IN LISTS _high_level_to_build)
        set(_hl_dir "${CMAKE_SOURCE_DIR}/src/aws-cpp-sdk-${_hl}")
        if(IS_DIRECTORY "${_hl_dir}")
            # Resolve link dependencies (excluding core, which is already linked)
            get_dependencies_for_sdk("${_hl}" _deps)
            set(_link_deps "")
            if(_deps)
                string(REPLACE "," ";" _dep_list "${_deps}")
                foreach(_dep IN LISTS _dep_list)
                    if(NOT _dep STREQUAL "core")
                        list(APPEND _link_deps "aws-cpp-sdk-${_dep}")
                    endif()
                endforeach()
            endif()

            set(_target "aws-cpp-sdk-${_hl}")
            aws_sdk_add_service_client(${_target} "${_hl_dir}" DEPS ${_link_deps})
            math(EXPR _built_count "${_built_count} + 1")
        endif()
    endforeach()

    message(STATUS "Modern build: ${_built_count} service client(s) configured.")
endfunction()
