cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-elasticloadbalancing)

  file(GLOB AWS_ELASTICLOADBALANCING_HEADERS
    "include/aws/elasticloadbalancing/*.h"
  )

  file(GLOB AWS_ELASTICLOADBALANCING_MODEL_HEADERS
    "include/aws/elasticloadbalancing/model/*.h"
  )

  file(GLOB AWS_ELASTICLOADBALANCING_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ELASTICLOADBALANCING_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ELASTICLOADBALANCING_SRC
    ${AWS_ELASTICLOADBALANCING_HEADERS}
    ${AWS_ELASTICLOADBALANCING_MODEL_HEADERS}
    ${AWS_ELASTICLOADBALANCING_SOURCE}
    ${AWS_ELASTICLOADBALANCING_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\elasticloadbalancing" FILES ${AWS_ELASTICLOADBALANCING_HEADERS})
      source_group("Header Files\\aws\\elasticloadbalancing\\model" FILES ${AWS_ELASTICLOADBALANCING_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ELASTICLOADBALANCING_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ELASTICLOADBALANCING_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ELASTICLOADBALANCING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ELASTICLOADBALANCING_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ELASTICLOADBALANCING_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-elasticloadbalancing ${LIBTYPE} ${ELASTICLOADBALANCING_SRC})

  target_include_directories(aws-cpp-sdk-elasticloadbalancing PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-elasticloadbalancing aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-elasticloadbalancing
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_ELASTICLOADBALANCING_HEADERS} DESTINATION include/aws/elasticloadbalancing)
  install (FILES ${AWS_ELASTICLOADBALANCING_MODEL_HEADERS} DESTINATION include/aws/elasticloadbalancing/model)

