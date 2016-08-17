cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-codepipeline)

  file(GLOB AWS_CODEPIPELINE_HEADERS
    "include/aws/codepipeline/*.h"
  )

  file(GLOB AWS_CODEPIPELINE_MODEL_HEADERS
    "include/aws/codepipeline/model/*.h"
  )

  file(GLOB AWS_CODEPIPELINE_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_CODEPIPELINE_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB CODEPIPELINE_UNIFIED_HEADERS
    ${AWS_CODEPIPELINE_HEADERS}
    ${AWS_CODEPIPELINE_MODEL_HEADERS}
  )

  file(GLOB CODEPIPELINE_UNITY_SRC
    ${AWS_CODEPIPELINE_SOURCE}
    ${AWS_CODEPIPELINE_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("CODEPIPELINE" CODEPIPELINE_UNITY_SRC)
  endif()

  file(GLOB CODEPIPELINE_SRC
    ${CODEPIPELINE_UNIFIED_HEADERS}
    ${CODEPIPELINE_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\codepipeline" FILES ${AWS_CODEPIPELINE_HEADERS})
      source_group("Header Files\\aws\\codepipeline\\model" FILES ${AWS_CODEPIPELINE_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_CODEPIPELINE_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_CODEPIPELINE_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(CODEPIPELINE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${CODEPIPELINE_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CODEPIPELINE_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-codepipeline ${LIBTYPE} ${CODEPIPELINE_SRC})

  target_include_directories(aws-cpp-sdk-codepipeline PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-codepipeline aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-codepipeline
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-codepipeline)
    else()
      install (TARGETS aws-cpp-sdk-codepipeline
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_CODEPIPELINE_HEADERS} DESTINATION include/aws/codepipeline)
  install (FILES ${AWS_CODEPIPELINE_MODEL_HEADERS} DESTINATION include/aws/codepipeline/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-codepipeline.autopkg DESTINATION nuget)
  endif()



