cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-storagegateway)

  file(GLOB AWS_STORAGEGATEWAY_HEADERS
    "include/aws/storagegateway/*.h"
  )

  file(GLOB AWS_STORAGEGATEWAY_MODEL_HEADERS
    "include/aws/storagegateway/model/*.h"
  )

  file(GLOB AWS_STORAGEGATEWAY_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_STORAGEGATEWAY_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB STORAGEGATEWAY_UNIFIED_HEADERS
    ${AWS_STORAGEGATEWAY_HEADERS}
    ${AWS_STORAGEGATEWAY_MODEL_HEADERS}
  )

  file(GLOB STORAGEGATEWAY_UNITY_SRC
    ${AWS_STORAGEGATEWAY_SOURCE}
    ${AWS_STORAGEGATEWAY_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("STORAGEGATEWAY" STORAGEGATEWAY_UNITY_SRC)
  endif()

  file(GLOB STORAGEGATEWAY_SRC
    ${STORAGEGATEWAY_UNIFIED_HEADERS}
    ${STORAGEGATEWAY_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\storagegateway" FILES ${AWS_STORAGEGATEWAY_HEADERS})
      source_group("Header Files\\aws\\storagegateway\\model" FILES ${AWS_STORAGEGATEWAY_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_STORAGEGATEWAY_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_STORAGEGATEWAY_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(STORAGEGATEWAY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${STORAGEGATEWAY_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_STORAGEGATEWAY_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-storagegateway ${LIBTYPE} ${STORAGEGATEWAY_SRC})

  target_include_directories(aws-cpp-sdk-storagegateway PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-storagegateway aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-storagegateway
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-storagegateway)
    else()
      install (TARGETS aws-cpp-sdk-storagegateway
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_STORAGEGATEWAY_HEADERS} DESTINATION include/aws/storagegateway)
  install (FILES ${AWS_STORAGEGATEWAY_MODEL_HEADERS} DESTINATION include/aws/storagegateway/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-storagegateway.autopkg DESTINATION nuget)
  endif()



