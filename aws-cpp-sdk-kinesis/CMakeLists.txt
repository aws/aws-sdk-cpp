cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-kinesis)

  file(GLOB AWS_KINESIS_HEADERS
    "include/aws/kinesis/*.h"
  )

  file(GLOB AWS_KINESIS_MODEL_HEADERS
    "include/aws/kinesis/model/*.h"
  )

  file(GLOB AWS_KINESIS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_KINESIS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB KINESIS_UNIFIED_HEADERS
    ${AWS_KINESIS_HEADERS}
    ${AWS_KINESIS_MODEL_HEADERS}
  )

  file(GLOB KINESIS_UNITY_SRC
    ${AWS_KINESIS_SOURCE}
    ${AWS_KINESIS_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("KINESIS" KINESIS_UNITY_SRC)
  endif()

  file(GLOB KINESIS_SRC
    ${KINESIS_UNIFIED_HEADERS}
    ${KINESIS_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\kinesis" FILES ${AWS_KINESIS_HEADERS})
      source_group("Header Files\\aws\\kinesis\\model" FILES ${AWS_KINESIS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_KINESIS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_KINESIS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(KINESIS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${KINESIS_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_KINESIS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-kinesis ${LIBTYPE} ${KINESIS_SRC})

  target_include_directories(aws-cpp-sdk-kinesis PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-kinesis aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-kinesis
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-kinesis)
    else()
      install (TARGETS aws-cpp-sdk-kinesis
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_KINESIS_HEADERS} DESTINATION include/aws/kinesis)
  install (FILES ${AWS_KINESIS_MODEL_HEADERS} DESTINATION include/aws/kinesis/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-kinesis.autopkg DESTINATION nuget)
  endif()



