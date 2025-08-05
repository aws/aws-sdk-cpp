/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningPolicyAssessment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

GuardrailAutomatedReasoningPolicyAssessment::GuardrailAutomatedReasoningPolicyAssessment(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailAutomatedReasoningPolicyAssessment& GuardrailAutomatedReasoningPolicyAssessment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("findings"))
  {
    Aws::Utils::Array<JsonView> findingsJsonList = jsonValue.GetArray("findings");
    for(unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex)
    {
      m_findings.push_back(findingsJsonList[findingsIndex].AsObject());
    }
    m_findingsHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailAutomatedReasoningPolicyAssessment::Jsonize() const
{
  JsonValue payload;

  if(m_findingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingsJsonList(m_findings.size());
   for(unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex)
   {
     findingsJsonList[findingsIndex].AsObject(m_findings[findingsIndex].Jsonize());
   }
   payload.WithArray("findings", std::move(findingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
