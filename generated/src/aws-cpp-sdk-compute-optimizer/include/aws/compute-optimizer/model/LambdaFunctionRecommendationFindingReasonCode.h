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
  enum class LambdaFunctionRecommendationFindingReasonCode
  {
    NOT_SET,
    MemoryOverprovisioned,
    MemoryUnderprovisioned,
    InsufficientData,
    Inconclusive
  };

namespace LambdaFunctionRecommendationFindingReasonCodeMapper
{
AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendationFindingReasonCode GetLambdaFunctionRecommendationFindingReasonCodeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLambdaFunctionRecommendationFindingReasonCode(LambdaFunctionRecommendationFindingReasonCode value);
} // namespace LambdaFunctionRecommendationFindingReasonCodeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
