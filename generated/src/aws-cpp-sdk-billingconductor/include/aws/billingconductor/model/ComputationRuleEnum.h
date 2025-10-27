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
enum class ComputationRuleEnum { NOT_SET, CONSOLIDATED };

namespace ComputationRuleEnumMapper {
AWS_BILLINGCONDUCTOR_API ComputationRuleEnum GetComputationRuleEnumForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForComputationRuleEnum(ComputationRuleEnum value);
}  // namespace ComputationRuleEnumMapper
}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
