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
enum class QuestionRuleCategoryAutomationCondition { NOT_SET, PRESENT, NOT_PRESENT };

namespace QuestionRuleCategoryAutomationConditionMapper {
AWS_CONNECT_API QuestionRuleCategoryAutomationCondition GetQuestionRuleCategoryAutomationConditionForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForQuestionRuleCategoryAutomationCondition(QuestionRuleCategoryAutomationCondition value);
}  // namespace QuestionRuleCategoryAutomationConditionMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
