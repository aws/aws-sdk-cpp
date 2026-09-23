/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Billing {
namespace Model {
enum class BillingDomain { NOT_SET, BILLABLE, PRO_FORMA };

namespace BillingDomainMapper {
AWS_BILLING_API BillingDomain GetBillingDomainForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForBillingDomain(BillingDomain value);
}  // namespace BillingDomainMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
