cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-logs)

  file(GLOB AWS_LOGS_HEADERS
    "include/aws/logs/*.h"
  )

  file(GLOB AWS_LOGS_MODEL_HEADERS
    "include/aws/logs/model/*.h"
  )

  file(GLOB AWS_LOGS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_LOGS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB LOGS_UNIFIED_HEADERS
    ${AWS_LOGS_HEADERS}
    ${AWS_LOGS_MODEL_HEADERS}
  )

  file(GLOB LOGS_UNITY_SRC
    ${AWS_LOGS_SOURCE}
    ${AWS_LOGS_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("LOGS" LOGS_UNITY_SRC)
  endif()

  file(GLOB LOGS_SRC
    ${LOGS_UNIFIED_HEADERS}
    ${LOGS_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\logs" FILES ${AWS_LOGS_HEADERS})
      source_group("Header Files\\aws\\logs\\model" FILES ${AWS_LOGS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_LOGS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_LOGS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(LOGS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${LOGS_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDWATCHLOGS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-logs ${LIBTYPE} ${LOGS_SRC})

  target_include_directories(aws-cpp-sdk-logs PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-logs aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-logs
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-logs)
    else()
      install (TARGETS aws-cpp-sdk-logs
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_LOGS_HEADERS} DESTINATION include/aws/logs)
  install (FILES ${AWS_LOGS_MODEL_HEADERS} DESTINATION include/aws/logs/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-logs.autopkg DESTINATION nuget)
  endif()



