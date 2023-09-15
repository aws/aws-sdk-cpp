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
  enum class LineItemFilterValue
  {
    NOT_SET,
    SAVINGS_PLAN_NEGATION
  };

namespace LineItemFilterValueMapper
{
AWS_BILLINGCONDUCTOR_API LineItemFilterValue GetLineItemFilterValueForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForLineItemFilterValue(LineItemFilterValue value);
} // namespace LineItemFilterValueMapper
} // namespace Model
} // namespace BillingConductor
} // namespace Aws
