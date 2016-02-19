cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-sts)

  file(GLOB AWS_STS_HEADERS
    "include/aws/sts/*.h"
  )

  file(GLOB AWS_STS_MODEL_HEADERS
    "include/aws/sts/model/*.h"
  )

  file(GLOB AWS_STS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_STS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB STS_SRC
    ${AWS_STS_HEADERS}
    ${AWS_STS_MODEL_HEADERS}
    ${AWS_STS_SOURCE}
    ${AWS_STS_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\sts" FILES ${AWS_STS_HEADERS})
      source_group("Header Files\\aws\\sts\\model" FILES ${AWS_STS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_STS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_STS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(STS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${STS_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_STS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-sts ${LIBTYPE} ${STS_SRC})

  target_include_directories(aws-cpp-sdk-sts PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-sts aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-sts
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_STS_HEADERS} DESTINATION include/aws/sts)
  install (FILES ${AWS_STS_MODEL_HEADERS} DESTINATION include/aws/sts/model)

