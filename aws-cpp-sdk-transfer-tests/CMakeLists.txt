cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-transfer-integration-tests)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB TRANSFER_TEST_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

set(TRANSFER_INTEGRATION_TEST_APPLICATION_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-transfer/include/"
  "${AWS_NATIVE_SDK_ROOT}/testing-resources/include/"
)

project(${PROJECT_NAME})

include_directories(${TRANSFER_INTEGRATION_TEST_APPLICATION_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(runTransferIntegrationTests ${LIBTYPE} ${TRANSFER_TEST_SRC})
else()
    add_executable(runTransferIntegrationTests ${TRANSFER_TEST_SRC})
endif()

target_link_libraries(runTransferIntegrationTests aws-cpp-sdk-transfer testing-resources)
copyDlls(runTransferIntegrationTests aws-cpp-sdk-core aws-cpp-sdk-s3 aws-cpp-sdk-transfer testing-resources)
