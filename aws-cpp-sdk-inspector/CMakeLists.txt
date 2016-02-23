cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-inspector)

  file(GLOB AWS_INSPECTOR_HEADERS
    "include/aws/inspector/*.h"
  )

  file(GLOB AWS_INSPECTOR_MODEL_HEADERS
    "include/aws/inspector/model/*.h"
  )

  file(GLOB AWS_INSPECTOR_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_INSPECTOR_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB INSPECTOR_SRC
    ${AWS_INSPECTOR_HEADERS}
    ${AWS_INSPECTOR_MODEL_HEADERS}
    ${AWS_INSPECTOR_SOURCE}
    ${AWS_INSPECTOR_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\inspector" FILES ${AWS_INSPECTOR_HEADERS})
      source_group("Header Files\\aws\\inspector\\model" FILES ${AWS_INSPECTOR_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_INSPECTOR_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_INSPECTOR_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(INSPECTOR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${INSPECTOR_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_INSPECTOR_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-inspector ${LIBTYPE} ${INSPECTOR_SRC})

  target_include_directories(aws-cpp-sdk-inspector PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-inspector aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-inspector
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_INSPECTOR_HEADERS} DESTINATION include/aws/inspector)
  install (FILES ${AWS_INSPECTOR_MODEL_HEADERS} DESTINATION include/aws/inspector/model)

