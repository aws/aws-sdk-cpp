#
# Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License").
# You may not use this file except in compliance with the License.
# A copy of the License is located at
# 
#  http://aws.amazon.com/apache2.0
# 
# or in the "license" file accompanying this file. This file is distributed
# on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
# express or implied. See the License for the specific language governing
# permissions and limitations under the License.
#

SET( HAVE_GLIBC_STRERROR_R 1 CACHE STRING "Result from TRY_RUN" FORCE)
SET( HAVE_GLIBC_STRERROR_R__TRYRUN_OUTPUT "" CACHE STRING "Output from TRY_RUN" FORCE)
SET( HAVE_POSIX_STRERROR_R 0 CACHE STRING "Result from TRY_RUN" FORCE)
SET( HAVE_POSIX_STRERROR_R__TRYRUN_OUTPUT "" CACHE STRING "Output from TRY_RUN" FORCE)
SET( HAVE_POLL_FINE_EXITCODE 0 CACHE STRING "Result from TRY_RUN" FORCE )
SET( HAVE_POLL_FINE_EXITCODE__TRYRUN_OUTPUT "" CACHE STRING "Output from TRY_RUN" FORCE)
SET( OPENSSL_CRYPTO_LIBRARY crypto CACHE STRING "Set crypto" FORCE )
SET( OPENSSL_SSL_LIBRARY ssl CACHE STRING "Set ssl" FORCE )
