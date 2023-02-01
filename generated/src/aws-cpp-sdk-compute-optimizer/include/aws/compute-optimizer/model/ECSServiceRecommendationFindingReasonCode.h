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
  enum class ECSServiceRecommendationFindingReasonCode
  {
    NOT_SET,
    MemoryOverprovisioned,
    MemoryUnderprovisioned,
    CPUOverprovisioned,
    CPUUnderprovisioned
  };

namespace ECSServiceRecommendationFindingReasonCodeMapper
{
AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationFindingReasonCode GetECSServiceRecommendationFindingReasonCodeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForECSServiceRecommendationFindingReasonCode(ECSServiceRecommendationFindingReasonCode value);
} // namespace ECSServiceRecommendationFindingReasonCodeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
