cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-kinesis)

  file(GLOB AWS_KINESIS_HEADERS
    "include/aws/kinesis/*.h"
  )

  file(GLOB AWS_KINESIS_MODEL_HEADERS
    "include/aws/kinesis/model/*.h"
  )

  file(GLOB AWS_KINESIS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_KINESIS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB KINESIS_SRC
    ${AWS_KINESIS_HEADERS}
    ${AWS_KINESIS_MODEL_HEADERS}
    ${AWS_KINESIS_SOURCE}
    ${AWS_KINESIS_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\kinesis" FILES ${AWS_KINESIS_HEADERS})
      source_group("Header Files\\aws\\kinesis\\model" FILES ${AWS_KINESIS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_KINESIS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_KINESIS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(KINESIS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${KINESIS_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_KINESIS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-kinesis ${LIBTYPE} ${KINESIS_SRC})

  target_include_directories(aws-cpp-sdk-kinesis PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-kinesis aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-kinesis
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_KINESIS_HEADERS} DESTINATION include/aws/kinesis)
  install (FILES ${AWS_KINESIS_MODEL_HEADERS} DESTINATION include/aws/kinesis/model)

