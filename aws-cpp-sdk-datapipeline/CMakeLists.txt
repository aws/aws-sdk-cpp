cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-datapipeline)

  file(GLOB AWS_DATAPIPELINE_HEADERS
    "include/aws/datapipeline/*.h"
  )

  file(GLOB AWS_DATAPIPELINE_MODEL_HEADERS
    "include/aws/datapipeline/model/*.h"
  )

  file(GLOB AWS_DATAPIPELINE_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_DATAPIPELINE_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB DATAPIPELINE_SRC
    ${AWS_DATAPIPELINE_HEADERS}
    ${AWS_DATAPIPELINE_MODEL_HEADERS}
    ${AWS_DATAPIPELINE_SOURCE}
    ${AWS_DATAPIPELINE_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\datapipeline" FILES ${AWS_DATAPIPELINE_HEADERS})
      source_group("Header Files\\aws\\datapipeline\\model" FILES ${AWS_DATAPIPELINE_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_DATAPIPELINE_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_DATAPIPELINE_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(DATAPIPELINE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${DATAPIPELINE_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_DATAPIPELINE_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-datapipeline ${LIBTYPE} ${DATAPIPELINE_SRC})

  target_include_directories(aws-cpp-sdk-datapipeline PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-datapipeline aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-datapipeline
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_DATAPIPELINE_HEADERS} DESTINATION include/aws/datapipeline)
  install (FILES ${AWS_DATAPIPELINE_MODEL_HEADERS} DESTINATION include/aws/datapipeline/model)

