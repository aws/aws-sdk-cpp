cmake_minimum_required(VERSION 2.8.12)

set(PROJECT_NAME "aws-cpp-sdk-sqs-cloudfront-tests")
set(PROJECT_STRING    "${PROJECT_NAME}_${PROJECT_VERSION}")
set(PROJECT_DESCRIPTION "C++ interface for AWS Elasticbeanstalk")
set(PROJECT_TARNAME   "${PROJECT_NAME}-${PROJECT_VERSION}")
set(PROJECT_LIBS "")
list(APPEND PROJECT_LIBS "aws-cpp-sdk-core")
list(APPEND PROJECT_LIBS "aws-cpp-sdk-cloudfront")
list(APPEND PROJECT_LIBS "testing-resources")
 
list(APPEND PROJECT_LIBS "")

cmake_policy(SET CMP0048 NEW)
cmake_policy(SET CMP0054 NEW)
cmake_policy(SET CMP0056 NEW)

project("${PROJECT_NAME}" VERSION "${PROJECT_VERSION}" LANGUAGES CXX)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB AWS_CLOUDFRONT_SRC
"${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

file(GLOB AWS_CLOUDFRONT_INTEGRATION_TESTS_SRC
  ${AWS_CLOUDFRONT_SRC}
)

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${LIBTYPE} ${AWS_CLOUDFRONT_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_CLOUDFRONT_INTEGRATION_TESTS_SRC})
endif()

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})
copyDlls(${PROJECT_NAME} ${PROJECT_LIBS})
