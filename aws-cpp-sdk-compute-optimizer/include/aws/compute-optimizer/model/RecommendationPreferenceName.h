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
  enum class RecommendationPreferenceName
  {
    NOT_SET,
    EnhancedInfrastructureMetrics,
    InferredWorkloadTypes,
    ExternalMetricsPreference
  };

namespace RecommendationPreferenceNameMapper
{
AWS_COMPUTEOPTIMIZER_API RecommendationPreferenceName GetRecommendationPreferenceNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForRecommendationPreferenceName(RecommendationPreferenceName value);
} // namespace RecommendationPreferenceNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
