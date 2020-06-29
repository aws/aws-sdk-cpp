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
  enum class LoggerComponent
  {
    NOT_SET,
    GreengrassSystem,
    Lambda
  };

namespace LoggerComponentMapper
{
AWS_GREENGRASS_API LoggerComponent GetLoggerComponentForName(const Aws::String& name);

AWS_GREENGRASS_API Aws::String GetNameForLoggerComponent(LoggerComponent value);
} // namespace LoggerComponentMapper
} // namespace Model
} // namespace Greengrass
} // namespace Aws
