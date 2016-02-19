cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-autoscaling)

  file(GLOB AWS_AUTOSCALING_HEADERS
    "include/aws/autoscaling/*.h"
  )

  file(GLOB AWS_AUTOSCALING_MODEL_HEADERS
    "include/aws/autoscaling/model/*.h"
  )

  file(GLOB AWS_AUTOSCALING_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_AUTOSCALING_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB AUTOSCALING_SRC
    ${AWS_AUTOSCALING_HEADERS}
    ${AWS_AUTOSCALING_MODEL_HEADERS}
    ${AWS_AUTOSCALING_SOURCE}
    ${AWS_AUTOSCALING_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\autoscaling" FILES ${AWS_AUTOSCALING_HEADERS})
      source_group("Header Files\\aws\\autoscaling\\model" FILES ${AWS_AUTOSCALING_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_AUTOSCALING_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_AUTOSCALING_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(AUTOSCALING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${AUTOSCALING_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_AUTOSCALING_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-autoscaling ${LIBTYPE} ${AUTOSCALING_SRC})

  target_include_directories(aws-cpp-sdk-autoscaling PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-autoscaling aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-autoscaling
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_AUTOSCALING_HEADERS} DESTINATION include/aws/autoscaling)
  install (FILES ${AWS_AUTOSCALING_MODEL_HEADERS} DESTINATION include/aws/autoscaling/model)

