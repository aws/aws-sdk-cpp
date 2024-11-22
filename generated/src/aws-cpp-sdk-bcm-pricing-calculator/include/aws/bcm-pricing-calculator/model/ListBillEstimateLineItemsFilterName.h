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
  enum class ListBillEstimateLineItemsFilterName
  {
    NOT_SET,
    USAGE_ACCOUNT_ID,
    SERVICE_CODE,
    USAGE_TYPE,
    OPERATION,
    LOCATION,
    LINE_ITEM_TYPE
  };

namespace ListBillEstimateLineItemsFilterNameMapper
{
AWS_BCMPRICINGCALCULATOR_API ListBillEstimateLineItemsFilterName GetListBillEstimateLineItemsFilterNameForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForListBillEstimateLineItemsFilterName(ListBillEstimateLineItemsFilterName value);
} // namespace ListBillEstimateLineItemsFilterNameMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
