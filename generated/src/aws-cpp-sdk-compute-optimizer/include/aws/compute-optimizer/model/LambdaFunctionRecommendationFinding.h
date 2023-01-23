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
  enum class LambdaFunctionRecommendationFinding
  {
    NOT_SET,
    Optimized,
    NotOptimized,
    Unavailable
  };

namespace LambdaFunctionRecommendationFindingMapper
{
AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendationFinding GetLambdaFunctionRecommendationFindingForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLambdaFunctionRecommendationFinding(LambdaFunctionRecommendationFinding value);
} // namespace LambdaFunctionRecommendationFindingMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
