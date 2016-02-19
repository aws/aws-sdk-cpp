cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-ec2)

  file(GLOB AWS_EC2_HEADERS
    "include/aws/ec2/*.h"
  )

  file(GLOB AWS_EC2_MODEL_HEADERS
    "include/aws/ec2/model/*.h"
  )

  file(GLOB AWS_EC2_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_EC2_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB EC2_SRC
    ${AWS_EC2_HEADERS}
    ${AWS_EC2_MODEL_HEADERS}
    ${AWS_EC2_SOURCE}
    ${AWS_EC2_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\ec2" FILES ${AWS_EC2_HEADERS})
      source_group("Header Files\\aws\\ec2\\model" FILES ${AWS_EC2_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_EC2_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_EC2_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(EC2_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${EC2_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_EC2_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-ec2 ${LIBTYPE} ${EC2_SRC})

  target_include_directories(aws-cpp-sdk-ec2 PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-ec2 aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-ec2
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_EC2_HEADERS} DESTINATION include/aws/ec2)
  install (FILES ${AWS_EC2_MODEL_HEADERS} DESTINATION include/aws/ec2/model)

