cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-devicefarm)

  file(GLOB AWS_DEVICEFARM_HEADERS
    "include/aws/devicefarm/*.h"
  )

  file(GLOB AWS_DEVICEFARM_MODEL_HEADERS
    "include/aws/devicefarm/model/*.h"
  )

  file(GLOB AWS_DEVICEFARM_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_DEVICEFARM_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB DEVICEFARM_SRC
    ${AWS_DEVICEFARM_HEADERS}
    ${AWS_DEVICEFARM_MODEL_HEADERS}
    ${AWS_DEVICEFARM_SOURCE}
    ${AWS_DEVICEFARM_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\devicefarm" FILES ${AWS_DEVICEFARM_HEADERS})
      source_group("Header Files\\aws\\devicefarm\\model" FILES ${AWS_DEVICEFARM_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_DEVICEFARM_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_DEVICEFARM_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(DEVICEFARM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${DEVICEFARM_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_DEVICEFARM_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-devicefarm ${LIBTYPE} ${DEVICEFARM_SRC})

  target_include_directories(aws-cpp-sdk-devicefarm PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-devicefarm aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-devicefarm
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_DEVICEFARM_HEADERS} DESTINATION include/aws/devicefarm)
  install (FILES ${AWS_DEVICEFARM_MODEL_HEADERS} DESTINATION include/aws/devicefarm/model)

