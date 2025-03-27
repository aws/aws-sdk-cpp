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
  enum class BillScenarioStatus
  {
    NOT_SET,
    READY,
    LOCKED,
    FAILED,
    STALE
  };

namespace BillScenarioStatusMapper
{
AWS_BCMPRICINGCALCULATOR_API BillScenarioStatus GetBillScenarioStatusForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForBillScenarioStatus(BillScenarioStatus value);
} // namespace BillScenarioStatusMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
