cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-events)

  file(GLOB AWS_EVENTS_HEADERS
    "include/aws/events/*.h"
  )

  file(GLOB AWS_EVENTS_MODEL_HEADERS
    "include/aws/events/model/*.h"
  )

  file(GLOB AWS_EVENTS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_EVENTS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB EVENTS_UNIFIED_HEADERS
    ${AWS_EVENTS_HEADERS}
    ${AWS_EVENTS_MODEL_HEADERS}
  )

  file(GLOB EVENTS_UNITY_SRC
    ${AWS_EVENTS_SOURCE}
    ${AWS_EVENTS_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("EVENTS" EVENTS_UNITY_SRC)
  endif()

  file(GLOB EVENTS_SRC
    ${EVENTS_UNIFIED_HEADERS}
    ${EVENTS_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\events" FILES ${AWS_EVENTS_HEADERS})
      source_group("Header Files\\aws\\events\\model" FILES ${AWS_EVENTS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_EVENTS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_EVENTS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(EVENTS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${EVENTS_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDWATCHEVENTS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-events ${LIBTYPE} ${EVENTS_SRC})

  target_include_directories(aws-cpp-sdk-events PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-events aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-events
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-events)
    else()
      install (TARGETS aws-cpp-sdk-events
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_EVENTS_HEADERS} DESTINATION include/aws/events)
  install (FILES ${AWS_EVENTS_MODEL_HEADERS} DESTINATION include/aws/events/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-events.autopkg DESTINATION nuget)
  endif()



