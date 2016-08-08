cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-apigateway)

  file(GLOB AWS_APIGATEWAY_HEADERS
    "include/aws/apigateway/*.h"
  )

  file(GLOB AWS_APIGATEWAY_MODEL_HEADERS
    "include/aws/apigateway/model/*.h"
  )

  file(GLOB AWS_APIGATEWAY_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_APIGATEWAY_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB APIGATEWAY_UNIFIED_HEADERS
    ${AWS_APIGATEWAY_HEADERS}
    ${AWS_APIGATEWAY_MODEL_HEADERS}
  )

  file(GLOB APIGATEWAY_UNITY_SRC
    ${AWS_APIGATEWAY_SOURCE}
    ${AWS_APIGATEWAY_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("APIGATEWAY" APIGATEWAY_UNITY_SRC)
  endif()

  file(GLOB APIGATEWAY_SRC
    ${APIGATEWAY_UNIFIED_HEADERS}
    ${APIGATEWAY_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\apigateway" FILES ${AWS_APIGATEWAY_HEADERS})
      source_group("Header Files\\aws\\apigateway\\model" FILES ${AWS_APIGATEWAY_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_APIGATEWAY_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_APIGATEWAY_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(APIGATEWAY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${APIGATEWAY_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_APIGATEWAY_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-apigateway ${LIBTYPE} ${APIGATEWAY_SRC})

  target_include_directories(aws-cpp-sdk-apigateway PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-apigateway aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-apigateway
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-apigateway)
    else()
      install (TARGETS aws-cpp-sdk-apigateway
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_APIGATEWAY_HEADERS} DESTINATION include/aws/apigateway)
  install (FILES ${AWS_APIGATEWAY_MODEL_HEADERS} DESTINATION include/aws/apigateway/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-apigateway.autopkg DESTINATION nuget)
  endif()



