cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-logs)

  file(GLOB AWS_LOGS_HEADERS
    "include/aws/logs/*.h"
  )

  file(GLOB AWS_LOGS_MODEL_HEADERS
    "include/aws/logs/model/*.h"
  )

  file(GLOB AWS_LOGS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_LOGS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB LOGS_SRC
    ${AWS_LOGS_HEADERS}
    ${AWS_LOGS_MODEL_HEADERS}
    ${AWS_LOGS_SOURCE}
    ${AWS_LOGS_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\logs" FILES ${AWS_LOGS_HEADERS})
      source_group("Header Files\\aws\\logs\\model" FILES ${AWS_LOGS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_LOGS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_LOGS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(LOGS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${LOGS_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDWATCHLOGS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-logs ${LIBTYPE} ${LOGS_SRC})

  target_include_directories(aws-cpp-sdk-logs PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-logs aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-logs
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_LOGS_HEADERS} DESTINATION include/aws/logs)
  install (FILES ${AWS_LOGS_MODEL_HEADERS} DESTINATION include/aws/logs/model)

