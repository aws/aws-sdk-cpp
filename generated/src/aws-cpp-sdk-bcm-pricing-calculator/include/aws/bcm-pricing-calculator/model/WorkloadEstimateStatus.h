/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{
  enum class WorkloadEstimateStatus
  {
    NOT_SET,
    UPDATING,
    VALID,
    INVALID,
    ACTION_NEEDED
  };

namespace WorkloadEstimateStatusMapper
{
AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateStatus GetWorkloadEstimateStatusForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForWorkloadEstimateStatus(WorkloadEstimateStatus value);
} // namespace WorkloadEstimateStatusMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
