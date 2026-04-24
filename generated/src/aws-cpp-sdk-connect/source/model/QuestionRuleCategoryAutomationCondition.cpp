/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/QuestionRuleCategoryAutomationCondition.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace QuestionRuleCategoryAutomationConditionMapper {

static const int PRESENT_HASH = HashingUtils::HashString("PRESENT");
static const int NOT_PRESENT_HASH = HashingUtils::HashString("NOT_PRESENT");

QuestionRuleCategoryAutomationCondition GetQuestionRuleCategoryAutomationConditionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRESENT_HASH) {
    return QuestionRuleCategoryAutomationCondition::PRESENT;
  } else if (hashCode == NOT_PRESENT_HASH) {
    return QuestionRuleCategoryAutomationCondition::NOT_PRESENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QuestionRuleCategoryAutomationCondition>(hashCode);
  }

  return QuestionRuleCategoryAutomationCondition::NOT_SET;
}

Aws::String GetNameForQuestionRuleCategoryAutomationCondition(QuestionRuleCategoryAutomationCondition enumValue) {
  switch (enumValue) {
    case QuestionRuleCategoryAutomationCondition::NOT_SET:
      return {};
    case QuestionRuleCategoryAutomationCondition::PRESENT:
      return "PRESENT";
    case QuestionRuleCategoryAutomationCondition::NOT_PRESENT:
      return "NOT_PRESENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QuestionRuleCategoryAutomationConditionMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
