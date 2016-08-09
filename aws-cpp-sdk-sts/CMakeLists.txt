cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-sts)

  file(GLOB AWS_STS_HEADERS
    "include/aws/sts/*.h"
  )

  file(GLOB AWS_STS_MODEL_HEADERS
    "include/aws/sts/model/*.h"
  )

  file(GLOB AWS_STS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_STS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB STS_UNIFIED_HEADERS
    ${AWS_STS_HEADERS}
    ${AWS_STS_MODEL_HEADERS}
  )

  file(GLOB STS_UNITY_SRC
    ${AWS_STS_SOURCE}
    ${AWS_STS_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("STS" STS_UNITY_SRC)
  endif()

  file(GLOB STS_SRC
    ${STS_UNIFIED_HEADERS}
    ${STS_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\sts" FILES ${AWS_STS_HEADERS})
      source_group("Header Files\\aws\\sts\\model" FILES ${AWS_STS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_STS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_STS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(STS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${STS_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_STS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-sts ${LIBTYPE} ${STS_SRC})

  target_include_directories(aws-cpp-sdk-sts PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-sts aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-sts
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-sts)
    else()
      install (TARGETS aws-cpp-sdk-sts
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_STS_HEADERS} DESTINATION include/aws/sts)
  install (FILES ${AWS_STS_MODEL_HEADERS} DESTINATION include/aws/sts/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-sts.autopkg DESTINATION nuget)
  endif()



