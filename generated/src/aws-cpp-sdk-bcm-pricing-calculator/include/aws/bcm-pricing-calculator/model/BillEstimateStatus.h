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
  enum class BillEstimateStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETE,
    FAILED
  };

namespace BillEstimateStatusMapper
{
AWS_BCMPRICINGCALCULATOR_API BillEstimateStatus GetBillEstimateStatusForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForBillEstimateStatus(BillEstimateStatus value);
} // namespace BillEstimateStatusMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
