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
  enum class BillingViewStatus
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY,
    CREATING,
    UPDATING
  };

namespace BillingViewStatusMapper
{
AWS_BILLING_API BillingViewStatus GetBillingViewStatusForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForBillingViewStatus(BillingViewStatus value);
} // namespace BillingViewStatusMapper
} // namespace Model
} // namespace Billing
} // namespace Aws
