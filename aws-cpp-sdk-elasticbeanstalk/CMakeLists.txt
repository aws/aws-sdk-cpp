cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-elasticbeanstalk)

  file(GLOB AWS_ELASTICBEANSTALK_HEADERS
    "include/aws/elasticbeanstalk/*.h"
  )

  file(GLOB AWS_ELASTICBEANSTALK_MODEL_HEADERS
    "include/aws/elasticbeanstalk/model/*.h"
  )

  file(GLOB AWS_ELASTICBEANSTALK_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ELASTICBEANSTALK_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ELASTICBEANSTALK_SRC
    ${AWS_ELASTICBEANSTALK_HEADERS}
    ${AWS_ELASTICBEANSTALK_MODEL_HEADERS}
    ${AWS_ELASTICBEANSTALK_SOURCE}
    ${AWS_ELASTICBEANSTALK_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\elasticbeanstalk" FILES ${AWS_ELASTICBEANSTALK_HEADERS})
      source_group("Header Files\\aws\\elasticbeanstalk\\model" FILES ${AWS_ELASTICBEANSTALK_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ELASTICBEANSTALK_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ELASTICBEANSTALK_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ELASTICBEANSTALK_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ELASTICBEANSTALK_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ELASTICBEANSTALK_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-elasticbeanstalk ${LIBTYPE} ${ELASTICBEANSTALK_SRC})

  target_include_directories(aws-cpp-sdk-elasticbeanstalk PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-elasticbeanstalk aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-elasticbeanstalk
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_ELASTICBEANSTALK_HEADERS} DESTINATION include/aws/elasticbeanstalk)
  install (FILES ${AWS_ELASTICBEANSTALK_MODEL_HEADERS} DESTINATION include/aws/elasticbeanstalk/model)

