cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-ds)

  file(GLOB AWS_DS_HEADERS
    "include/aws/ds/*.h"
  )

  file(GLOB AWS_DS_MODEL_HEADERS
    "include/aws/ds/model/*.h"
  )

  file(GLOB AWS_DS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_DS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB DS_SRC
    ${AWS_DS_HEADERS}
    ${AWS_DS_MODEL_HEADERS}
    ${AWS_DS_SOURCE}
    ${AWS_DS_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\ds" FILES ${AWS_DS_HEADERS})
      source_group("Header Files\\aws\\ds\\model" FILES ${AWS_DS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_DS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_DS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(DS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${DS_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_DIRECTORYSERVICE_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-ds ${LIBTYPE} ${DS_SRC})

  target_include_directories(aws-cpp-sdk-ds PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-ds aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-ds
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_DS_HEADERS} DESTINATION include/aws/ds)
  install (FILES ${AWS_DS_MODEL_HEADERS} DESTINATION include/aws/ds/model)

