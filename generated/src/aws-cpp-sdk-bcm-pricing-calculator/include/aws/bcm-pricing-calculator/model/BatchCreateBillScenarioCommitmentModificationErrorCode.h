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
  enum class BatchCreateBillScenarioCommitmentModificationErrorCode
  {
    NOT_SET,
    CONFLICT,
    INTERNAL_SERVER_ERROR,
    INVALID_ACCOUNT
  };

namespace BatchCreateBillScenarioCommitmentModificationErrorCodeMapper
{
AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationErrorCode GetBatchCreateBillScenarioCommitmentModificationErrorCodeForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForBatchCreateBillScenarioCommitmentModificationErrorCode(BatchCreateBillScenarioCommitmentModificationErrorCode value);
} // namespace BatchCreateBillScenarioCommitmentModificationErrorCodeMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
