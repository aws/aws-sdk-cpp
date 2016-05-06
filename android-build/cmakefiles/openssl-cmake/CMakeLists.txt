# Based on original work by David Manura
# Copyright (C) 2007-2012 LuaDist.
# Copyright (C) 2013 Brian Sidebotham

# Redistribution and use of this file is allowed according to the terms of the
# MIT license.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

#bambrose 2015-06-01 commented out unneeded features that were breaking android build. Since this is only for android, we removed ocsp and wincrypt since they were not needed anyways.

project( openssl )
cmake_minimum_required( VERSION 2.8.3 )

add_definitions( -DZLIB )
if(BUILD_SHARED_LIBS)
    add_definitions( -DZLIB_SHARED )
endif()

if( WIN32 AND NOT CYGWIN )
  add_definitions( -DOPENSSL_SYSNAME_WIN32 )
  add_definitions( -DWIN32_LEAN_AND_MEAN )

  # avoid conflict: ocsp.h and wincrypt.h
  add_definitions( -D_WINDLL )

endif ( )

if( MINGW )
  set( CMAKE_SHARED_LINKER_FLAGS "-Wl,--export-all" )
endif()

add_subdirectory( crypto )
add_subdirectory( ssl )
if( NOT BUILD_SHARED_LIBS )
    add_subdirectory( apps )
endif()

install( FILES e_os2.h DESTINATION include/openssl )

# Generate the package target
set( CPACK_GENERATOR ZIP TGZ )
set( CPACK_PACKAGE_NAME "openssl-cmake" )
set( CPACK_PACKAGE_VERSION_MAJOR 1  )
set( CPACK_PACKAGE_VERSION_MINOR 0  )
set( CPACK_PACKAGE_VERSION_PATCH 2g )

include( CPack )

