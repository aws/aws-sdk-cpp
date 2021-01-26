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
  enum class LambdaFunctionMetricName
  {
    NOT_SET,
    Duration,
    Memory
  };

namespace LambdaFunctionMetricNameMapper
{
AWS_COMPUTEOPTIMIZER_API LambdaFunctionMetricName GetLambdaFunctionMetricNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLambdaFunctionMetricName(LambdaFunctionMetricName value);
} // namespace LambdaFunctionMetricNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
