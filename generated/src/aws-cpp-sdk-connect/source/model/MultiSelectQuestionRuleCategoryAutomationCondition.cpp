/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MultiSelectQuestionRuleCategoryAutomationCondition.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace MultiSelectQuestionRuleCategoryAutomationConditionMapper {

static const int PRESENT_HASH = HashingUtils::HashString("PRESENT");
static const int NOT_PRESENT_HASH = HashingUtils::HashString("NOT_PRESENT");

MultiSelectQuestionRuleCategoryAutomationCondition GetMultiSelectQuestionRuleCategoryAutomationConditionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRESENT_HASH) {
    return MultiSelectQuestionRuleCategoryAutomationCondition::PRESENT;
  } else if (hashCode == NOT_PRESENT_HASH) {
    return MultiSelectQuestionRuleCategoryAutomationCondition::NOT_PRESENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MultiSelectQuestionRuleCategoryAutomationCondition>(hashCode);
  }

  return MultiSelectQuestionRuleCategoryAutomationCondition::NOT_SET;
}

Aws::String GetNameForMultiSelectQuestionRuleCategoryAutomationCondition(MultiSelectQuestionRuleCategoryAutomationCondition enumValue) {
  switch (enumValue) {
    case MultiSelectQuestionRuleCategoryAutomationCondition::NOT_SET:
      return {};
    case MultiSelectQuestionRuleCategoryAutomationCondition::PRESENT:
      return "PRESENT";
    case MultiSelectQuestionRuleCategoryAutomationCondition::NOT_PRESENT:
      return "NOT_PRESENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MultiSelectQuestionRuleCategoryAutomationConditionMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
