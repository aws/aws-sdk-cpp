cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-firehose)

  file(GLOB AWS_FIREHOSE_HEADERS
    "include/aws/firehose/*.h"
  )

  file(GLOB AWS_FIREHOSE_MODEL_HEADERS
    "include/aws/firehose/model/*.h"
  )

  file(GLOB AWS_FIREHOSE_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_FIREHOSE_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB FIREHOSE_UNIFIED_HEADERS
    ${AWS_FIREHOSE_HEADERS}
    ${AWS_FIREHOSE_MODEL_HEADERS}
  )

  file(GLOB FIREHOSE_UNITY_SRC
    ${AWS_FIREHOSE_SOURCE}
    ${AWS_FIREHOSE_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("FIREHOSE" FIREHOSE_UNITY_SRC)
  endif()

  file(GLOB FIREHOSE_SRC
    ${FIREHOSE_UNIFIED_HEADERS}
    ${FIREHOSE_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\firehose" FILES ${AWS_FIREHOSE_HEADERS})
      source_group("Header Files\\aws\\firehose\\model" FILES ${AWS_FIREHOSE_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_FIREHOSE_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_FIREHOSE_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(FIREHOSE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${FIREHOSE_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_FIREHOSE_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-firehose ${LIBTYPE} ${FIREHOSE_SRC})

  target_include_directories(aws-cpp-sdk-firehose PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-firehose aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-firehose
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-firehose)
    else()
      install (TARGETS aws-cpp-sdk-firehose
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_FIREHOSE_HEADERS} DESTINATION include/aws/firehose)
  install (FILES ${AWS_FIREHOSE_MODEL_HEADERS} DESTINATION include/aws/firehose/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-firehose.autopkg DESTINATION nuget)
  endif()



