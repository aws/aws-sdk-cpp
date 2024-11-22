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
  enum class ListUsageFilterName
  {
    NOT_SET,
    USAGE_ACCOUNT_ID,
    SERVICE_CODE,
    USAGE_TYPE,
    OPERATION,
    LOCATION,
    USAGE_GROUP,
    HISTORICAL_USAGE_ACCOUNT_ID,
    HISTORICAL_SERVICE_CODE,
    HISTORICAL_USAGE_TYPE,
    HISTORICAL_OPERATION,
    HISTORICAL_LOCATION
  };

namespace ListUsageFilterNameMapper
{
AWS_BCMPRICINGCALCULATOR_API ListUsageFilterName GetListUsageFilterNameForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForListUsageFilterName(ListUsageFilterName value);
} // namespace ListUsageFilterNameMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
