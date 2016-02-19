cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-lambda)

  file(GLOB AWS_LAMBDA_HEADERS
    "include/aws/lambda/*.h"
  )

  file(GLOB AWS_LAMBDA_MODEL_HEADERS
    "include/aws/lambda/model/*.h"
  )

  file(GLOB AWS_LAMBDA_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_LAMBDA_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB LAMBDA_SRC
    ${AWS_LAMBDA_HEADERS}
    ${AWS_LAMBDA_MODEL_HEADERS}
    ${AWS_LAMBDA_SOURCE}
    ${AWS_LAMBDA_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\lambda" FILES ${AWS_LAMBDA_HEADERS})
      source_group("Header Files\\aws\\lambda\\model" FILES ${AWS_LAMBDA_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_LAMBDA_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_LAMBDA_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(LAMBDA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${LAMBDA_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_LAMBDA_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-lambda ${LIBTYPE} ${LAMBDA_SRC})

  target_include_directories(aws-cpp-sdk-lambda PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-lambda aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-lambda
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_LAMBDA_HEADERS} DESTINATION include/aws/lambda)
  install (FILES ${AWS_LAMBDA_MODEL_HEADERS} DESTINATION include/aws/lambda/model)

