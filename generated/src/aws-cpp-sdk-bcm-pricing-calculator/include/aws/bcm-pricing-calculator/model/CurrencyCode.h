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
  enum class CurrencyCode
  {
    NOT_SET,
    USD
  };

namespace CurrencyCodeMapper
{
AWS_BCMPRICINGCALCULATOR_API CurrencyCode GetCurrencyCodeForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForCurrencyCode(CurrencyCode value);
} // namespace CurrencyCodeMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
