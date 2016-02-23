cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-events)

  file(GLOB AWS_EVENTS_HEADERS
    "include/aws/events/*.h"
  )

  file(GLOB AWS_EVENTS_MODEL_HEADERS
    "include/aws/events/model/*.h"
  )

  file(GLOB AWS_EVENTS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_EVENTS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB EVENTS_SRC
    ${AWS_EVENTS_HEADERS}
    ${AWS_EVENTS_MODEL_HEADERS}
    ${AWS_EVENTS_SOURCE}
    ${AWS_EVENTS_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\events" FILES ${AWS_EVENTS_HEADERS})
      source_group("Header Files\\aws\\events\\model" FILES ${AWS_EVENTS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_EVENTS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_EVENTS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(EVENTS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${EVENTS_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDWATCHEVENTS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-events ${LIBTYPE} ${EVENTS_SRC})

  target_include_directories(aws-cpp-sdk-events PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-events aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-events
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_EVENTS_HEADERS} DESTINATION include/aws/events)
  install (FILES ${AWS_EVENTS_MODEL_HEADERS} DESTINATION include/aws/events/model)

