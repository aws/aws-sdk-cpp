/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{
  enum class PricingRuleType
  {
    NOT_SET,
    MARKUP,
    DISCOUNT,
    TIERING
  };

namespace PricingRuleTypeMapper
{
AWS_BILLINGCONDUCTOR_API PricingRuleType GetPricingRuleTypeForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForPricingRuleType(PricingRuleType value);
} // namespace PricingRuleTypeMapper
} // namespace Model
} // namespace BillingConductor
} // namespace Aws
