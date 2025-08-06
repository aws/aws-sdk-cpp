/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation::AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation& AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ruleIds"))
  {
    Aws::Utils::Array<JsonView> ruleIdsJsonList = jsonValue.GetArray("ruleIds");
    for(unsigned ruleIdsIndex = 0; ruleIdsIndex < ruleIdsJsonList.GetLength(); ++ruleIdsIndex)
    {
      m_ruleIds.push_back(ruleIdsJsonList[ruleIdsIndex].AsString());
    }
    m_ruleIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("feedback"))
  {
    m_feedback = jsonValue.GetString("feedback");
    m_feedbackHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation::Jsonize() const
{
  JsonValue payload;

  if(m_ruleIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleIdsJsonList(m_ruleIds.size());
   for(unsigned ruleIdsIndex = 0; ruleIdsIndex < ruleIdsJsonList.GetLength(); ++ruleIdsIndex)
   {
     ruleIdsJsonList[ruleIdsIndex].AsString(m_ruleIds[ruleIdsIndex]);
   }
   payload.WithArray("ruleIds", std::move(ruleIdsJsonList));

  }

  if(m_feedbackHasBeenSet)
  {
   payload.WithString("feedback", m_feedback);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
