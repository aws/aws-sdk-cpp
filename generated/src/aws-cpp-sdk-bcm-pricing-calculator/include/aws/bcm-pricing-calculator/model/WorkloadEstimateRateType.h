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
  enum class WorkloadEstimateRateType
  {
    NOT_SET,
    BEFORE_DISCOUNTS,
    AFTER_DISCOUNTS,
    AFTER_DISCOUNTS_AND_COMMITMENTS
  };

namespace WorkloadEstimateRateTypeMapper
{
AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateRateType GetWorkloadEstimateRateTypeForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForWorkloadEstimateRateType(WorkloadEstimateRateType value);
} // namespace WorkloadEstimateRateTypeMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
