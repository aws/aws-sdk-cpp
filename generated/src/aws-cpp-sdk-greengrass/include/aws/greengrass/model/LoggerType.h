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
  enum class LoggerType
  {
    NOT_SET,
    FileSystem,
    AWSCloudWatch
  };

namespace LoggerTypeMapper
{
AWS_GREENGRASS_API LoggerType GetLoggerTypeForName(const Aws::String& name);

AWS_GREENGRASS_API Aws::String GetNameForLoggerType(LoggerType value);
} // namespace LoggerTypeMapper
} // namespace Model
} // namespace Greengrass
} // namespace Aws
