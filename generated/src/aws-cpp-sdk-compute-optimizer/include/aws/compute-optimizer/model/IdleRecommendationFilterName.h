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
  enum class IdleRecommendationFilterName
  {
    NOT_SET,
    Finding,
    ResourceType
  };

namespace IdleRecommendationFilterNameMapper
{
AWS_COMPUTEOPTIMIZER_API IdleRecommendationFilterName GetIdleRecommendationFilterNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForIdleRecommendationFilterName(IdleRecommendationFilterName value);
} // namespace IdleRecommendationFilterNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
