cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-cloudfront)

  file(GLOB AWS_CLOUDFRONT_HEADERS
    "include/aws/cloudfront/*.h"
  )

  file(GLOB AWS_CLOUDFRONT_MODEL_HEADERS
    "include/aws/cloudfront/model/*.h"
  )

  file(GLOB AWS_CLOUDFRONT_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_CLOUDFRONT_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB CLOUDFRONT_SRC
    ${AWS_CLOUDFRONT_HEADERS}
    ${AWS_CLOUDFRONT_MODEL_HEADERS}
    ${AWS_CLOUDFRONT_SOURCE}
    ${AWS_CLOUDFRONT_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\cloudfront" FILES ${AWS_CLOUDFRONT_HEADERS})
      source_group("Header Files\\aws\\cloudfront\\model" FILES ${AWS_CLOUDFRONT_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_CLOUDFRONT_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_CLOUDFRONT_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(CLOUDFRONT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${CLOUDFRONT_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDFRONT_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-cloudfront ${LIBTYPE} ${CLOUDFRONT_SRC})

  target_include_directories(aws-cpp-sdk-cloudfront PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-cloudfront aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-cloudfront
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_CLOUDFRONT_HEADERS} DESTINATION include/aws/cloudfront)
  install (FILES ${AWS_CLOUDFRONT_MODEL_HEADERS} DESTINATION include/aws/cloudfront/model)

