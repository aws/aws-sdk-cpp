cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-sns)

  file(GLOB AWS_SNS_HEADERS
    "include/aws/sns/*.h"
  )

  file(GLOB AWS_SNS_MODEL_HEADERS
    "include/aws/sns/model/*.h"
  )

  file(GLOB AWS_SNS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_SNS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB SNS_SRC
    ${AWS_SNS_HEADERS}
    ${AWS_SNS_MODEL_HEADERS}
    ${AWS_SNS_SOURCE}
    ${AWS_SNS_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\sns" FILES ${AWS_SNS_HEADERS})
      source_group("Header Files\\aws\\sns\\model" FILES ${AWS_SNS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_SNS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_SNS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(SNS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${SNS_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_SNS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-sns ${LIBTYPE} ${SNS_SRC})

  target_include_directories(aws-cpp-sdk-sns PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-sns aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-sns
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_SNS_HEADERS} DESTINATION include/aws/sns)
  install (FILES ${AWS_SNS_MODEL_HEADERS} DESTINATION include/aws/sns/model)

