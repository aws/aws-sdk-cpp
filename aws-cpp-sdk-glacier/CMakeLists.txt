cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-glacier)

  file(GLOB AWS_GLACIER_HEADERS
    "include/aws/glacier/*.h"
  )

  file(GLOB AWS_GLACIER_MODEL_HEADERS
    "include/aws/glacier/model/*.h"
  )

  file(GLOB AWS_GLACIER_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_GLACIER_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB GLACIER_SRC
    ${AWS_GLACIER_HEADERS}
    ${AWS_GLACIER_MODEL_HEADERS}
    ${AWS_GLACIER_SOURCE}
    ${AWS_GLACIER_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\glacier" FILES ${AWS_GLACIER_HEADERS})
      source_group("Header Files\\aws\\glacier\\model" FILES ${AWS_GLACIER_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_GLACIER_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_GLACIER_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(GLACIER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${GLACIER_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_GLACIER_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-glacier ${LIBTYPE} ${GLACIER_SRC})
  target_link_libraries(aws-cpp-sdk-glacier aws-cpp-sdk-core)

  if(NOT MSVC)
    add_definitions(-std=c++11)
  endif()

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-glacier DESTINATION lib)
  install (FILES ${AWS_GLACIER_HEADERS} DESTINATION include/aws/glacier)
  install (FILES ${AWS_GLACIER_MODEL_HEADERS} DESTINATION include/aws/glacier/model)

