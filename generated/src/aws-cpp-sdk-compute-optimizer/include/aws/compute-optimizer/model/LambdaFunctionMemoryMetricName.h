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
  enum class LambdaFunctionMemoryMetricName
  {
    NOT_SET,
    Duration
  };

namespace LambdaFunctionMemoryMetricNameMapper
{
AWS_COMPUTEOPTIMIZER_API LambdaFunctionMemoryMetricName GetLambdaFunctionMemoryMetricNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLambdaFunctionMemoryMetricName(LambdaFunctionMemoryMetricName value);
} // namespace LambdaFunctionMemoryMetricNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
