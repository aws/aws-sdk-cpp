cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-elasticmapreduce)

  file(GLOB AWS_ELASTICMAPREDUCE_HEADERS
    "include/aws/elasticmapreduce/*.h"
  )

  file(GLOB AWS_ELASTICMAPREDUCE_MODEL_HEADERS
    "include/aws/elasticmapreduce/model/*.h"
  )

  file(GLOB AWS_ELASTICMAPREDUCE_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ELASTICMAPREDUCE_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ELASTICMAPREDUCE_UNIFIED_HEADERS
    ${AWS_ELASTICMAPREDUCE_HEADERS}
    ${AWS_ELASTICMAPREDUCE_MODEL_HEADERS}
  )

  file(GLOB ELASTICMAPREDUCE_UNITY_SRC
    ${AWS_ELASTICMAPREDUCE_SOURCE}
    ${AWS_ELASTICMAPREDUCE_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("ELASTICMAPREDUCE" ELASTICMAPREDUCE_UNITY_SRC)
  endif()

  file(GLOB ELASTICMAPREDUCE_SRC
    ${ELASTICMAPREDUCE_UNIFIED_HEADERS}
    ${ELASTICMAPREDUCE_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\elasticmapreduce" FILES ${AWS_ELASTICMAPREDUCE_HEADERS})
      source_group("Header Files\\aws\\elasticmapreduce\\model" FILES ${AWS_ELASTICMAPREDUCE_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ELASTICMAPREDUCE_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ELASTICMAPREDUCE_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ELASTICMAPREDUCE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ELASTICMAPREDUCE_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_EMR_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-elasticmapreduce ${LIBTYPE} ${ELASTICMAPREDUCE_SRC})

  target_include_directories(aws-cpp-sdk-elasticmapreduce PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-elasticmapreduce aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-elasticmapreduce
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-elasticmapreduce)
    else()
      install (TARGETS aws-cpp-sdk-elasticmapreduce
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_ELASTICMAPREDUCE_HEADERS} DESTINATION include/aws/elasticmapreduce)
  install (FILES ${AWS_ELASTICMAPREDUCE_MODEL_HEADERS} DESTINATION include/aws/elasticmapreduce/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-elasticmapreduce.autopkg DESTINATION nuget)
  endif()



