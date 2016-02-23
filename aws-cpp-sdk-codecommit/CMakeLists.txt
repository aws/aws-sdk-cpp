cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-codecommit)

  file(GLOB AWS_CODECOMMIT_HEADERS
    "include/aws/codecommit/*.h"
  )

  file(GLOB AWS_CODECOMMIT_MODEL_HEADERS
    "include/aws/codecommit/model/*.h"
  )

  file(GLOB AWS_CODECOMMIT_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_CODECOMMIT_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB CODECOMMIT_SRC
    ${AWS_CODECOMMIT_HEADERS}
    ${AWS_CODECOMMIT_MODEL_HEADERS}
    ${AWS_CODECOMMIT_SOURCE}
    ${AWS_CODECOMMIT_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\codecommit" FILES ${AWS_CODECOMMIT_HEADERS})
      source_group("Header Files\\aws\\codecommit\\model" FILES ${AWS_CODECOMMIT_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_CODECOMMIT_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_CODECOMMIT_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(CODECOMMIT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${CODECOMMIT_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CODECOMMIT_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-codecommit ${LIBTYPE} ${CODECOMMIT_SRC})

  target_include_directories(aws-cpp-sdk-codecommit PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-codecommit aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-codecommit
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_CODECOMMIT_HEADERS} DESTINATION include/aws/codecommit)
  install (FILES ${AWS_CODECOMMIT_MODEL_HEADERS} DESTINATION include/aws/codecommit/model)

