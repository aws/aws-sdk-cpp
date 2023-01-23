/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class LogLevel
  {
    NOT_SET,
    DEBUG_,
    INFO,
    ERROR_,
    WARN,
    DISABLED
  };

namespace LogLevelMapper
{
AWS_IOT_API LogLevel GetLogLevelForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForLogLevel(LogLevel value);
} // namespace LogLevelMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
