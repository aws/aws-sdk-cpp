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
  enum class ListBillEstimatesFilterName
  {
    NOT_SET,
    STATUS,
    NAME
  };

namespace ListBillEstimatesFilterNameMapper
{
AWS_BCMPRICINGCALCULATOR_API ListBillEstimatesFilterName GetListBillEstimatesFilterNameForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForListBillEstimatesFilterName(ListBillEstimatesFilterName value);
} // namespace ListBillEstimatesFilterNameMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
