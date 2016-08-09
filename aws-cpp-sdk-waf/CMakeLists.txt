cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-waf)

  file(GLOB AWS_WAF_HEADERS
    "include/aws/waf/*.h"
  )

  file(GLOB AWS_WAF_MODEL_HEADERS
    "include/aws/waf/model/*.h"
  )

  file(GLOB AWS_WAF_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_WAF_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB WAF_UNIFIED_HEADERS
    ${AWS_WAF_HEADERS}
    ${AWS_WAF_MODEL_HEADERS}
  )

  file(GLOB WAF_UNITY_SRC
    ${AWS_WAF_SOURCE}
    ${AWS_WAF_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("WAF" WAF_UNITY_SRC)
  endif()

  file(GLOB WAF_SRC
    ${WAF_UNIFIED_HEADERS}
    ${WAF_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\waf" FILES ${AWS_WAF_HEADERS})
      source_group("Header Files\\aws\\waf\\model" FILES ${AWS_WAF_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_WAF_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_WAF_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(WAF_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${WAF_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_WAF_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-waf ${LIBTYPE} ${WAF_SRC})

  target_include_directories(aws-cpp-sdk-waf PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-waf aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-waf
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-waf)
    else()
      install (TARGETS aws-cpp-sdk-waf
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_WAF_HEADERS} DESTINATION include/aws/waf)
  install (FILES ${AWS_WAF_MODEL_HEADERS} DESTINATION include/aws/waf/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-waf.autopkg DESTINATION nuget)
  endif()



