cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-mobileanalytics)

  file(GLOB AWS_MOBILEANALYTICS_HEADERS
    "include/aws/mobileanalytics/*.h"
  )

  file(GLOB AWS_MOBILEANALYTICS_MODEL_HEADERS
    "include/aws/mobileanalytics/model/*.h"
  )

  file(GLOB AWS_MOBILEANALYTICS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_MOBILEANALYTICS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB MOBILEANALYTICS_SRC
    ${AWS_MOBILEANALYTICS_HEADERS}
    ${AWS_MOBILEANALYTICS_MODEL_HEADERS}
    ${AWS_MOBILEANALYTICS_SOURCE}
    ${AWS_MOBILEANALYTICS_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\mobileanalytics" FILES ${AWS_MOBILEANALYTICS_HEADERS})
      source_group("Header Files\\aws\\mobileanalytics\\model" FILES ${AWS_MOBILEANALYTICS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_MOBILEANALYTICS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_MOBILEANALYTICS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(MOBILEANALYTICS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${MOBILEANALYTICS_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_MOBILEANALYTICS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-mobileanalytics ${LIBTYPE} ${MOBILEANALYTICS_SRC})
  target_link_libraries(aws-cpp-sdk-mobileanalytics aws-cpp-sdk-core)

  if(NOT MSVC)
    add_definitions(-std=c++11)
  endif()

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-mobileanalytics DESTINATION lib)
  install (FILES ${AWS_MOBILEANALYTICS_HEADERS} DESTINATION include/aws/mobileanalytics)
  install (FILES ${AWS_MOBILEANALYTICS_MODEL_HEADERS} DESTINATION include/aws/mobileanalytics/model)

