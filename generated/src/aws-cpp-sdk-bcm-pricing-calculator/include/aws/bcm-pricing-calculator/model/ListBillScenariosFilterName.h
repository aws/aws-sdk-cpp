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
  enum class ListBillScenariosFilterName
  {
    NOT_SET,
    STATUS,
    NAME
  };

namespace ListBillScenariosFilterNameMapper
{
AWS_BCMPRICINGCALCULATOR_API ListBillScenariosFilterName GetListBillScenariosFilterNameForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForListBillScenariosFilterName(ListBillScenariosFilterName value);
} // namespace ListBillScenariosFilterNameMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
