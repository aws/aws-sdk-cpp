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
  enum class SavingsPlansFilterName
  {
    NOT_SET,
    region,
    ec2_instance_family,
    commitment,
    upfront,
    term,
    savings_plan_type,
    payment_option,
    start,
    end
  };

namespace SavingsPlansFilterNameMapper
{
AWS_SAVINGSPLANS_API SavingsPlansFilterName GetSavingsPlansFilterNameForName(const Aws::String& name);

AWS_SAVINGSPLANS_API Aws::String GetNameForSavingsPlansFilterName(SavingsPlansFilterName value);
} // namespace SavingsPlansFilterNameMapper
} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
