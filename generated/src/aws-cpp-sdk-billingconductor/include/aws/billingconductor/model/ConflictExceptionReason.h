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
  enum class ConflictExceptionReason
  {
    NOT_SET,
    RESOURCE_NAME_CONFLICT,
    PRICING_RULE_IN_PRICING_PLAN_CONFLICT,
    PRICING_PLAN_ATTACHED_TO_BILLING_GROUP_DELETE_CONFLICT,
    PRICING_RULE_ATTACHED_TO_PRICING_PLAN_DELETE_CONFLICT,
    WRITE_CONFLICT_RETRY
  };

namespace ConflictExceptionReasonMapper
{
AWS_BILLINGCONDUCTOR_API ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason value);
} // namespace ConflictExceptionReasonMapper
} // namespace Model
} // namespace BillingConductor
} // namespace Aws
