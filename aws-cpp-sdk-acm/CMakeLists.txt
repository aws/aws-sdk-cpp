cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-acm)

  file(GLOB AWS_ACM_HEADERS
    "include/aws/acm/*.h"
  )

  file(GLOB AWS_ACM_MODEL_HEADERS
    "include/aws/acm/model/*.h"
  )

  file(GLOB AWS_ACM_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ACM_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ACM_SRC
    ${AWS_ACM_HEADERS}
    ${AWS_ACM_MODEL_HEADERS}
    ${AWS_ACM_SOURCE}
    ${AWS_ACM_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\acm" FILES ${AWS_ACM_HEADERS})
      source_group("Header Files\\aws\\acm\\model" FILES ${AWS_ACM_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ACM_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ACM_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ACM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ACM_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ACM_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-acm ${LIBTYPE} ${ACM_SRC})

  target_include_directories(aws-cpp-sdk-acm PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-acm aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-acm
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_ACM_HEADERS} DESTINATION include/aws/acm)
  install (FILES ${AWS_ACM_MODEL_HEADERS} DESTINATION include/aws/acm/model)

