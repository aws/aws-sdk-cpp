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
  enum class BatchDeleteBillScenarioCommitmentModificationErrorCode
  {
    NOT_SET,
    BAD_REQUEST,
    CONFLICT,
    INTERNAL_SERVER_ERROR
  };

namespace BatchDeleteBillScenarioCommitmentModificationErrorCodeMapper
{
AWS_BCMPRICINGCALCULATOR_API BatchDeleteBillScenarioCommitmentModificationErrorCode GetBatchDeleteBillScenarioCommitmentModificationErrorCodeForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForBatchDeleteBillScenarioCommitmentModificationErrorCode(BatchDeleteBillScenarioCommitmentModificationErrorCode value);
} // namespace BatchDeleteBillScenarioCommitmentModificationErrorCodeMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
