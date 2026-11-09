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
enum class MultiplierType { NOT_SET, PERCENTAGE, CURRENCY_AMOUNT };

namespace MultiplierTypeMapper {
AWS_BILLING_API MultiplierType GetMultiplierTypeForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForMultiplierType(MultiplierType value);
}  // namespace MultiplierTypeMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
