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
  enum class BatchUpdateBillScenarioUsageModificationErrorCode
  {
    NOT_SET,
    BAD_REQUEST,
    NOT_FOUND,
    CONFLICT,
    INTERNAL_SERVER_ERROR
  };

namespace BatchUpdateBillScenarioUsageModificationErrorCodeMapper
{
AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioUsageModificationErrorCode GetBatchUpdateBillScenarioUsageModificationErrorCodeForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForBatchUpdateBillScenarioUsageModificationErrorCode(BatchUpdateBillScenarioUsageModificationErrorCode value);
} // namespace BatchUpdateBillScenarioUsageModificationErrorCodeMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
