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
  enum class LambdaFunctionRecommendationFilterName
  {
    NOT_SET,
    Finding,
    FindingReasonCode
  };

namespace LambdaFunctionRecommendationFilterNameMapper
{
AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendationFilterName GetLambdaFunctionRecommendationFilterNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLambdaFunctionRecommendationFilterName(LambdaFunctionRecommendationFilterName value);
} // namespace LambdaFunctionRecommendationFilterNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
