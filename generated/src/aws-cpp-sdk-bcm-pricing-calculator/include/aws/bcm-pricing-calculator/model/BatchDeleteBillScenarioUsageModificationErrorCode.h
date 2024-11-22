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
  enum class BatchDeleteBillScenarioUsageModificationErrorCode
  {
    NOT_SET,
    BAD_REQUEST,
    CONFLICT,
    INTERNAL_SERVER_ERROR
  };

namespace BatchDeleteBillScenarioUsageModificationErrorCodeMapper
{
AWS_BCMPRICINGCALCULATOR_API BatchDeleteBillScenarioUsageModificationErrorCode GetBatchDeleteBillScenarioUsageModificationErrorCodeForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForBatchDeleteBillScenarioUsageModificationErrorCode(BatchDeleteBillScenarioUsageModificationErrorCode value);
} // namespace BatchDeleteBillScenarioUsageModificationErrorCodeMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
