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
  enum class ECSServiceRecommendationFilterName
  {
    NOT_SET,
    Finding,
    FindingReasonCode
  };

namespace ECSServiceRecommendationFilterNameMapper
{
AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationFilterName GetECSServiceRecommendationFilterNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForECSServiceRecommendationFilterName(ECSServiceRecommendationFilterName value);
} // namespace ECSServiceRecommendationFilterNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
