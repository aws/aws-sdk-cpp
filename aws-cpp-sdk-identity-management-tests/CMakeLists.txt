cmake_minimum_required(VERSION 2.8.12)

set(PROJECT_NAME "aws-cpp-sdk-identity-management-tests")
set(PROJECT_STRING    "${PROJECT_NAME}_${PROJECT_VERSION}")
set(PROJECT_DESCRIPTION "C++ interface for AWS Elasticbeanstalk")
set(PROJECT_TARNAME   "${PROJECT_NAME}-${PROJECT_VERSION}")
set(PROJECT_LIBS "")
list(APPEND PROJECT_LIBS "testing-resources")
list(APPEND PROJECT_LIBS "AWS::aws-cpp-sdk-core")
list(APPEND PROJECT_LIBS "AWS::aws-cpp-sdk-cognito-identity")
list(APPEND PROJECT_LIBS "AWS::aws-cpp-sdk-identity-management")

cmake_policy(SET CMP0028 NEW)
cmake_policy(SET CMP0048 NEW)
cmake_policy(SET CMP0054 NEW)
cmake_policy(SET CMP0056 NEW)

project("${PROJECT_NAME}" VERSION "${PROJECT_VERSION}" LANGUAGES CXX)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.
file(GLOB AWS_AUTH_SRC "${CMAKE_CURRENT_SOURCE_DIR}/auth/*.cpp")

file(GLOB AWS_CPP_SDK_IDENTITY_MANAGEMENT_TESTS_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/RunTests.cpp"
  ${AWS_AUTH_SRC}
)

if(PLATFORM_WINDOWS)
  if(MSVC)
    source_group("Source Files\\aws\\identity-management\\auth" FILES ${AWS_AUTH_SRC})
  endif()
endif()

enable_testing()

if(PLATFORM_WINDOWS AND MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${LIBTYPE} ${AWS_CPP_SDK_IDENTITY_MANAGEMENT_TESTS_SRC})
    add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})
else()
    add_executable(${PROJECT_NAME} ${AWS_CPP_SDK_IDENTITY_MANAGEMENT_TESTS_SRC})
endif()

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})
copyDlls(${PROJECT_NAME} ${PROJECT_LIBS})
if(NOT CMAKE_CROSSCOMPILING)
    ADD_CUSTOM_COMMAND( TARGET ${PROJECT_NAME} POST_BUILD COMMAND $<TARGET_FILE:${PROJECT_NAME}>)
    SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
endif()
