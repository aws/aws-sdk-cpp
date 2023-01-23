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
  enum class PricingRuleScope
  {
    NOT_SET,
    GLOBAL,
    SERVICE,
    BILLING_ENTITY
  };

namespace PricingRuleScopeMapper
{
AWS_BILLINGCONDUCTOR_API PricingRuleScope GetPricingRuleScopeForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForPricingRuleScope(PricingRuleScope value);
} // namespace PricingRuleScopeMapper
} // namespace Model
} // namespace BillingConductor
} // namespace Aws
