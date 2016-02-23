cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-ecr)

  file(GLOB AWS_ECR_HEADERS
    "include/aws/ecr/*.h"
  )

  file(GLOB AWS_ECR_MODEL_HEADERS
    "include/aws/ecr/model/*.h"
  )

  file(GLOB AWS_ECR_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ECR_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ECR_SRC
    ${AWS_ECR_HEADERS}
    ${AWS_ECR_MODEL_HEADERS}
    ${AWS_ECR_SOURCE}
    ${AWS_ECR_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\ecr" FILES ${AWS_ECR_HEADERS})
      source_group("Header Files\\aws\\ecr\\model" FILES ${AWS_ECR_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ECR_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ECR_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ECR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ECR_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ECR_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-ecr ${LIBTYPE} ${ECR_SRC})

  target_include_directories(aws-cpp-sdk-ecr PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-ecr aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-ecr
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_ECR_HEADERS} DESTINATION include/aws/ecr)
  install (FILES ${AWS_ECR_MODEL_HEADERS} DESTINATION include/aws/ecr/model)

