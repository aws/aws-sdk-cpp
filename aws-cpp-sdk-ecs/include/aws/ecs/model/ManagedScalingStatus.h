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
  enum class ManagedScalingStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ManagedScalingStatusMapper
{
AWS_ECS_API ManagedScalingStatus GetManagedScalingStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForManagedScalingStatus(ManagedScalingStatus value);
} // namespace ManagedScalingStatusMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
