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
  enum class LambdaFunctionMemoryMetricStatistic
  {
    NOT_SET,
    LowerBound,
    UpperBound,
    Expected
  };

namespace LambdaFunctionMemoryMetricStatisticMapper
{
AWS_COMPUTEOPTIMIZER_API LambdaFunctionMemoryMetricStatistic GetLambdaFunctionMemoryMetricStatisticForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLambdaFunctionMemoryMetricStatistic(LambdaFunctionMemoryMetricStatistic value);
} // namespace LambdaFunctionMemoryMetricStatisticMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
