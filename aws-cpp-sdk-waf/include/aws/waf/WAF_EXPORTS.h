/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once

#ifdef _WIN32
//disable windows complaining about max template size.
#pragma warning (disable : 4503)
#endif

#if defined (_MSC_VER)
#pragma warning(disable : 4251)
  #ifdef USE_IMPORT_EXPORT
    #ifdef AWS_WAF_EXPORTS
       #define AWS_WAF_API __declspec(dllexport)
    #else
       #define AWS_WAF_API __declspec(dllimport)
    #endif /* AWS_WAF_EXPORTS */
  #else
       #define AWS_WAF_API
   #endif //
#else /* defined (_MSC_VER) */
#define AWS_WAF_API
#endif
