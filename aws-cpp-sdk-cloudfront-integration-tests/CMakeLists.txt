cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-sqs-cloudfront-tests)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

  file(GLOB AWS_CLOUDFRONT_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
  )

  file(GLOB AWS_CLOUDFRONT_INTEGRATION_TESTS_SRC
    ${AWS_CLOUDFRONT_SRC}
  )

if(NOT MSVC)
  add_definitions(-std=c++0x)
endif()


set(AWS_CLOUDFRONT_INTEGRATION_TEST_APPLICATION_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-cloudfront/include/"
  "${AWS_NATIVE_SDK_ROOT}/testing-resources/include/"
)

include_directories(${AWS_CLOUDFRONT_INTEGRATION_TEST_APPLICATION_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(runCloudfrontIntegrationTests ${LIBTYPE} ${AWS_CLOUDFRONT_INTEGRATION_TESTS_SRC})
else()
    add_executable(runCloudfrontIntegrationTests ${AWS_CLOUDFRONT_INTEGRATION_TESTS_SRC})
endif()

target_link_libraries(runCloudfrontIntegrationTests aws-cpp-sdk-cloudfront testing-resources)
copyDlls(runCloudfrontIntegrationTests aws-cpp-sdk-core aws-cpp-sdk-cloudfront testing-resources)

