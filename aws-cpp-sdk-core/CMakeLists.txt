cmake_minimum_required(VERSION 2.8.5)
project(aws-cpp-sdk-core)

if(GENERATE_VERSION_INFO)
  find_package(Git)
  if(NOT GIT_FOUND)
    set( GIT_EXECUTABLE /usr/bin/git )
  endif()

  execute_process(COMMAND ${GIT_EXECUTABLE} describe
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    OUTPUT_VARIABLE VERSION_STRING
    OUTPUT_STRIP_TRAILING_WHITESPACE)

  set(Version_VERSION_STRING ${VERSION_STRING})

  if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/VersionConfig.h})
    FILE(REMOVE ${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/VersionConfig.h})
  endif()

  configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/VersionConfig.h.in"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/VersionConfig.h"
  )
endif()

if(USE_CURL_CLIENT)
    set(HTTP_CLIENT_DIR "curl")
else()
    set(HTTP_CLIENT_DIR "windows")
endif()

# Pretty sure we can use a regex here...
# Go ahead and glob every directory so we can work around Visual Studio's crap.
file(GLOB AWS_HEADERS "include/aws/core/*.h")
file(GLOB AWS_AUTH_HEADERS "include/aws/core/auth/*.h")
file(GLOB AWS_CLIENT_HEADERS "include/aws/core/client/*.h")
file(GLOB AWS_INTERNAL_HEADERS "include/aws/core/internal/*.h")
file(GLOB HTTP_HEADERS "include/aws/core/http/*.h")
file(GLOB HTTP_STANDARD_HEADERS "include/aws/core/http/standard/*.h")
file(GLOB HTTP_CLIENT_HEADERS "include/aws/core/http/${HTTP_CLIENT_DIR}/*.h")
file(GLOB UTILS_HEADERS "include/aws/core/utils/*.h")
file(GLOB UTILS_EVENT_HEADERS "include/aws/core/utils/event/*.h")
file(GLOB UTILS_BASE64_HEADERS "include/aws/core/utils/base64/*.h")
file(GLOB UTILS_CRYPTO_HEADERS "include/aws/core/utils/crypto/*.h")
file(GLOB UTILS_JSON_HEADERS "include/aws/core/utils/json/*.h")
file(GLOB UTILS_THREADING_HEADERS "include/aws/core/utils/threading/*.h")
file(GLOB UTILS_XML_HEADERS "include/aws/core/utils/xml/*.h")
file(GLOB UTILS_MEMORY_HEADERS "include/aws/core/utils/memory/*.h")
file(GLOB UTILS_STL_HEADERS "include/aws/core/utils/memory/stl/*.h")
file(GLOB UTILS_LOGGING_HEADERS "include/aws/core/utils/logging/*.h")
file(GLOB UTILS_RATE_LIMITER_HEADERS "include/aws/core/utils/ratelimiter/*.h")
file(GLOB UTILS_STREAM_HEADERS "include/aws/core/utils/stream/*.h")
file(GLOB JSONCPP_HEADERS "include/aws/core/external/json-cpp/*.h")
file(GLOB TINYXML2_HEADERS "include/aws/core/external/tinyxml2/tinyxml2.h")

file(GLOB AWS_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp")
file(GLOB AWS_TINYXML2_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/external/tinyxml2/*.cpp")
file(GLOB AWS_JSONCPP_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/external/json-cpp/*.cpp")
file(GLOB AWS_AUTH_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/auth/*.cpp")
file(GLOB AWS_CLIENT_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/client/*.cpp")
file(GLOB AWS_INTERNAL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/internal/*.cpp")
file(GLOB AWS_MODEL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/aws/model/*.cpp")
file(GLOB HTTP_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/http/*.cpp")
file(GLOB HTTP_STANDARD_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/http/standard/*.cpp")
file(GLOB HTTP_CLIENT_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/http/${HTTP_CLIENT_DIR}/*.cpp")
file(GLOB UTILS_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/*.cpp")
file(GLOB UTILS_EVENT_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/event/*.cpp")
file(GLOB UTILS_BASE64_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/base64/*.cpp")
file(GLOB UTILS_CRYPTO_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/crypto/*.cpp")
file(GLOB UTILS_JSON_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/json/*.cpp")
file(GLOB UTILS_THREADING_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/threading/*.cpp")
file(GLOB UTILS_XML_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/xml/*.cpp")
file(GLOB UTILS_LOGGING_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/logging/*.cpp")
file(GLOB UTILS_MEMORY_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/memory/*.cpp")
file(GLOB UTILS_STREAM_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/stream/*.cpp")


file(GLOB AWSNativeSDK_SHARED_SRC
  ${AWS_HEADERS}
  ${AWS_AUTH_HEADERS}
  ${AWS_CLIENT_HEADERS}
  ${AWS_INTERNAL_HEADERS}
  ${HTTP_HEADERS}
  ${HTTP_STANDARD_HEADERS}
  ${HTTP_CLIENT_HEADERS}
  ${UTILS_HEADERS}
  ${UTILS_EVENT_HEADERS}
  ${UTILS_BASE64_HEADERS}
  ${UTILS_CRYPTO_HEADERS}
  ${UTILS_JSON_HEADERS}
  ${UTILS_THREADING_HEADERS}
  ${UTILS_RETRY_HEADERS}
  ${UTILS_XML_HEADERS}
  ${UTILS_LOGGING_HEADERS}
  ${UTILS_MEMORY_HEADERS}
  ${UTILS_STL_HEADERS}
  ${UTILS_STREAM_HEADERS}
  ${UTILS_RATE_LIMITER_HEADERS}
  ${UTILS_STREAM_HEADERS}
  ${JSONCPP_HEADERS}
  ${TINYXML2_HEADERS}

  ${AWS_SOURCE}
  ${AWS_TINYXML2_SOURCE}
  ${AWS_JSONCPP_SOURCE}
  ${AWS_AUTH_SOURCE}
  ${AWS_CLIENT_SOURCE}
  ${AWS_INTERNAL_SOURCE}
  ${HTTP_SOURCE}
  ${HTTP_STANDARD_SOURCE}
  ${HTTP_CLIENT_SOURCE}
  ${UTILS_SOURCE}
  ${UTILS_EVENT_SOURCE}
  ${UTILS_BASE64_SOURCE}
  ${UTILS_CRYPTO_SOURCE}
  ${UTILS_JSON_SOURCE}
  ${UTILS_THREADING_SOURCE}
  ${UTILS_RETRY_SOURCE}
  ${UTILS_XML_SOURCE}
  ${UTILS_STREAM_SOURCE}
  ${UTILS_BASE64_WINDOWS_SOURCE}
  ${UTILS_LOGGING_SOURCE}
  ${UTILS_MEMORY_SOURCE}
  ${UTILS_STREAM_SOURCE}
) 

if(PLATFORM_WINDOWS)

  #add your windows specific impl stuff here.
  file(GLOB UTILS_BASE64_WINDOWS_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/base64/windows/*.cpp")
  file(GLOB UTILS_CRYPTO_WINDOWS_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/utils/crypto/windows/*.h")
  file(GLOB UTILS_CRYPTO_WINDOWS_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/crypto/windows/*.cpp")
  file(GLOB UTILS_WINDOWS_SOURCE = "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/windows/*.cpp")

  file(GLOB AWSNativeSDK_PLATFORM_SRC 
    ${UTILS_BASE64_WINDOWS_SOURCE}
    ${UTILS_CRYPTO_WINDOWS_SOURCE}
    ${UTILS_CRYPTO_WINDOWS_HEADERS}
    ${UTILS_WINDOWS_SOURCE}
  )

  #if we are compiling for visual studio, create a sane directory tree.
  if(MSVC)
     SET(UTILS_SOURCE ${UTILS_SOURCE} ${UTILS_WINDOWS_SOURCE})
     source_group("Header Files\\aws\\core" FILES ${AWS_HEADERS})
     source_group("Header Files\\aws\\core\\auth" FILES ${AWS_AUTH_HEADERS})
     source_group("Header Files\\aws\\core\\client" FILES ${AWS_CLIENT_HEADERS})
     source_group("Header Files\\aws\\core\\internal" FILES ${AWS_INTERNAL_HEADERS})
     source_group("Header Files\\aws\\core\\http" FILES ${HTTP_HEADERS})
     source_group("Header Files\\aws\\core\\http\\standard" FILES ${HTTP_STANDARD_HEADERS})
     source_group("Header Files\\aws\\core\\http\\${HTTP_CLIENT_DIR}" FILES ${HTTP_CLIENT_HEADERS})
     source_group("Header Files\\aws\\core\\utils" FILES ${UTILS_HEADERS})
     source_group("Header Files\\aws\\core\\utils\\base64" FILES ${UTILS_BASE64_HEADERS})
     source_group("Header Files\\aws\\core\\utils\\crypto" FILES ${UTILS_CRYPTO_HEADERS})
     source_group("Header Files\\aws\\core\\utils\\crypto\\windows" FILES ${UTILS_CRYPTO_WINDOWS_HEADERS})
     source_group("Header Files\\aws\\core\\utils\\exceptions" FILES ${UTILS_EXCEPTIONS_HEADERS})
     source_group("Header Files\\aws\\core\\utils\\json" FILES ${UTILS_JSON_HEADERS})
     source_group("Header Files\\aws\\core\\utils\\threading" FILES ${UTILS_THREADING_HEADERS})
     source_group("Header Files\\aws\\core\\utils\\xml" FILES ${UTILS_XML_HEADERS})
     source_group("Header Files\\aws\\core\\utils\\logging" FILES ${UTILS_LOGGING_HEADERS})
     source_group("Header Files\\aws\\core\\utils\\memory" FILES ${UTILS_MEMORY_HEADERS})
     source_group("Header Files\\aws\\core\\utils\\memory\\stl" FILES ${UTILS_STL_HEADERS})
     source_group("Header Files\\aws\\core\\utils\\stream" FILES ${UTILS_STREAM_HEADERS})
     source_group("Header Files\\aws\\core\\utils\\ratelimiter" FILES ${UTILS_RATE_LIMITER_HEADERS})
     source_group("Header Files\\aws\\core\\external\\json-cpp" FILES ${JSONCPP_HEADERS})
     source_group("Header Files\\aws\\core\\external\\tinyxml2" FILES ${TINYXML2_HEADERS})

     source_group("Source Files" FILES ${AWS_SOURCE})
     source_group("Source Files\\external\\json-cpp" FILES ${AWS_JSONCPP_SOURCE})
     source_group("Source Files\\external\\tinyxml2" FILES ${AWS_TINYXML2_SOURCE})
     source_group("Source Files\\auth" FILES ${AWS_AUTH_SOURCE})
     source_group("Source Files\\client" FILES ${AWS_CLIENT_SOURCE})
     source_group("Source Files\\internal" FILES ${AWS_INTERNAL_SOURCE})
     source_group("Source Files\\http" FILES ${HTTP_SOURCE})
     source_group("Source Files\\http\\standard" FILES ${HTTP_STANDARD_SOURCE})
     source_group("Source Files\\http\\${HTTP_CLIENT_DIR}" FILES ${HTTP_CLIENT_SOURCE})
     source_group("Source Files\\utils" FILES ${UTILS_SOURCE})
     source_group("Source Files\\utils\\base64" FILES ${UTILS_BASE64_SOURCE})
     source_group("Source Files\\utils\\crypto" FILES ${UTILS_CRYPTO_SOURCE})
     source_group("Source Files\\utils\\exceptions" FILES ${UTILS_EXCEPTIONS_SOURCE})
     source_group("Source Files\\utils\\json" FILES ${UTILS_JSON_SOURCE})
     source_group("Source Files\\utils\\threading" FILES ${UTILS_THREADING_SOURCE})
     source_group("Source Files\\utils\\xml" FILES ${UTILS_XML_SOURCE})
     source_group("Source Files\\utils\\stream" FILES ${UTILS_STREAM_SOURCE})
     source_group("Source Files\\utils\\base64\\windows" FILES ${UTILS_BASE64_WINDOWS_SOURCE})
     source_group("Source Files\\utils\\crypto\\windows" FILES ${UTILS_CRYPTO_WINDOWS_SOURCE})
     source_group("Source Files\\utils\\logging" FILES ${UTILS_LOGGING_SOURCE})
     source_group("Source Files\\utils\\memory" FILES ${UTILS_MEMORY_SOURCE})
  endif(MSVC)

elseif(PLATFORM_LINUX OR PLATFORM_ANDROID OR PLATFORM_APPLE)

  #add unix specific impl stuff here.
  file(GLOB UTILS_BASE64_OPENSSL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/base64/openssl/*.cpp")
  file(GLOB UTILS_CRYPTO_OPENSSL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/crypto/openssl/*.cpp")
  file(GLOB UTILS_UNIX_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/unix/*.cpp")

  if(PLATFORM_ANDROID)
    file(GLOB UTILS_LOGGING_ANDROID_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/logging/android/*.cpp")
    file(GLOB UTILS_LOGGING_ANDROID_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/utils/logging/android/*.h")
  endif()

  file(GLOB AWSNativeSDK_PLATFORM_SRC 
     ${UTILS_BASE64_OPENSSL_SOURCE}
     ${UTILS_CRYPTO_OPENSSL_SOURCE}
     ${UTILS_LOGGING_ANDROID_SOURCE}
     ${UTILS_LOGGING_ANDROID_HEADERS}
     ${UTILS_UNIX_SOURCE}
   )
endif()


file(GLOB AWSNativeSDK_SRC
  ${AWSNativeSDK_SHARED_SRC}
  ${AWSNativeSDK_PLATFORM_SRC}
)

set(Core_INCLUDES "${CMAKE_CURRENT_SOURCE_DIR}/include/")

include_directories(${Core_INCLUDES})

if(PLATFORM_WINDOWS AND MSVC AND BUILD_SHARED_LIBS)
  add_definitions("-DAWS_CORE_EXPORTS=1")
endif()

if(PLATFORM_ANDROID)
  add_definitions("-DCURL_STATICLIB")
 
  set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CURL_CXX_FLAGS} -I${CURL_INCLUDE_DIR}" )
  set( CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CURL_C_FLAGS} -I${CURL_INCLUDE_DIR}" )
  set( CMAKE_STATIC_LINKER_FLAGS "${CMAKE_STATIC_LINKER_FLAGS} ${CURL_STATIC_LINKER_FLAGS}" )
  set( CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} ${CURL_SHARED_LINKER_FLAGS}" )

endif()

add_library(aws-cpp-sdk-core ${LIBTYPE} ${AWSNativeSDK_SRC})

if(PLATFORM_ANDROID)
  add_dependencies(aws-cpp-sdk-core CURL)
endif()

target_link_libraries(aws-cpp-sdk-core ${PLATFORM_DEP_LIBS})

install (TARGETS aws-cpp-sdk-core ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
                                  LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
				                  RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

install (FILES ${AWS_HEADERS} DESTINATION include/aws/core)
install (FILES ${AWS_AUTH_HEADERS} DESTINATION include/aws/core/auth)
install (FILES ${AWS_CLIENT_HEADERS} DESTINATION include/aws/core/client)
install (FILES ${AWS_INTERNAL_HEADERS} DESTINATION include/aws/core/internal)
install (FILES ${HTTP_HEADERS} DESTINATION include/aws/core/http)
install (FILES ${HTTP_STANDARD_HEADERS} DESTINATION include/aws/core/http/standard)
install (FILES ${HTTP_CLIENT_HEADERS} DESTINATION include/aws/core/http/${HTTP_CLIENT_DIR})
install (FILES ${UTILS_HEADERS} DESTINATION include/aws/core/utils)
install (FILES ${UTILS_EVENT_HEADERS} DESTINATION include/aws/core/utils/event)
install (FILES ${UTILS_BASE64_HEADERS} DESTINATION include/aws/core/utils/base64)
install (FILES ${UTILS_CRYPTO_HEADERS} DESTINATION include/aws/core/utils/crypto)
install (FILES ${UTILS_JSON_HEADERS} DESTINATION include/aws/core/utils/json)
install (FILES ${UTILS_RETRY_HEADERS} DESTINATION include/aws/core/utils/retry)
install (FILES ${UTILS_XML_HEADERS} DESTINATION include/aws/core/utils/xml)
install (FILES ${UTILS_LOGGING_HEADERS} DESTINATION include/aws/core/utils/logging)
install (FILES ${UTILS_MEMORY_HEADERS} DESTINATION include/aws/core/utils/memory)
install (FILES ${UTILS_STL_HEADERS} DESTINATION include/aws/core/utils/memory/stl)
install (FILES ${UTILS_RATE_LIMITER_HEADERS} DESTINATION include/aws/core/utils/ratelimiter)
install (FILES ${UTILS_STREAM_HEADERS} DESTINATION include/aws/core/utils/stream)
install (FILES ${UTILS_THREADING_HEADERS} DESTINATION include/aws/core/utils/threading)
install (FILES ${JSONCPP_HEADERS} DESTINATION include/aws/core/external/json-cpp)
install (FILES ${TINYXML2_HEADERS} DESTINATION include/aws/core/external/tinyxml2)

#platform specific headers
if(PLATFORM_WINDOWS)
  install (FILES ${UTILS_CRYPTO_WINDOWS_HEADERS} DESTINATION include/aws/core/utils/crypto/windows)
endif()

