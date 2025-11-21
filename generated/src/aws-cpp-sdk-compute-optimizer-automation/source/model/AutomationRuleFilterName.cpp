/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/AutomationRuleFilterName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace AutomationRuleFilterNameMapper {

static const int Name_HASH = HashingUtils::HashString("Name");
static const int RecommendedActionType_HASH = HashingUtils::HashString("RecommendedActionType");
static const int Status_HASH = HashingUtils::HashString("Status");
static const int RuleType_HASH = HashingUtils::HashString("RuleType");
static const int OrganizationConfigurationRuleApplyOrder_HASH = HashingUtils::HashString("OrganizationConfigurationRuleApplyOrder");
static const int AccountId_HASH = HashingUtils::HashString("AccountId");

AutomationRuleFilterName GetAutomationRuleFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Name_HASH) {
    return AutomationRuleFilterName::Name;
  } else if (hashCode == RecommendedActionType_HASH) {
    return AutomationRuleFilterName::RecommendedActionType;
  } else if (hashCode == Status_HASH) {
    return AutomationRuleFilterName::Status;
  } else if (hashCode == RuleType_HASH) {
    return AutomationRuleFilterName::RuleType;
  } else if (hashCode == OrganizationConfigurationRuleApplyOrder_HASH) {
    return AutomationRuleFilterName::OrganizationConfigurationRuleApplyOrder;
  } else if (hashCode == AccountId_HASH) {
    return AutomationRuleFilterName::AccountId;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutomationRuleFilterName>(hashCode);
  }

  return AutomationRuleFilterName::NOT_SET;
}

Aws::String GetNameForAutomationRuleFilterName(AutomationRuleFilterName enumValue) {
  switch (enumValue) {
    case AutomationRuleFilterName::NOT_SET:
      return {};
    case AutomationRuleFilterName::Name:
      return "Name";
    case AutomationRuleFilterName::RecommendedActionType:
      return "RecommendedActionType";
    case AutomationRuleFilterName::Status:
      return "Status";
    case AutomationRuleFilterName::RuleType:
      return "RuleType";
    case AutomationRuleFilterName::OrganizationConfigurationRuleApplyOrder:
      return "OrganizationConfigurationRuleApplyOrder";
    case AutomationRuleFilterName::AccountId:
      return "AccountId";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutomationRuleFilterNameMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
