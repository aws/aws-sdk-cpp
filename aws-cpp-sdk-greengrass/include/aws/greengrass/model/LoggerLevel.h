/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Greengrass
{
namespace Model
{
  enum class LoggerLevel
  {
    NOT_SET,
    DEBUG_,
    INFO,
    WARN,
    ERROR_,
    FATAL
  };

namespace LoggerLevelMapper
{
AWS_GREENGRASS_API LoggerLevel GetLoggerLevelForName(const Aws::String& name);

AWS_GREENGRASS_API Aws::String GetNameForLoggerLevel(LoggerLevel value);
} // namespace LoggerLevelMapper
} // namespace Model
} // namespace Greengrass
} // namespace Aws
