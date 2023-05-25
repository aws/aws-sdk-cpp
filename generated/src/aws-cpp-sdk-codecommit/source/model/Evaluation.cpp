/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/Evaluation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

Evaluation::Evaluation() : 
    m_approved(false),
    m_approvedHasBeenSet(false),
    m_overridden(false),
    m_overriddenHasBeenSet(false),
    m_approvalRulesSatisfiedHasBeenSet(false),
    m_approvalRulesNotSatisfiedHasBeenSet(false)
{
}

Evaluation::Evaluation(JsonView jsonValue) : 
    m_approved(false),
    m_approvedHasBeenSet(false),
    m_overridden(false),
    m_overriddenHasBeenSet(false),
    m_approvalRulesSatisfiedHasBeenSet(false),
    m_approvalRulesNotSatisfiedHasBeenSet(false)
{
  *this = jsonValue;
}

Evaluation& Evaluation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("approved"))
  {
    m_approved = jsonValue.GetBool("approved");

    m_approvedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("overridden"))
  {
    m_overridden = jsonValue.GetBool("overridden");

    m_overriddenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalRulesSatisfied"))
  {
    Aws::Utils::Array<JsonView> approvalRulesSatisfiedJsonList = jsonValue.GetArray("approvalRulesSatisfied");
    for(unsigned approvalRulesSatisfiedIndex = 0; approvalRulesSatisfiedIndex < approvalRulesSatisfiedJsonList.GetLength(); ++approvalRulesSatisfiedIndex)
    {
      m_approvalRulesSatisfied.push_back(approvalRulesSatisfiedJsonList[approvalRulesSatisfiedIndex].AsString());
    }
    m_approvalRulesSatisfiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalRulesNotSatisfied"))
  {
    Aws::Utils::Array<JsonView> approvalRulesNotSatisfiedJsonList = jsonValue.GetArray("approvalRulesNotSatisfied");
    for(unsigned approvalRulesNotSatisfiedIndex = 0; approvalRulesNotSatisfiedIndex < approvalRulesNotSatisfiedJsonList.GetLength(); ++approvalRulesNotSatisfiedIndex)
    {
      m_approvalRulesNotSatisfied.push_back(approvalRulesNotSatisfiedJsonList[approvalRulesNotSatisfiedIndex].AsString());
    }
    m_approvalRulesNotSatisfiedHasBeenSet = true;
  }

  return *this;
}

JsonValue Evaluation::Jsonize() const
{
  JsonValue payload;

  if(m_approvedHasBeenSet)
  {
   payload.WithBool("approved", m_approved);

  }

  if(m_overriddenHasBeenSet)
  {
   payload.WithBool("overridden", m_overridden);

  }

  if(m_approvalRulesSatisfiedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> approvalRulesSatisfiedJsonList(m_approvalRulesSatisfied.size());
   for(unsigned approvalRulesSatisfiedIndex = 0; approvalRulesSatisfiedIndex < approvalRulesSatisfiedJsonList.GetLength(); ++approvalRulesSatisfiedIndex)
   {
     approvalRulesSatisfiedJsonList[approvalRulesSatisfiedIndex].AsString(m_approvalRulesSatisfied[approvalRulesSatisfiedIndex]);
   }
   payload.WithArray("approvalRulesSatisfied", std::move(approvalRulesSatisfiedJsonList));

  }

  if(m_approvalRulesNotSatisfiedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> approvalRulesNotSatisfiedJsonList(m_approvalRulesNotSatisfied.size());
   for(unsigned approvalRulesNotSatisfiedIndex = 0; approvalRulesNotSatisfiedIndex < approvalRulesNotSatisfiedJsonList.GetLength(); ++approvalRulesNotSatisfiedIndex)
   {
     approvalRulesNotSatisfiedJsonList[approvalRulesNotSatisfiedIndex].AsString(m_approvalRulesNotSatisfied[approvalRulesNotSatisfiedIndex]);
   }
   payload.WithArray("approvalRulesNotSatisfied", std::move(approvalRulesNotSatisfiedJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
