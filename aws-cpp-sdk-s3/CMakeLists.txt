cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-s3)

  file(GLOB AWS_S3_HEADERS
    "include/aws/s3/*.h"
  )

  file(GLOB AWS_S3_MODEL_HEADERS
    "include/aws/s3/model/*.h"
  )

  file(GLOB AWS_S3_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_S3_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB S3_SRC
    ${AWS_S3_HEADERS}
    ${AWS_S3_MODEL_HEADERS}
    ${AWS_S3_SOURCE}
    ${AWS_S3_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\s3" FILES ${AWS_S3_HEADERS})
      source_group("Header Files\\aws\\s3\\model" FILES ${AWS_S3_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_S3_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_S3_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(S3_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${S3_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_S3_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-s3 ${LIBTYPE} ${S3_SRC})

  target_include_directories(aws-cpp-sdk-s3 PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-s3 aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-s3
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_S3_HEADERS} DESTINATION include/aws/s3)
  install (FILES ${AWS_S3_MODEL_HEADERS} DESTINATION include/aws/s3/model)

