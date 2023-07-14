/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/logging/android/LogcatLogSystem.h>

#include <android/log.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Logging;

static const char *tag = "NativeSDK";

void LogcatLogSystem::ProcessFormattedStatement(Aws::String&& statement)
{
    __android_log_write(ANDROID_LOG_DEBUG, tag, statement.c_str());
}


