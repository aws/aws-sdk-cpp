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
enum class CreditStatus { NOT_SET, ENABLED, DISABLED };

namespace CreditStatusMapper {
AWS_BILLING_API CreditStatus GetCreditStatusForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForCreditStatus(CreditStatus value);
}  // namespace CreditStatusMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
