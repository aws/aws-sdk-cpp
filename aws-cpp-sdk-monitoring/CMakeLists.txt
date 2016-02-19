cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-monitoring)

  file(GLOB AWS_MONITORING_HEADERS
    "include/aws/monitoring/*.h"
  )

  file(GLOB AWS_MONITORING_MODEL_HEADERS
    "include/aws/monitoring/model/*.h"
  )

  file(GLOB AWS_MONITORING_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_MONITORING_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB MONITORING_SRC
    ${AWS_MONITORING_HEADERS}
    ${AWS_MONITORING_MODEL_HEADERS}
    ${AWS_MONITORING_SOURCE}
    ${AWS_MONITORING_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\monitoring" FILES ${AWS_MONITORING_HEADERS})
      source_group("Header Files\\aws\\monitoring\\model" FILES ${AWS_MONITORING_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_MONITORING_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_MONITORING_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(MONITORING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${MONITORING_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDWATCH_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-monitoring ${LIBTYPE} ${MONITORING_SRC})

  target_include_directories(aws-cpp-sdk-monitoring PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-monitoring aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-monitoring
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_MONITORING_HEADERS} DESTINATION include/aws/monitoring)
  install (FILES ${AWS_MONITORING_MODEL_HEADERS} DESTINATION include/aws/monitoring/model)

