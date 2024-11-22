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
  enum class WorkloadEstimateCostStatus
  {
    NOT_SET,
    VALID,
    INVALID,
    STALE
  };

namespace WorkloadEstimateCostStatusMapper
{
AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateCostStatus GetWorkloadEstimateCostStatusForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForWorkloadEstimateCostStatus(WorkloadEstimateCostStatus value);
} // namespace WorkloadEstimateCostStatusMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
