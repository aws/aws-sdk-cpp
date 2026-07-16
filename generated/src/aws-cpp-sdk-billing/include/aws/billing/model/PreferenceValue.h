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
enum class PreferenceValue { NOT_SET, ENABLED, DISABLED };

namespace PreferenceValueMapper {
AWS_BILLING_API PreferenceValue GetPreferenceValueForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForPreferenceValue(PreferenceValue value);
}  // namespace PreferenceValueMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
