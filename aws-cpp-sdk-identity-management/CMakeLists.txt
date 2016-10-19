cmake_minimum_required(VERSION 2.8.12)

set(PROJECT_NAME "aws-cpp-sdk-identity-management")
set(PROJECT_STRING    "${PROJECT_NAME}_${PROJECT_VERSION}")
set(PROJECT_DESCRIPTION "C++ interface for AWS Elasticbeanstalk")
set(PROJECT_TARNAME   "${PROJECT_NAME}-${PROJECT_VERSION}")
set(PROJECT_LIBS "")
list(APPEND PROJECT_LIBS "AWS::aws-cpp-sdk-core")
list(APPEND PROJECT_LIBS "AWS::aws-cpp-sdk-cognito-identity")

cmake_policy(SET CMP0048 NEW)
cmake_policy(SET CMP0054 NEW)
cmake_policy(SET CMP0056 NEW)

project("${PROJECT_NAME}" VERSION "${PROJECT_VERSION}" LANGUAGES CXX)

file(GLOB AWS_IDENTITY_PROVIDER_HEADERS
    "include/aws/identity-management/auth/*.h"
)

file(GLOB AWS_IDENTITY_HEADERS
    "include/aws/identity-management/*.h"
)

file(GLOB AWS_IDENTITY_PROVIDER_SOURCE
     "source/auth/*.cpp"
 )

if(MSVC)
    source_group("Header Files\\aws\\identity-management\\auth" FILES ${AWS_IDENTITY_PROVIDER_HEADERS})
    source_group("Header Files\\aws\\identity-management" FILES ${AWS_IDENTITY_HEADERS})
    source_group("Source Files\\auth" FILES ${AWS_IDENTITY_PROVIDER_SOURCE})
endif()

file(GLOB IDENTITY_MGMT_SRC
  ${AWS_IDENTITY_PROVIDER_HEADERS}
  ${AWS_IDENTITY_HEADERS}
  ${AWS_IDENTITY_PROVIDER_SOURCE}
)

set(IDENTITY_MGMT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    
    
  )

include_directories(${IDENTITY_MGMT_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_IDENTITY_MANAGEMENT_EXPORTS")
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${IDENTITY_MGMT_SRC})
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

install (FILES ${AWS_IDENTITY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/identity-management)
install (FILES ${AWS_IDENTITY_PROVIDER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/identity-management/auth)


if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/aws-cpp-sdk-identity-management.autopkg DESTINATION nuget)
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
