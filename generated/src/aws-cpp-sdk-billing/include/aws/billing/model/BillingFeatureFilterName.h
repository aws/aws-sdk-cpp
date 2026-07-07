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
enum class BillingFeatureFilterName { NOT_SET, PREFERENCE_KEY };

namespace BillingFeatureFilterNameMapper {
AWS_BILLING_API BillingFeatureFilterName GetBillingFeatureFilterNameForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForBillingFeatureFilterName(BillingFeatureFilterName value);
}  // namespace BillingFeatureFilterNameMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
