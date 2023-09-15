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
  enum class LicenseRecommendationFilterName
  {
    NOT_SET,
    Finding,
    FindingReasonCode,
    LicenseName
  };

namespace LicenseRecommendationFilterNameMapper
{
AWS_COMPUTEOPTIMIZER_API LicenseRecommendationFilterName GetLicenseRecommendationFilterNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLicenseRecommendationFilterName(LicenseRecommendationFilterName value);
} // namespace LicenseRecommendationFilterNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
