/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class ECSServiceMetricStatistic
  {
    NOT_SET,
    Maximum,
    Average
  };

namespace ECSServiceMetricStatisticMapper
{
AWS_COMPUTEOPTIMIZER_API ECSServiceMetricStatistic GetECSServiceMetricStatisticForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForECSServiceMetricStatistic(ECSServiceMetricStatistic value);
} // namespace ECSServiceMetricStatisticMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
