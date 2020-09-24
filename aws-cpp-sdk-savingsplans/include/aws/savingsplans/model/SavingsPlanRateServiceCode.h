/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{
  enum class SavingsPlanRateServiceCode
  {
    NOT_SET,
    AmazonEC2,
    AmazonECS,
    AWSLambda
  };

namespace SavingsPlanRateServiceCodeMapper
{
AWS_SAVINGSPLANS_API SavingsPlanRateServiceCode GetSavingsPlanRateServiceCodeForName(const Aws::String& name);

AWS_SAVINGSPLANS_API Aws::String GetNameForSavingsPlanRateServiceCode(SavingsPlanRateServiceCode value);
} // namespace SavingsPlanRateServiceCodeMapper
} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
