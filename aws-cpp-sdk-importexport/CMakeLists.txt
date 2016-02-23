cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-importexport)

  file(GLOB AWS_IMPORTEXPORT_HEADERS
    "include/aws/importexport/*.h"
  )

  file(GLOB AWS_IMPORTEXPORT_MODEL_HEADERS
    "include/aws/importexport/model/*.h"
  )

  file(GLOB AWS_IMPORTEXPORT_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_IMPORTEXPORT_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB IMPORTEXPORT_SRC
    ${AWS_IMPORTEXPORT_HEADERS}
    ${AWS_IMPORTEXPORT_MODEL_HEADERS}
    ${AWS_IMPORTEXPORT_SOURCE}
    ${AWS_IMPORTEXPORT_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\importexport" FILES ${AWS_IMPORTEXPORT_HEADERS})
      source_group("Header Files\\aws\\importexport\\model" FILES ${AWS_IMPORTEXPORT_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_IMPORTEXPORT_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_IMPORTEXPORT_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(IMPORTEXPORT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${IMPORTEXPORT_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_IMPORTEXPORT_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-importexport ${LIBTYPE} ${IMPORTEXPORT_SRC})

  target_include_directories(aws-cpp-sdk-importexport PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-importexport aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-importexport
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_IMPORTEXPORT_HEADERS} DESTINATION include/aws/importexport)
  install (FILES ${AWS_IMPORTEXPORT_MODEL_HEADERS} DESTINATION include/aws/importexport/model)

