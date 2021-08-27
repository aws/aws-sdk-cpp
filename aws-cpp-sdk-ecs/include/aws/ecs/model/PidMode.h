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
  enum class PidMode
  {
    NOT_SET,
    host,
    task
  };

namespace PidModeMapper
{
AWS_ECS_API PidMode GetPidModeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForPidMode(PidMode value);
} // namespace PidModeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
