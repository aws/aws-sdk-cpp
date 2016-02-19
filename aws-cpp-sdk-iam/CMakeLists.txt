cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-iam)

  file(GLOB AWS_IAM_HEADERS
    "include/aws/iam/*.h"
  )

  file(GLOB AWS_IAM_MODEL_HEADERS
    "include/aws/iam/model/*.h"
  )

  file(GLOB AWS_IAM_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_IAM_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB IAM_SRC
    ${AWS_IAM_HEADERS}
    ${AWS_IAM_MODEL_HEADERS}
    ${AWS_IAM_SOURCE}
    ${AWS_IAM_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\iam" FILES ${AWS_IAM_HEADERS})
      source_group("Header Files\\aws\\iam\\model" FILES ${AWS_IAM_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_IAM_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_IAM_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(IAM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${IAM_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_IAM_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-iam ${LIBTYPE} ${IAM_SRC})

  target_include_directories(aws-cpp-sdk-iam PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-iam aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-iam
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_IAM_HEADERS} DESTINATION include/aws/iam)
  install (FILES ${AWS_IAM_MODEL_HEADERS} DESTINATION include/aws/iam/model)

