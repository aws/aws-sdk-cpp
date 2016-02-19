cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-codedeploy)

  file(GLOB AWS_CODEDEPLOY_HEADERS
    "include/aws/codedeploy/*.h"
  )

  file(GLOB AWS_CODEDEPLOY_MODEL_HEADERS
    "include/aws/codedeploy/model/*.h"
  )

  file(GLOB AWS_CODEDEPLOY_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_CODEDEPLOY_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB CODEDEPLOY_SRC
    ${AWS_CODEDEPLOY_HEADERS}
    ${AWS_CODEDEPLOY_MODEL_HEADERS}
    ${AWS_CODEDEPLOY_SOURCE}
    ${AWS_CODEDEPLOY_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\codedeploy" FILES ${AWS_CODEDEPLOY_HEADERS})
      source_group("Header Files\\aws\\codedeploy\\model" FILES ${AWS_CODEDEPLOY_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_CODEDEPLOY_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_CODEDEPLOY_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(CODEDEPLOY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${CODEDEPLOY_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CODEDEPLOY_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-codedeploy ${LIBTYPE} ${CODEDEPLOY_SRC})

  target_include_directories(aws-cpp-sdk-codedeploy PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-codedeploy aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-codedeploy
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_CODEDEPLOY_HEADERS} DESTINATION include/aws/codedeploy)
  install (FILES ${AWS_CODEDEPLOY_MODEL_HEADERS} DESTINATION include/aws/codedeploy/model)

