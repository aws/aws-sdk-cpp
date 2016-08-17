cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-swf)

  file(GLOB AWS_SWF_HEADERS
    "include/aws/swf/*.h"
  )

  file(GLOB AWS_SWF_MODEL_HEADERS
    "include/aws/swf/model/*.h"
  )

  file(GLOB AWS_SWF_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_SWF_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB SWF_UNIFIED_HEADERS
    ${AWS_SWF_HEADERS}
    ${AWS_SWF_MODEL_HEADERS}
  )

  file(GLOB SWF_UNITY_SRC
    ${AWS_SWF_SOURCE}
    ${AWS_SWF_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("SWF" SWF_UNITY_SRC)
  endif()

  file(GLOB SWF_SRC
    ${SWF_UNIFIED_HEADERS}
    ${SWF_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\swf" FILES ${AWS_SWF_HEADERS})
      source_group("Header Files\\aws\\swf\\model" FILES ${AWS_SWF_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_SWF_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_SWF_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(SWF_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${SWF_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_SWF_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-swf ${LIBTYPE} ${SWF_SRC})

  target_include_directories(aws-cpp-sdk-swf PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-swf aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-swf
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-swf)
    else()
      install (TARGETS aws-cpp-sdk-swf
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_SWF_HEADERS} DESTINATION include/aws/swf)
  install (FILES ${AWS_SWF_MODEL_HEADERS} DESTINATION include/aws/swf/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-swf.autopkg DESTINATION nuget)
  endif()



