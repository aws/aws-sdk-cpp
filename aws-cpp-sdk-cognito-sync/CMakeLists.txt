cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-cognito-sync)

  file(GLOB AWS_COGNITO-SYNC_HEADERS
    "include/aws/cognito-sync/*.h"
  )

  file(GLOB AWS_COGNITO-SYNC_MODEL_HEADERS
    "include/aws/cognito-sync/model/*.h"
  )

  file(GLOB AWS_COGNITO-SYNC_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_COGNITO-SYNC_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB COGNITO-SYNC_UNIFIED_HEADERS
    ${AWS_COGNITO-SYNC_HEADERS}
    ${AWS_COGNITO-SYNC_MODEL_HEADERS}
  )

  file(GLOB COGNITO-SYNC_UNITY_SRC
    ${AWS_COGNITO-SYNC_SOURCE}
    ${AWS_COGNITO-SYNC_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("COGNITO-SYNC" COGNITO-SYNC_UNITY_SRC)
  endif()

  file(GLOB COGNITO-SYNC_SRC
    ${COGNITO-SYNC_UNIFIED_HEADERS}
    ${COGNITO-SYNC_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\cognito-sync" FILES ${AWS_COGNITO-SYNC_HEADERS})
      source_group("Header Files\\aws\\cognito-sync\\model" FILES ${AWS_COGNITO-SYNC_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_COGNITO-SYNC_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_COGNITO-SYNC_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(COGNITO-SYNC_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${COGNITO-SYNC_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_COGNITOSYNC_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-cognito-sync ${LIBTYPE} ${COGNITO-SYNC_SRC})

  target_include_directories(aws-cpp-sdk-cognito-sync PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-cognito-sync aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-cognito-sync
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-cognito-sync)
    else()
      install (TARGETS aws-cpp-sdk-cognito-sync
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_COGNITO-SYNC_HEADERS} DESTINATION include/aws/cognito-sync)
  install (FILES ${AWS_COGNITO-SYNC_MODEL_HEADERS} DESTINATION include/aws/cognito-sync/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-cognito-sync.autopkg DESTINATION nuget)
  endif()



