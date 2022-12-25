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
  enum class RecommendationSourceType
  {
    NOT_SET,
    Ec2Instance,
    AutoScalingGroup,
    EbsVolume,
    LambdaFunction,
    EcsService
  };

namespace RecommendationSourceTypeMapper
{
AWS_COMPUTEOPTIMIZER_API RecommendationSourceType GetRecommendationSourceTypeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForRecommendationSourceType(RecommendationSourceType value);
} // namespace RecommendationSourceTypeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
