cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-gamelift)

  file(GLOB AWS_GAMELIFT_HEADERS
    "include/aws/gamelift/*.h"
  )

  file(GLOB AWS_GAMELIFT_MODEL_HEADERS
    "include/aws/gamelift/model/*.h"
  )

  file(GLOB AWS_GAMELIFT_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_GAMELIFT_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB GAMELIFT_SRC
    ${AWS_GAMELIFT_HEADERS}
    ${AWS_GAMELIFT_MODEL_HEADERS}
    ${AWS_GAMELIFT_SOURCE}
    ${AWS_GAMELIFT_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\gamelift" FILES ${AWS_GAMELIFT_HEADERS})
      source_group("Header Files\\aws\\gamelift\\model" FILES ${AWS_GAMELIFT_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_GAMELIFT_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_GAMELIFT_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(GAMELIFT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${GAMELIFT_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_GAMELIFT_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-gamelift ${LIBTYPE} ${GAMELIFT_SRC})

  target_include_directories(aws-cpp-sdk-gamelift PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-gamelift aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-gamelift
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_GAMELIFT_HEADERS} DESTINATION include/aws/gamelift)
  install (FILES ${AWS_GAMELIFT_MODEL_HEADERS} DESTINATION include/aws/gamelift/model)

