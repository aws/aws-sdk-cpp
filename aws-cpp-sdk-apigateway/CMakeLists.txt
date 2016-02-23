cmake_minimum_required(VERSION 2.6)
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

  file(GLOB APIGATEWAY_SRC
    ${AWS_APIGATEWAY_HEADERS}
    ${AWS_APIGATEWAY_MODEL_HEADERS}
    ${AWS_APIGATEWAY_SOURCE}
    ${AWS_APIGATEWAY_MODEL_SOURCE}
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

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_APIGATEWAY_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-apigateway ${LIBTYPE} ${APIGATEWAY_SRC})

  target_include_directories(aws-cpp-sdk-apigateway PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-apigateway aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-apigateway
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_APIGATEWAY_HEADERS} DESTINATION include/aws/apigateway)
  install (FILES ${AWS_APIGATEWAY_MODEL_HEADERS} DESTINATION include/aws/apigateway/model)

