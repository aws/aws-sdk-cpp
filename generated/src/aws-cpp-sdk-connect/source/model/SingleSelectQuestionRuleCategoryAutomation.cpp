/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SingleSelectQuestionRuleCategoryAutomation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

SingleSelectQuestionRuleCategoryAutomation::SingleSelectQuestionRuleCategoryAutomation() : 
    m_categoryHasBeenSet(false),
    m_condition(SingleSelectQuestionRuleCategoryAutomationCondition::NOT_SET),
    m_conditionHasBeenSet(false),
    m_optionRefIdHasBeenSet(false)
{
}

SingleSelectQuestionRuleCategoryAutomation::SingleSelectQuestionRuleCategoryAutomation(JsonView jsonValue) : 
    m_categoryHasBeenSet(false),
    m_condition(SingleSelectQuestionRuleCategoryAutomationCondition::NOT_SET),
    m_conditionHasBeenSet(false),
    m_optionRefIdHasBeenSet(false)
{
  *this = jsonValue;
}

SingleSelectQuestionRuleCategoryAutomation& SingleSelectQuestionRuleCategoryAutomation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Category"))
  {
    m_category = jsonValue.GetString("Category");

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = SingleSelectQuestionRuleCategoryAutomationConditionMapper::GetSingleSelectQuestionRuleCategoryAutomationConditionForName(jsonValue.GetString("Condition"));

    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptionRefId"))
  {
    m_optionRefId = jsonValue.GetString("OptionRefId");

    m_optionRefIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SingleSelectQuestionRuleCategoryAutomation::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", m_category);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithString("Condition", SingleSelectQuestionRuleCategoryAutomationConditionMapper::GetNameForSingleSelectQuestionRuleCategoryAutomationCondition(m_condition));
  }

  if(m_optionRefIdHasBeenSet)
  {
   payload.WithString("OptionRefId", m_optionRefId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
