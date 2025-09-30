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
  enum class BurstablePerformance
  {
    NOT_SET,
    included,
    required,
    excluded
  };

namespace BurstablePerformanceMapper
{
AWS_ECS_API BurstablePerformance GetBurstablePerformanceForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForBurstablePerformance(BurstablePerformance value);
} // namespace BurstablePerformanceMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
