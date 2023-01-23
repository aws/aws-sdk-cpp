/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class ExecuteCommandLogging
  {
    NOT_SET,
    NONE,
    DEFAULT,
    OVERRIDE
  };

namespace ExecuteCommandLoggingMapper
{
AWS_ECS_API ExecuteCommandLogging GetExecuteCommandLoggingForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForExecuteCommandLogging(ExecuteCommandLogging value);
} // namespace ExecuteCommandLoggingMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
