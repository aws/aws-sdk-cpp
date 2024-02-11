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
  enum class LicenseFindingReasonCode
  {
    NOT_SET,
    InvalidCloudWatchApplicationInsightsSetup,
    CloudWatchApplicationInsightsError,
    LicenseOverprovisioned,
    Optimized
  };

namespace LicenseFindingReasonCodeMapper
{
AWS_COMPUTEOPTIMIZER_API LicenseFindingReasonCode GetLicenseFindingReasonCodeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLicenseFindingReasonCode(LicenseFindingReasonCode value);
} // namespace LicenseFindingReasonCodeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
