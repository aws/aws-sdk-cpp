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
  enum class BillingViewStatusReason
  {
    NOT_SET,
    SOURCE_VIEW_UNHEALTHY,
    SOURCE_VIEW_UPDATING,
    SOURCE_VIEW_ACCESS_DENIED,
    SOURCE_VIEW_NOT_FOUND,
    CYCLIC_DEPENDENCY,
    SOURCE_VIEW_DEPTH_EXCEEDED,
    AGGREGATE_SOURCE,
    VIEW_OWNER_NOT_MANAGEMENT_ACCOUNT
  };

namespace BillingViewStatusReasonMapper
{
AWS_BILLING_API BillingViewStatusReason GetBillingViewStatusReasonForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForBillingViewStatusReason(BillingViewStatusReason value);
} // namespace BillingViewStatusReasonMapper
} // namespace Model
} // namespace Billing
} // namespace Aws
