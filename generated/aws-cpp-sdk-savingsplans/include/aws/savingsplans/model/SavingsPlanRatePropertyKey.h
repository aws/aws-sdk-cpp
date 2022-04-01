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
  enum class SavingsPlanRatePropertyKey
  {
    NOT_SET,
    region,
    instanceType,
    instanceFamily,
    productDescription,
    tenancy
  };

namespace SavingsPlanRatePropertyKeyMapper
{
AWS_SAVINGSPLANS_API SavingsPlanRatePropertyKey GetSavingsPlanRatePropertyKeyForName(const Aws::String& name);

AWS_SAVINGSPLANS_API Aws::String GetNameForSavingsPlanRatePropertyKey(SavingsPlanRatePropertyKey value);
} // namespace SavingsPlanRatePropertyKeyMapper
} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
