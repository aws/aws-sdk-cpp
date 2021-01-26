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
  enum class SchedulingStrategy
  {
    NOT_SET,
    REPLICA,
    DAEMON
  };

namespace SchedulingStrategyMapper
{
AWS_ECS_API SchedulingStrategy GetSchedulingStrategyForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForSchedulingStrategy(SchedulingStrategy value);
} // namespace SchedulingStrategyMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
