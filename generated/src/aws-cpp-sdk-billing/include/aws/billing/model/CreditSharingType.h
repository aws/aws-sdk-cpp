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
enum class CreditSharingType { NOT_SET, DEFAULT, DISABLED, CUSTOM, COST_CATEGORY_RULE };

namespace CreditSharingTypeMapper {
AWS_BILLING_API CreditSharingType GetCreditSharingTypeForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForCreditSharingType(CreditSharingType value);
}  // namespace CreditSharingTypeMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
