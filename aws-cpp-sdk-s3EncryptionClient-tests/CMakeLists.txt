cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-s3EncryptionClient-tests)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB S3ENCRYPTIONCLIENT_TEST_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

set(S3ECRYPTIONCLIENT_TEST_APPLICATION_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3EncryptionClient/include/"
  "${AWS_NATIVE_SDK_ROOT}/testing-resources/include/"
)

project(${PROJECT_NAME})

include_directories(${S3ECRYPTIONCLIENT_TEST_APPLICATION_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(runS3EncryptionClientTests ${LIBTYPE} ${S3ENCRYPTIONCLIENT_TEST_SRC})
else()
    add_executable(runS3EncryptionClientTests ${S3ENCRYPTIONCLIENT_TEST_SRC})
endif()

target_link_libraries(runS3EncryptionClientTests aws-cpp-sdk-s3EncryptionClient testing-resources)
copyDlls(runS3EncryptionClientTests aws-cpp-sdk-core aws-cpp-sdk-s3 aws-cpp-sdk-s3EncryptionClient testing-resources)
