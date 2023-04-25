/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormSingleSelectQuestionAutomationOption.h>
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

EvaluationFormSingleSelectQuestionAutomationOption::EvaluationFormSingleSelectQuestionAutomationOption() : 
    m_ruleCategoryHasBeenSet(false)
{
}

EvaluationFormSingleSelectQuestionAutomationOption::EvaluationFormSingleSelectQuestionAutomationOption(JsonView jsonValue) : 
    m_ruleCategoryHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationFormSingleSelectQuestionAutomationOption& EvaluationFormSingleSelectQuestionAutomationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleCategory"))
  {
    m_ruleCategory = jsonValue.GetObject("RuleCategory");

    m_ruleCategoryHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationFormSingleSelectQuestionAutomationOption::Jsonize() const
{
  JsonValue payload;

  if(m_ruleCategoryHasBeenSet)
  {
   payload.WithObject("RuleCategory", m_ruleCategory.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
