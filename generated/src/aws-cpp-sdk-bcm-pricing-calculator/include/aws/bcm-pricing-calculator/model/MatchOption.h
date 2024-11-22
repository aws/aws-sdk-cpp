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
  enum class MatchOption
  {
    NOT_SET,
    EQUALS,
    STARTS_WITH,
    CONTAINS
  };

namespace MatchOptionMapper
{
AWS_BCMPRICINGCALCULATOR_API MatchOption GetMatchOptionForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForMatchOption(MatchOption value);
} // namespace MatchOptionMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
