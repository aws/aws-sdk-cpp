cmake_minimum_required(VERSION 2.8.12)

set(PROJECT_NAME "aws-cpp-sdk-transfer")
set(PROJECT_STRING    "${PROJECT_NAME}_${PROJECT_VERSION}")
set(PROJECT_DESCRIPTION "C++ interface for AWS Elasticbeanstalk")
set(PROJECT_TARNAME   "${PROJECT_NAME}-${PROJECT_VERSION}")
set(PROJECT_LIBS "")
list(APPEND PROJECT_LIBS "AWS::aws-cpp-sdk-core")
list(APPEND PROJECT_LIBS "AWS::aws-cpp-sdk-s3")

cmake_policy(SET CMP0028 NEW)
cmake_policy(SET CMP0048 NEW)
cmake_policy(SET CMP0054 NEW)
cmake_policy(SET CMP0056 NEW)

project("${PROJECT_NAME}" VERSION "${PROJECT_VERSION}" LANGUAGES CXX)

file( GLOB TRANSFER_HEADERS "include/aws/transfer/*.h" )

file( GLOB TRANSFER_SOURCE "source/transfer/*.cpp" )

if(MSVC)
    source_group("Header Files\\aws\\transfer" FILES ${TRANSFER_HEADERS})
    source_group("Source Files\\transfer" FILES ${TRANSFER_SOURCE})
endif()

file(GLOB ALL_TRANSFER_HEADERS
    ${TRANSFER_HEADERS}
)

file(GLOB ALL_TRANSFER_SOURCE
    ${TRANSFER_SOURCE}
)

file(GLOB ALL_TRANSFER
    ${ALL_TRANSFER_HEADERS}
    ${ALL_TRANSFER_SOURCE}
)

set(TRANSFER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    
    
  )

include_directories(${TRANSFER_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_TRANSFER_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${ALL_TRANSFER})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

configure_file("${CMAKE_SOURCE_DIR}/toolchains/pkg-config.pc.in" "${PROJECT_NAME}.pc" @ONLY)

if(SIMPLE_INSTALL)
    install (TARGETS ${PROJECT_NAME}
             EXPORT "${PROJECT_NAME}-targets"
             ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
             LIBRARY DESTINATION ${LIBRARY_DIRECTORY}
             RUNTIME DESTINATION ${BINARY_DIRECTORY})
    if (BUILD_SHARED_LIBS)
        install(
            FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.pc"
            DESTINATION ${LIBRARY_DIRECTORY}/pkgconfig)
    endif()

else()
    if(PLATFORM_CUSTOM)
        install_custom_library(${PROJECT_NAME})
    else()
        install (TARGETS ${PROJECT_NAME}
                 EXPORT "${PROJECT_NAME}-targets"
                 ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
                 LIBRARY DESTINATION ${LIBRARY_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
                 RUNTIME DESTINATION ${BINARY_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
endif()

install (FILES ${ALL_TRANSFER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/transfer)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/aws-cpp-sdk-transfer.autopkg DESTINATION nuget)
endif()

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY AnyNewerVersion
)

export(EXPORT "${PROJECT_NAME}-targets"
    FILE "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-targets.cmake"
    NAMESPACE AWS::
)

configure_file(
    "${CMAKE_SOURCE_DIR}/toolchains/cmakeProjectConfig.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake"
    @ONLY)

set(ConfigPackageLocation "${LIBRARY_DIRECTORY}/cmake/${PROJECT_NAME}")
install(EXPORT "${PROJECT_NAME}-targets"
    FILE "${PROJECT_NAME}-targets.cmake"
    NAMESPACE AWS::
    DESTINATION ${ConfigPackageLocation}
)

install(
    FILES
      "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake"
      "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake"
    DESTINATION
      ${ConfigPackageLocation}
    COMPONENT
      Devel)
