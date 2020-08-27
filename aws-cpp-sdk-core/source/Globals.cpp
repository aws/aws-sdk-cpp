/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/Api.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/auth/auth.h>

namespace Aws
{
    static const char TAG[] = "GlobalEnumOverflowContainer";

    static Aws::Crt::ApiHandle* g_apiHandle;

    Aws::Crt::ApiHandle* GetApiHandle()
    {
        return g_apiHandle;
    }

    void InitializeCrt()
    {
        g_apiHandle = Aws::New<Aws::Crt::ApiHandle>(TAG, Aws::get_aws_allocator());
    }

    void CleanupCrt()
    {
        aws_global_thread_creator_shutdown_wait_for(5);
        Aws::Crt::g_allocator = nullptr;
        aws_auth_library_clean_up();
        aws_mqtt_library_clean_up();
        aws_http_library_clean_up();

        Aws::Delete(g_apiHandle);
    }

    static Utils::EnumParseOverflowContainer* g_enumOverflow;

    Utils::EnumParseOverflowContainer* GetEnumOverflowContainer()
    {
        return g_enumOverflow;
    }

    void InitializeEnumOverflowContainer()
    {
        g_enumOverflow = Aws::New<Aws::Utils::EnumParseOverflowContainer>(TAG);
    }

    void CleanupEnumOverflowContainer()
    {
        Aws::Delete(g_enumOverflow);
    }
}
