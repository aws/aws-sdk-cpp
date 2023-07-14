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
  enum class SavingsPlanRateFilterName
  {
    NOT_SET,
    region,
    instanceType,
    productDescription,
    tenancy,
    productType,
    serviceCode,
    usageType,
    operation
  };

namespace SavingsPlanRateFilterNameMapper
{
AWS_SAVINGSPLANS_API SavingsPlanRateFilterName GetSavingsPlanRateFilterNameForName(const Aws::String& name);

AWS_SAVINGSPLANS_API Aws::String GetNameForSavingsPlanRateFilterName(SavingsPlanRateFilterName value);
} // namespace SavingsPlanRateFilterNameMapper
} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
