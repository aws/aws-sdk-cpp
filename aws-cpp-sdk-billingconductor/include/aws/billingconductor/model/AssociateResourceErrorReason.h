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
  enum class AssociateResourceErrorReason
  {
    NOT_SET,
    INVALID_ARN,
    SERVICE_LIMIT_EXCEEDED,
    ILLEGAL_CUSTOMLINEITEM,
    INTERNAL_SERVER_EXCEPTION,
    INVALID_BILLING_PERIOD_RANGE
  };

namespace AssociateResourceErrorReasonMapper
{
AWS_BILLINGCONDUCTOR_API AssociateResourceErrorReason GetAssociateResourceErrorReasonForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForAssociateResourceErrorReason(AssociateResourceErrorReason value);
} // namespace AssociateResourceErrorReasonMapper
} // namespace Model
} // namespace BillingConductor
} // namespace Aws
