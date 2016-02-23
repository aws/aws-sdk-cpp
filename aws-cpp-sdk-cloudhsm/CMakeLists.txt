cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-cloudhsm)

  file(GLOB AWS_CLOUDHSM_HEADERS
    "include/aws/cloudhsm/*.h"
  )

  file(GLOB AWS_CLOUDHSM_MODEL_HEADERS
    "include/aws/cloudhsm/model/*.h"
  )

  file(GLOB AWS_CLOUDHSM_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_CLOUDHSM_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB CLOUDHSM_SRC
    ${AWS_CLOUDHSM_HEADERS}
    ${AWS_CLOUDHSM_MODEL_HEADERS}
    ${AWS_CLOUDHSM_SOURCE}
    ${AWS_CLOUDHSM_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\cloudhsm" FILES ${AWS_CLOUDHSM_HEADERS})
      source_group("Header Files\\aws\\cloudhsm\\model" FILES ${AWS_CLOUDHSM_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_CLOUDHSM_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_CLOUDHSM_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(CLOUDHSM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${CLOUDHSM_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDHSM_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-cloudhsm ${LIBTYPE} ${CLOUDHSM_SRC})

  target_include_directories(aws-cpp-sdk-cloudhsm PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-cloudhsm aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-cloudhsm
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_CLOUDHSM_HEADERS} DESTINATION include/aws/cloudhsm)
  install (FILES ${AWS_CLOUDHSM_MODEL_HEADERS} DESTINATION include/aws/cloudhsm/model)

