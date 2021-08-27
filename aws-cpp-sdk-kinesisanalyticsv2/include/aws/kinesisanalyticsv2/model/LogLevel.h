/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{
  enum class LogLevel
  {
    NOT_SET,
    INFO,
    WARN,
    ERROR_,
    DEBUG_
  };

namespace LogLevelMapper
{
AWS_KINESISANALYTICSV2_API LogLevel GetLogLevelForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForLogLevel(LogLevel value);
} // namespace LogLevelMapper
} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
