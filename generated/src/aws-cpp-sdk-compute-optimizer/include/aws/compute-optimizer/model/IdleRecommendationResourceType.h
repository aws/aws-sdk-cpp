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
  enum class IdleRecommendationResourceType
  {
    NOT_SET,
    EC2Instance,
    AutoScalingGroup,
    EBSVolume,
    ECSService,
    RDSDBInstance
  };

namespace IdleRecommendationResourceTypeMapper
{
AWS_COMPUTEOPTIMIZER_API IdleRecommendationResourceType GetIdleRecommendationResourceTypeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForIdleRecommendationResourceType(IdleRecommendationResourceType value);
} // namespace IdleRecommendationResourceTypeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
