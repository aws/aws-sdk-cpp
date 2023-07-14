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
  enum class LambdaFunctionMetricStatistic
  {
    NOT_SET,
    Maximum,
    Average
  };

namespace LambdaFunctionMetricStatisticMapper
{
AWS_COMPUTEOPTIMIZER_API LambdaFunctionMetricStatistic GetLambdaFunctionMetricStatisticForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLambdaFunctionMetricStatistic(LambdaFunctionMetricStatistic value);
} // namespace LambdaFunctionMetricStatisticMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
