cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-rds)

  file(GLOB AWS_RDS_HEADERS
    "include/aws/rds/*.h"
  )

  file(GLOB AWS_RDS_MODEL_HEADERS
    "include/aws/rds/model/*.h"
  )

  file(GLOB AWS_RDS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_RDS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB RDS_SRC
    ${AWS_RDS_HEADERS}
    ${AWS_RDS_MODEL_HEADERS}
    ${AWS_RDS_SOURCE}
    ${AWS_RDS_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\rds" FILES ${AWS_RDS_HEADERS})
      source_group("Header Files\\aws\\rds\\model" FILES ${AWS_RDS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_RDS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_RDS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(RDS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${RDS_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_RDS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-rds ${LIBTYPE} ${RDS_SRC})

  target_include_directories(aws-cpp-sdk-rds PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-rds aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-rds
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_RDS_HEADERS} DESTINATION include/aws/rds)
  install (FILES ${AWS_RDS_MODEL_HEADERS} DESTINATION include/aws/rds/model)

