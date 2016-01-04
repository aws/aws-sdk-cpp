cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-core-tests)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.
file(GLOB AWS_SRC "${CMAKE_CURRENT_SOURCE_DIR}/aws/*.cpp")
file(GLOB AWS_AUTH_SRC "${CMAKE_CURRENT_SOURCE_DIR}/aws/auth/*.cpp")
file(GLOB AWS_CLIENT_SRC "${CMAKE_CURRENT_SOURCE_DIR}/aws/client/*.cpp")
file(GLOB HTTP_SRC "${CMAKE_CURRENT_SOURCE_DIR}/http/*.cpp")
file(GLOB UTILS_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/*.cpp")
file(GLOB UTILS_JSON_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/json/*.cpp")
file(GLOB UTILS_LOGGING_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/logging/*.cpp")
file(GLOB UTILS_MEMORY_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/memory/*.cpp")
file(GLOB UTILS_RATE_LIMITER_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/ratelimiter/*.cpp")
file(GLOB UTILS_XML_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/xml/*.cpp")

file(GLOB AWS_CPP_SDK_CORE_TESTS_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/RunTests.cpp"
  ${AWS_SRC}
  ${AWS_AUTH_SRC}
  ${AWS_CLIENT_SRC}
  ${HTTP_SRC}
  ${UTILS_SRC}
  ${UTILS_JSON_SRC}
  ${UTILS_XML_SRC}
  ${UTILS_LOGGING_SRC}
  ${UTILS_MEMORY_SRC}
  ${UTILS_RATE_LIMITER_SRC}
)

if(PLATFORM_WINDOWS)
  if(MSVC)
    source_group("Source Files\\aws" FILES ${AWS_SRC})
    source_group("Source Files\\aws\\auth" FILES ${AWS_AUTH_SRC})
    source_group("Source Files\\aws\\client" FILES ${AWS_CLIENT_SRC})
    source_group("Source Files\\http" FILES  ${HTTP_SRC})
    source_group("Source Files\\utils" FILES ${UTILS_SRC})
    source_group("Source Files\\utils\\json" FILES ${UTILS_JSON_SRC})
    source_group("Source Files\\utils\\xml" FILES ${UTILS_XML_SRC})
    source_group("Source Files\\utils\\logging" FILES ${UTILS_LOGGING_SRC})
    source_group("Source Files\\utils\\memory" FILES ${UTILS_MEMORY_SRC})
    source_group("Source Files\\utils\\ratelimiter" FILES ${UTILS_RATE_LIMITER_SRC})
  endif()
endif()

set(TestApplication_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/testing-resources/include/"
)

include_directories(${TestApplication_INCLUDES})

enable_testing()

if(PLATFORM_WINDOWS AND MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(runCoreUnitTests ${LIBTYPE} ${AWS_CPP_SDK_CORE_TESTS_SRC})
else()
    add_executable(runCoreUnitTests ${AWS_CPP_SDK_CORE_TESTS_SRC})
endif()

target_link_libraries(runCoreUnitTests aws-cpp-sdk-core testing-resources)

copyDlls(runCoreUnitTests aws-cpp-sdk-core testing-resources)

if(NOT PLATFORM_ANDROID)
    ADD_CUSTOM_COMMAND( TARGET runCoreUnitTests POST_BUILD COMMAND $<TARGET_FILE:runCoreUnitTests>)
    SET_TARGET_PROPERTIES(runCoreUnitTests PROPERTIES OUTPUT_NAME runCoreUnitTests)
endif()

