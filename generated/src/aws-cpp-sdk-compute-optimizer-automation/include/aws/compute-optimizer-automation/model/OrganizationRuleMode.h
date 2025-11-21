/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
enum class OrganizationRuleMode { NOT_SET, AnyAllowed, NoneAllowed };

namespace OrganizationRuleModeMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationRuleMode GetOrganizationRuleModeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForOrganizationRuleMode(OrganizationRuleMode value);
}  // namespace OrganizationRuleModeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
