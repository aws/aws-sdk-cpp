cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-workspaces)

  file(GLOB AWS_WORKSPACES_HEADERS
    "include/aws/workspaces/*.h"
  )

  file(GLOB AWS_WORKSPACES_MODEL_HEADERS
    "include/aws/workspaces/model/*.h"
  )

  file(GLOB AWS_WORKSPACES_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_WORKSPACES_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB WORKSPACES_SRC
    ${AWS_WORKSPACES_HEADERS}
    ${AWS_WORKSPACES_MODEL_HEADERS}
    ${AWS_WORKSPACES_SOURCE}
    ${AWS_WORKSPACES_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\workspaces" FILES ${AWS_WORKSPACES_HEADERS})
      source_group("Header Files\\aws\\workspaces\\model" FILES ${AWS_WORKSPACES_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_WORKSPACES_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_WORKSPACES_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(WORKSPACES_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${WORKSPACES_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_WORKSPACES_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-workspaces ${LIBTYPE} ${WORKSPACES_SRC})

  target_include_directories(aws-cpp-sdk-workspaces PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-workspaces aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-workspaces
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_WORKSPACES_HEADERS} DESTINATION include/aws/workspaces)
  install (FILES ${AWS_WORKSPACES_MODEL_HEADERS} DESTINATION include/aws/workspaces/model)

