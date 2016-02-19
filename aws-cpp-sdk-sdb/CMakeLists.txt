cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-sdb)

  file(GLOB AWS_SDB_HEADERS
    "include/aws/sdb/*.h"
  )

  file(GLOB AWS_SDB_MODEL_HEADERS
    "include/aws/sdb/model/*.h"
  )

  file(GLOB AWS_SDB_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_SDB_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB SDB_SRC
    ${AWS_SDB_HEADERS}
    ${AWS_SDB_MODEL_HEADERS}
    ${AWS_SDB_SOURCE}
    ${AWS_SDB_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\sdb" FILES ${AWS_SDB_HEADERS})
      source_group("Header Files\\aws\\sdb\\model" FILES ${AWS_SDB_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_SDB_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_SDB_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(SDB_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${SDB_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_SIMPLEDB_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-sdb ${LIBTYPE} ${SDB_SRC})

  target_include_directories(aws-cpp-sdk-sdb PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-sdb aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-sdb
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_SDB_HEADERS} DESTINATION include/aws/sdb)
  install (FILES ${AWS_SDB_MODEL_HEADERS} DESTINATION include/aws/sdb/model)

