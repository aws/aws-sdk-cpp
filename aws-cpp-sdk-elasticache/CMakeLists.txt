cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-elasticache)

  file(GLOB AWS_ELASTICACHE_HEADERS
    "include/aws/elasticache/*.h"
  )

  file(GLOB AWS_ELASTICACHE_MODEL_HEADERS
    "include/aws/elasticache/model/*.h"
  )

  file(GLOB AWS_ELASTICACHE_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ELASTICACHE_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ELASTICACHE_UNIFIED_HEADERS
    ${AWS_ELASTICACHE_HEADERS}
    ${AWS_ELASTICACHE_MODEL_HEADERS}
  )

  file(GLOB ELASTICACHE_UNITY_SRC
    ${AWS_ELASTICACHE_SOURCE}
    ${AWS_ELASTICACHE_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("ELASTICACHE" ELASTICACHE_UNITY_SRC)
  endif()

  file(GLOB ELASTICACHE_SRC
    ${ELASTICACHE_UNIFIED_HEADERS}
    ${ELASTICACHE_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\elasticache" FILES ${AWS_ELASTICACHE_HEADERS})
      source_group("Header Files\\aws\\elasticache\\model" FILES ${AWS_ELASTICACHE_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ELASTICACHE_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ELASTICACHE_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ELASTICACHE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ELASTICACHE_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ELASTICACHE_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-elasticache ${LIBTYPE} ${ELASTICACHE_SRC})

  target_include_directories(aws-cpp-sdk-elasticache PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-elasticache aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-elasticache
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-elasticache)
    else()
      install (TARGETS aws-cpp-sdk-elasticache
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_ELASTICACHE_HEADERS} DESTINATION include/aws/elasticache)
  install (FILES ${AWS_ELASTICACHE_MODEL_HEADERS} DESTINATION include/aws/elasticache/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-elasticache.autopkg DESTINATION nuget)
  endif()



