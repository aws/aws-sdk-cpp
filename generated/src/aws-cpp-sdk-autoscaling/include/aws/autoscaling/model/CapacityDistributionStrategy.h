/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{
  enum class CapacityDistributionStrategy
  {
    NOT_SET,
    balanced_only,
    balanced_best_effort
  };

namespace CapacityDistributionStrategyMapper
{
AWS_AUTOSCALING_API CapacityDistributionStrategy GetCapacityDistributionStrategyForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForCapacityDistributionStrategy(CapacityDistributionStrategy value);
} // namespace CapacityDistributionStrategyMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
