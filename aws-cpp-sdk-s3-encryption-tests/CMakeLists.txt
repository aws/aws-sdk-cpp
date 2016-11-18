add_project(aws-cpp-sdk-s3-encryption-tests 
    "Unit tests for the Amazon S3 Encryption Client"
    testing-resources 
    aws-cpp-sdk-core 
    aws-cpp-sdk-s3 
    aws-cpp-sdk-kms 
    aws-cpp-sdk-s3-encryption)

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
    add_library(aws-cpp-sdk-s3-encryption-tests ${LIBTYPE} ${S3ENCRYPTION_TEST_SRC})
else()
    add_executable(aws-cpp-sdk-s3-encryption-tests ${S3ENCRYPTION_TEST_SRC})
endif()

target_link_libraries(aws-cpp-sdk-s3-encryption-tests ${PROJECT_LIBS})
copyDlls(aws-cpp-sdk-s3-encryption-tests ${PROJECT_LIBS})

if(NOT CMAKE_CROSSCOMPILING)
    ADD_CUSTOM_COMMAND( TARGET aws-cpp-sdk-s3-encryption-tests POST_BUILD COMMAND $<TARGET_FILE:aws-cpp-sdk-s3-encryption-tests>)
    SET_TARGET_PROPERTIES(aws-cpp-sdk-s3-encryption-tests PROPERTIES OUTPUT_NAME aws-cpp-sdk-s3-encryption-tests)
endif()