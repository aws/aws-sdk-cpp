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
  enum class RDSDBRecommendationFilterName
  {
    NOT_SET,
    InstanceFinding,
    InstanceFindingReasonCode,
    StorageFinding,
    StorageFindingReasonCode,
    Idle
  };

namespace RDSDBRecommendationFilterNameMapper
{
AWS_COMPUTEOPTIMIZER_API RDSDBRecommendationFilterName GetRDSDBRecommendationFilterNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForRDSDBRecommendationFilterName(RDSDBRecommendationFilterName value);
} // namespace RDSDBRecommendationFilterNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
