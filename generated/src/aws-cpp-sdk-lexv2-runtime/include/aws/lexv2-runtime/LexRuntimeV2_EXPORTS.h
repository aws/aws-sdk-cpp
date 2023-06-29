/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#ifdef _MSC_VER
    //disable windows complaining about max template size.
    #pragma warning (disable : 4503)
#endif // _MSC_VER

#if defined (USE_WINDOWS_DLL_SEMANTICS) || defined (_WIN32)
    #ifdef _MSC_VER
        #pragma warning(disable : 4251)
    #endif // _MSC_VER

    #ifdef USE_IMPORT_EXPORT
        #ifdef AWS_LEXRUNTIMEV2_EXPORTS
            #define AWS_LEXRUNTIMEV2_API __declspec(dllexport)
        #else
            #define AWS_LEXRUNTIMEV2_API __declspec(dllimport)
        #endif /* AWS_LEXRUNTIMEV2_EXPORTS */
        #define AWS_LEXRUNTIMEV2_EXTERN
    #else
        #define AWS_LEXRUNTIMEV2_API
        #define AWS_LEXRUNTIMEV2_EXTERN extern
    #endif // USE_IMPORT_EXPORT
#else // defined (USE_WINDOWS_DLL_SEMANTICS) || defined (WIN32)
    #define AWS_LEXRUNTIMEV2_API
    #define AWS_LEXRUNTIMEV2_EXTERN extern
#endif // defined (USE_WINDOWS_DLL_SEMANTICS) || defined (WIN32)
