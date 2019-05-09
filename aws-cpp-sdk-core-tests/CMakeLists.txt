add_project(aws-cpp-sdk-core-tests 
    "Tests for the AWS Core C++ Library"
    testing-resources 
    aws-cpp-sdk-core )

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.
file(GLOB AWS_SRC "${CMAKE_CURRENT_SOURCE_DIR}/aws/*.cpp")
file(GLOB AWS_AUTH_SRC "${CMAKE_CURRENT_SOURCE_DIR}/aws/auth/*.cpp")
file(GLOB AWS_CONFIG_SRC "${CMAKE_CURRENT_SOURCE_DIR}/aws/config/*.cpp")
file(GLOB AWS_CLIENT_SRC "${CMAKE_CURRENT_SOURCE_DIR}/aws/client/*.cpp")
file(GLOB AWS_NET_SRC "${CMAKE_CURRENT_SOURCE_DIR}/aws/net/*.cpp")
file(GLOB HTTP_SRC "${CMAKE_CURRENT_SOURCE_DIR}/http/*.cpp")
file(GLOB UTILS_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/*.cpp")
file(GLOB UTILS_CRYPTO_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/crypto/*.cpp")
file(GLOB UTILS_EVENT_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/event/*.cpp")
file(GLOB UTILS_JSON_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/json/*.cpp")
file(GLOB UTILS_STREAM_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/stream/*.cpp")
file(GLOB UTILS_LOGGING_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/logging/*.cpp")
file(GLOB UTILS_RATE_LIMITER_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/ratelimiter/*.cpp")
file(GLOB UTILS_XML_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/xml/*.cpp")
file(GLOB UTILS_THREADING_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/threading/*.cpp")
file(GLOB UTILS_MEMORY_SRC "${CMAKE_CURRENT_SOURCE_DIR}/utils/memory/*.cpp")
file(GLOB MONITORING_SRC "${CMAKE_CURRENT_SOURCE_DIR}/monitoring/*.cpp")


file(GLOB AWS_CPP_SDK_CORE_TESTS_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/RunTests.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/VersionTests.cpp"
  ${AWS_SRC}
  ${AWS_AUTH_SRC}
  ${AWS_CONFIG_SRC}
  ${MONITORING_SRC}
  ${AWS_CLIENT_SRC}
  ${AWS_NET_SRC}
  ${HTTP_SRC}
  ${UTILS_SRC}
  ${UTILS_CRYPTO_SRC}
  ${UTILS_EVENT_SRC}
  ${UTILS_JSON_SRC}
  ${UTILS_STREAM_SRC}
  ${UTILS_XML_SRC}
  ${UTILS_THREADING_SRC}
  ${UTILS_MEMORY_SRC}
  ${UTILS_LOGGING_SRC}
  ${UTILS_RATE_LIMITER_SRC}
)

if(PLATFORM_WINDOWS)
  if(MSVC)
    source_group("Source Files\\aws" FILES ${AWS_SRC})
    source_group("Source Files\\aws\\auth" FILES ${AWS_AUTH_SRC})
    source_group("Source Files\\aws\\config" FILES ${AWS_CONFIG_SRC})
    source_group("Source Files\\aws\\client" FILES ${AWS_CLIENT_SRC})
    source_group("Source Files\\aws\\net" FILES ${AWS_NET_SRC})
    source_group("Source Files\\http" FILES  ${HTTP_SRC})
    source_group("Source Files\\monitoring" FILES ${MONITORING_SRC})
    source_group("Source Files\\utils" FILES ${UTILS_SRC})
    source_group("Source Files\\utils\\crypto" FILES ${UTILS_CRYPTO_SRC})
    source_group("Source Files\\utils\\event" FILES ${UTILS_EVENT_SRC})
    source_group("Source Files\\utils\\json" FILES ${UTILS_JSON_SRC})
    source_group("Source Files\\utils\\stream" FILES ${UTILS_STREAM_SRC})
    source_group("Source Files\\utils\\xml" FILES ${UTILS_XML_SRC})
    source_group("Source Files\\utils\\logging" FILES ${UTILS_LOGGING_SRC})
    source_group("Source Files\\utils\\ratelimiter" FILES ${UTILS_RATE_LIMITER_SRC})
    source_group("Source Files\\utils\\memory" FILES ${UTILS_MEMORY_SRC})
    source_group("Source Files\\utils\\threading" FILES ${UTILS_THREADING_SRC})
  endif()
endif()

if(PLATFORM_CUSTOM)
    if(COMMAND add_custom_core_testing_definitions)
        add_custom_core_testing_definitions()
    endif()
endif()

if (CMAKE_CROSSCOMPILING)
    set(AUTORUN_UNIT_TESTS OFF)
endif()

if (AUTORUN_UNIT_TESTS)
    enable_testing()
endif()

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${AWS_CPP_SDK_CORE_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_CPP_SDK_CORE_TESTS_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if (NO_HTTP_CLIENT)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "NO_HTTP_CLIENT")
endif()

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

add_custom_command(TARGET aws-cpp-sdk-core-tests PRE_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                   ${CMAKE_CURRENT_SOURCE_DIR}/resources ${CMAKE_CURRENT_BINARY_DIR})

if (AUTORUN_UNIT_TESTS)
    ADD_CUSTOM_COMMAND( TARGET ${PROJECT_NAME} POST_BUILD COMMAND $<TARGET_FILE:${PROJECT_NAME}>
        ARGS "--gtest_shuffle" "--gtest_repeat=3")
endif()

if(NOT CMAKE_CROSSCOMPILING)
    SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
endif()
