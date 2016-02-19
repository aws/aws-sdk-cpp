cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-swf)

  file(GLOB AWS_SWF_HEADERS
    "include/aws/swf/*.h"
  )

  file(GLOB AWS_SWF_MODEL_HEADERS
    "include/aws/swf/model/*.h"
  )

  file(GLOB AWS_SWF_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_SWF_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB SWF_SRC
    ${AWS_SWF_HEADERS}
    ${AWS_SWF_MODEL_HEADERS}
    ${AWS_SWF_SOURCE}
    ${AWS_SWF_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\swf" FILES ${AWS_SWF_HEADERS})
      source_group("Header Files\\aws\\swf\\model" FILES ${AWS_SWF_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_SWF_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_SWF_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(SWF_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${SWF_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_SWF_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-swf ${LIBTYPE} ${SWF_SRC})

  target_include_directories(aws-cpp-sdk-swf PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-swf aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-swf
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_SWF_HEADERS} DESTINATION include/aws/swf)
  install (FILES ${AWS_SWF_MODEL_HEADERS} DESTINATION include/aws/swf/model)

