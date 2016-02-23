cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-cloudsearch)

  file(GLOB AWS_CLOUDSEARCH_HEADERS
    "include/aws/cloudsearch/*.h"
  )

  file(GLOB AWS_CLOUDSEARCH_MODEL_HEADERS
    "include/aws/cloudsearch/model/*.h"
  )

  file(GLOB AWS_CLOUDSEARCH_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_CLOUDSEARCH_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB CLOUDSEARCH_SRC
    ${AWS_CLOUDSEARCH_HEADERS}
    ${AWS_CLOUDSEARCH_MODEL_HEADERS}
    ${AWS_CLOUDSEARCH_SOURCE}
    ${AWS_CLOUDSEARCH_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\cloudsearch" FILES ${AWS_CLOUDSEARCH_HEADERS})
      source_group("Header Files\\aws\\cloudsearch\\model" FILES ${AWS_CLOUDSEARCH_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_CLOUDSEARCH_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_CLOUDSEARCH_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(CLOUDSEARCH_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${CLOUDSEARCH_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDSEARCH_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-cloudsearch ${LIBTYPE} ${CLOUDSEARCH_SRC})

  target_include_directories(aws-cpp-sdk-cloudsearch PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-cloudsearch aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-cloudsearch
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_CLOUDSEARCH_HEADERS} DESTINATION include/aws/cloudsearch)
  install (FILES ${AWS_CLOUDSEARCH_MODEL_HEADERS} DESTINATION include/aws/cloudsearch/model)

