cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-storagegateway)

  file(GLOB AWS_STORAGEGATEWAY_HEADERS
    "include/aws/storagegateway/*.h"
  )

  file(GLOB AWS_STORAGEGATEWAY_MODEL_HEADERS
    "include/aws/storagegateway/model/*.h"
  )

  file(GLOB AWS_STORAGEGATEWAY_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_STORAGEGATEWAY_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB STORAGEGATEWAY_SRC
    ${AWS_STORAGEGATEWAY_HEADERS}
    ${AWS_STORAGEGATEWAY_MODEL_HEADERS}
    ${AWS_STORAGEGATEWAY_SOURCE}
    ${AWS_STORAGEGATEWAY_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\storagegateway" FILES ${AWS_STORAGEGATEWAY_HEADERS})
      source_group("Header Files\\aws\\storagegateway\\model" FILES ${AWS_STORAGEGATEWAY_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_STORAGEGATEWAY_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_STORAGEGATEWAY_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(STORAGEGATEWAY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${STORAGEGATEWAY_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_STORAGEGATEWAY_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-storagegateway ${LIBTYPE} ${STORAGEGATEWAY_SRC})

  target_include_directories(aws-cpp-sdk-storagegateway PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-storagegateway aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-storagegateway
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_STORAGEGATEWAY_HEADERS} DESTINATION include/aws/storagegateway)
  install (FILES ${AWS_STORAGEGATEWAY_MODEL_HEADERS} DESTINATION include/aws/storagegateway/model)

