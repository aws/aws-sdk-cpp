/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class MultiSelectQuestionRuleCategoryAutomationCondition { NOT_SET, PRESENT, NOT_PRESENT };

namespace MultiSelectQuestionRuleCategoryAutomationConditionMapper {
AWS_CONNECT_API MultiSelectQuestionRuleCategoryAutomationCondition
GetMultiSelectQuestionRuleCategoryAutomationConditionForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForMultiSelectQuestionRuleCategoryAutomationCondition(
    MultiSelectQuestionRuleCategoryAutomationCondition value);
}  // namespace MultiSelectQuestionRuleCategoryAutomationConditionMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
