cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-codepipeline)

  file(GLOB AWS_CODEPIPELINE_HEADERS
    "include/aws/codepipeline/*.h"
  )

  file(GLOB AWS_CODEPIPELINE_MODEL_HEADERS
    "include/aws/codepipeline/model/*.h"
  )

  file(GLOB AWS_CODEPIPELINE_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_CODEPIPELINE_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB CODEPIPELINE_SRC
    ${AWS_CODEPIPELINE_HEADERS}
    ${AWS_CODEPIPELINE_MODEL_HEADERS}
    ${AWS_CODEPIPELINE_SOURCE}
    ${AWS_CODEPIPELINE_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\codepipeline" FILES ${AWS_CODEPIPELINE_HEADERS})
      source_group("Header Files\\aws\\codepipeline\\model" FILES ${AWS_CODEPIPELINE_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_CODEPIPELINE_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_CODEPIPELINE_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(CODEPIPELINE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${CODEPIPELINE_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CODEPIPELINE_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-codepipeline ${LIBTYPE} ${CODEPIPELINE_SRC})

  target_include_directories(aws-cpp-sdk-codepipeline PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-codepipeline aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-codepipeline
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_CODEPIPELINE_HEADERS} DESTINATION include/aws/codepipeline)
  install (FILES ${AWS_CODEPIPELINE_MODEL_HEADERS} DESTINATION include/aws/codepipeline/model)

