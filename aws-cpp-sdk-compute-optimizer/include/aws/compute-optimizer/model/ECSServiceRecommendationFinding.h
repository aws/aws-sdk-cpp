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
  enum class ECSServiceRecommendationFinding
  {
    NOT_SET,
    Optimized,
    Underprovisioned,
    Overprovisioned
  };

namespace ECSServiceRecommendationFindingMapper
{
AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationFinding GetECSServiceRecommendationFindingForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForECSServiceRecommendationFinding(ECSServiceRecommendationFinding value);
} // namespace ECSServiceRecommendationFindingMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
