cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-iot)

  file(GLOB AWS_IOT_HEADERS
    "include/aws/iot/*.h"
  )

  file(GLOB AWS_IOT_MODEL_HEADERS
    "include/aws/iot/model/*.h"
  )

  file(GLOB AWS_IOT_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_IOT_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB IOT_SRC
    ${AWS_IOT_HEADERS}
    ${AWS_IOT_MODEL_HEADERS}
    ${AWS_IOT_SOURCE}
    ${AWS_IOT_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\iot" FILES ${AWS_IOT_HEADERS})
      source_group("Header Files\\aws\\iot\\model" FILES ${AWS_IOT_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_IOT_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_IOT_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(IOT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${IOT_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_IOT_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-iot ${LIBTYPE} ${IOT_SRC})

  target_include_directories(aws-cpp-sdk-iot PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-iot aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-iot
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_IOT_HEADERS} DESTINATION include/aws/iot)
  install (FILES ${AWS_IOT_MODEL_HEADERS} DESTINATION include/aws/iot/model)

