cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-kinesisanalytics)

  file(GLOB AWS_KINESISANALYTICS_HEADERS
    "include/aws/kinesisanalytics/*.h"
  )

  file(GLOB AWS_KINESISANALYTICS_MODEL_HEADERS
    "include/aws/kinesisanalytics/model/*.h"
  )

  file(GLOB AWS_KINESISANALYTICS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_KINESISANALYTICS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB KINESISANALYTICS_UNIFIED_HEADERS
    ${AWS_KINESISANALYTICS_HEADERS}
    ${AWS_KINESISANALYTICS_MODEL_HEADERS}
  )

  file(GLOB KINESISANALYTICS_UNITY_SRC
    ${AWS_KINESISANALYTICS_SOURCE}
    ${AWS_KINESISANALYTICS_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("KINESISANALYTICS" KINESISANALYTICS_UNITY_SRC)
  endif()

  file(GLOB KINESISANALYTICS_SRC
    ${KINESISANALYTICS_UNIFIED_HEADERS}
    ${KINESISANALYTICS_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\kinesisanalytics" FILES ${AWS_KINESISANALYTICS_HEADERS})
      source_group("Header Files\\aws\\kinesisanalytics\\model" FILES ${AWS_KINESISANALYTICS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_KINESISANALYTICS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_KINESISANALYTICS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(KINESISANALYTICS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${KINESISANALYTICS_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_KINESISANALYTICS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-kinesisanalytics ${LIBTYPE} ${KINESISANALYTICS_SRC})

  target_include_directories(aws-cpp-sdk-kinesisanalytics PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-kinesisanalytics aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-kinesisanalytics
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-kinesisanalytics)
    else()
      install (TARGETS aws-cpp-sdk-kinesisanalytics
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_KINESISANALYTICS_HEADERS} DESTINATION include/aws/kinesisanalytics)
  install (FILES ${AWS_KINESISANALYTICS_MODEL_HEADERS} DESTINATION include/aws/kinesisanalytics/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-kinesisanalytics.autopkg DESTINATION nuget)
  endif()



