/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{
  enum class LogLevel
  {
    NOT_SET,
    INFO,
    ERROR_,
    DISABLED
  };

namespace LogLevelMapper
{
AWS_IOTWIRELESS_API LogLevel GetLogLevelForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForLogLevel(LogLevel value);
} // namespace LogLevelMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
