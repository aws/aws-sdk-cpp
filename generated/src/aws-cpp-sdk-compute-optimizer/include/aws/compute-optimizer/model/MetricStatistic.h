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
  enum class MetricStatistic
  {
    NOT_SET,
    Maximum,
    Average
  };

namespace MetricStatisticMapper
{
AWS_COMPUTEOPTIMIZER_API MetricStatistic GetMetricStatisticForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForMetricStatistic(MetricStatistic value);
} // namespace MetricStatisticMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
