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
  enum class RateType
  {
    NOT_SET,
    BEFORE_DISCOUNTS,
    AFTER_DISCOUNTS,
    AFTER_DISCOUNTS_AND_COMMITMENTS
  };

namespace RateTypeMapper
{
AWS_BCMPRICINGCALCULATOR_API RateType GetRateTypeForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForRateType(RateType value);
} // namespace RateTypeMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
