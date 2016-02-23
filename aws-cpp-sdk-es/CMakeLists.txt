cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-es)

  file(GLOB AWS_ES_HEADERS
    "include/aws/es/*.h"
  )

  file(GLOB AWS_ES_MODEL_HEADERS
    "include/aws/es/model/*.h"
  )

  file(GLOB AWS_ES_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ES_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ES_SRC
    ${AWS_ES_HEADERS}
    ${AWS_ES_MODEL_HEADERS}
    ${AWS_ES_SOURCE}
    ${AWS_ES_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\es" FILES ${AWS_ES_HEADERS})
      source_group("Header Files\\aws\\es\\model" FILES ${AWS_ES_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ES_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ES_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ES_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ES_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ELASTICSEARCHSERVICE_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-es ${LIBTYPE} ${ES_SRC})

  target_include_directories(aws-cpp-sdk-es PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-es aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-es
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_ES_HEADERS} DESTINATION include/aws/es)
  install (FILES ${AWS_ES_MODEL_HEADERS} DESTINATION include/aws/es/model)

