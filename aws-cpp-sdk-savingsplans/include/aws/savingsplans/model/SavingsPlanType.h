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
  enum class SavingsPlanType
  {
    NOT_SET,
    Compute,
    EC2Instance
  };

namespace SavingsPlanTypeMapper
{
AWS_SAVINGSPLANS_API SavingsPlanType GetSavingsPlanTypeForName(const Aws::String& name);

AWS_SAVINGSPLANS_API Aws::String GetNameForSavingsPlanType(SavingsPlanType value);
} // namespace SavingsPlanTypeMapper
} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
