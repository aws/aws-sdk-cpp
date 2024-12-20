/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Billing
{
namespace Model
{
  enum class BillingViewType
  {
    NOT_SET,
    PRIMARY,
    BILLING_GROUP,
    CUSTOM
  };

namespace BillingViewTypeMapper
{
AWS_BILLING_API BillingViewType GetBillingViewTypeForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForBillingViewType(BillingViewType value);
} // namespace BillingViewTypeMapper
} // namespace Model
} // namespace Billing
} // namespace Aws
