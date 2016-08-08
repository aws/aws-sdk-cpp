cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-monitoring)

  file(GLOB AWS_MONITORING_HEADERS
    "include/aws/monitoring/*.h"
  )

  file(GLOB AWS_MONITORING_MODEL_HEADERS
    "include/aws/monitoring/model/*.h"
  )

  file(GLOB AWS_MONITORING_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_MONITORING_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB MONITORING_UNIFIED_HEADERS
    ${AWS_MONITORING_HEADERS}
    ${AWS_MONITORING_MODEL_HEADERS}
  )

  file(GLOB MONITORING_UNITY_SRC
    ${AWS_MONITORING_SOURCE}
    ${AWS_MONITORING_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("MONITORING" MONITORING_UNITY_SRC)
  endif()

  file(GLOB MONITORING_SRC
    ${MONITORING_UNIFIED_HEADERS}
    ${MONITORING_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\monitoring" FILES ${AWS_MONITORING_HEADERS})
      source_group("Header Files\\aws\\monitoring\\model" FILES ${AWS_MONITORING_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_MONITORING_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_MONITORING_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(MONITORING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${MONITORING_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDWATCH_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-monitoring ${LIBTYPE} ${MONITORING_SRC})

  target_include_directories(aws-cpp-sdk-monitoring PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-monitoring aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-monitoring
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-monitoring)
    else()
      install (TARGETS aws-cpp-sdk-monitoring
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_MONITORING_HEADERS} DESTINATION include/aws/monitoring)
  install (FILES ${AWS_MONITORING_MODEL_HEADERS} DESTINATION include/aws/monitoring/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-monitoring.autopkg DESTINATION nuget)
  endif()



