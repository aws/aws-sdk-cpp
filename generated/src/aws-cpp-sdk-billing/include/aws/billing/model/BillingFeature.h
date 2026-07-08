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
enum class BillingFeature {
  NOT_SET,
  RI_SHARING,
  RI_SHARING_HISTORY,
  CREDIT_SHARING,
  CREDIT_SHARING_HISTORY,
  CREDIT_LEVEL_SHARING,
  BILLING_ALERTS,
  CREDIT_PREFERENCE_OPTIONS
};

namespace BillingFeatureMapper {
AWS_BILLING_API BillingFeature GetBillingFeatureForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForBillingFeature(BillingFeature value);
}  // namespace BillingFeatureMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
