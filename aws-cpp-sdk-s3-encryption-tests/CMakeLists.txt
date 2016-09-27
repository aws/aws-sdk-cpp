cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-s3-encryption-tests)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB S3ENCRYPTION_TEST_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

set(S3ECRYPTION_TEST_APPLICATION_INCLUDES
  "${CMAKE_SOURCE_DIR}/aws-cpp-sdk-core/include/"
  "${CMAKE_SOURCE_DIR}/aws-cpp-sdk-s3/include/"
  "${CMAKE_SOURCE_DIR}/aws-cpp-sdk-s3-encryption/include/"
  "${CMAKE_SOURCE_DIR}/testing-resources/include/"
  "${CMAKE_SOURCE_DIR}/aws-cpp-sdk-kms/include"
)

include_directories(${S3ECRYPTION_TEST_APPLICATION_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(runS3EncryptionTests ${LIBTYPE} ${S3ENCRYPTION_TEST_SRC})
else()
    add_executable(runS3EncryptionTests ${S3ENCRYPTION_TEST_SRC})
endif()

target_link_libraries(runS3EncryptionTests aws-cpp-sdk-s3-encryption testing-resources)
copyDlls(runS3EncryptionTests aws-cpp-sdk-core aws-cpp-sdk-s3 aws-cpp-sdk-kms aws-cpp-sdk-s3-encryption testing-resources)

if(NOT CMAKE_CROSSCOMPILING)
    ADD_CUSTOM_COMMAND( TARGET runS3EncryptionTests POST_BUILD COMMAND $<TARGET_FILE:runS3EncryptionTests>)
    SET_TARGET_PROPERTIES(runS3EncryptionTests PROPERTIES OUTPUT_NAME runS3EncryptionTests)
endif()