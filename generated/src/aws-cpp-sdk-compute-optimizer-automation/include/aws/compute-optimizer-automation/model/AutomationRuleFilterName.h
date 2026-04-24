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
enum class AutomationRuleFilterName {
  NOT_SET,
  Name,
  RecommendedActionType,
  Status,
  RuleType,
  OrganizationConfigurationRuleApplyOrder,
  AccountId
};

namespace AutomationRuleFilterNameMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API AutomationRuleFilterName GetAutomationRuleFilterNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForAutomationRuleFilterName(AutomationRuleFilterName value);
}  // namespace AutomationRuleFilterNameMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
