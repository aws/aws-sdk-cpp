/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BillingConductor {
namespace Model {
enum class BillingGroupType { NOT_SET, STANDARD, TRANSFER_BILLING };

namespace BillingGroupTypeMapper {
AWS_BILLINGCONDUCTOR_API BillingGroupType GetBillingGroupTypeForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForBillingGroupType(BillingGroupType value);
}  // namespace BillingGroupTypeMapper
}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
