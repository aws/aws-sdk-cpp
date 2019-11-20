/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> approvalRulesSatisfiedJsonList = jsonValue.GetArray("approvalRulesSatisfied");
    for(unsigned approvalRulesSatisfiedIndex = 0; approvalRulesSatisfiedIndex < approvalRulesSatisfiedJsonList.GetLength(); ++approvalRulesSatisfiedIndex)
    {
      m_approvalRulesSatisfied.push_back(approvalRulesSatisfiedJsonList[approvalRulesSatisfiedIndex].AsString());
    }
    m_approvalRulesSatisfiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalRulesNotSatisfied"))
  {
    Array<JsonView> approvalRulesNotSatisfiedJsonList = jsonValue.GetArray("approvalRulesNotSatisfied");
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
   Array<JsonValue> approvalRulesSatisfiedJsonList(m_approvalRulesSatisfied.size());
   for(unsigned approvalRulesSatisfiedIndex = 0; approvalRulesSatisfiedIndex < approvalRulesSatisfiedJsonList.GetLength(); ++approvalRulesSatisfiedIndex)
   {
     approvalRulesSatisfiedJsonList[approvalRulesSatisfiedIndex].AsString(m_approvalRulesSatisfied[approvalRulesSatisfiedIndex]);
   }
   payload.WithArray("approvalRulesSatisfied", std::move(approvalRulesSatisfiedJsonList));

  }

  if(m_approvalRulesNotSatisfiedHasBeenSet)
  {
   Array<JsonValue> approvalRulesNotSatisfiedJsonList(m_approvalRulesNotSatisfied.size());
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
