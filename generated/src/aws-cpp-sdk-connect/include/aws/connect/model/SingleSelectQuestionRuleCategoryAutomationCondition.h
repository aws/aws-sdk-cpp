/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class SingleSelectQuestionRuleCategoryAutomationCondition
  {
    NOT_SET,
    PRESENT,
    NOT_PRESENT
  };

namespace SingleSelectQuestionRuleCategoryAutomationConditionMapper
{
AWS_CONNECT_API SingleSelectQuestionRuleCategoryAutomationCondition GetSingleSelectQuestionRuleCategoryAutomationConditionForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForSingleSelectQuestionRuleCategoryAutomationCondition(SingleSelectQuestionRuleCategoryAutomationCondition value);
} // namespace SingleSelectQuestionRuleCategoryAutomationConditionMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
