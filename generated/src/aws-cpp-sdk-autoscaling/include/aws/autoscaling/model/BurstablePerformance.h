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
  enum class BurstablePerformance
  {
    NOT_SET,
    included,
    excluded,
    required
  };

namespace BurstablePerformanceMapper
{
AWS_AUTOSCALING_API BurstablePerformance GetBurstablePerformanceForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForBurstablePerformance(BurstablePerformance value);
} // namespace BurstablePerformanceMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
