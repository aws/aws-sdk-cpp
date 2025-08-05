/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningValidFinding.h>
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

GuardrailAutomatedReasoningValidFinding::GuardrailAutomatedReasoningValidFinding(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailAutomatedReasoningValidFinding& GuardrailAutomatedReasoningValidFinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("translation"))
  {
    m_translation = jsonValue.GetObject("translation");
    m_translationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("claimsTrueScenario"))
  {
    m_claimsTrueScenario = jsonValue.GetObject("claimsTrueScenario");
    m_claimsTrueScenarioHasBeenSet = true;
  }
  if(jsonValue.ValueExists("supportingRules"))
  {
    Aws::Utils::Array<JsonView> supportingRulesJsonList = jsonValue.GetArray("supportingRules");
    for(unsigned supportingRulesIndex = 0; supportingRulesIndex < supportingRulesJsonList.GetLength(); ++supportingRulesIndex)
    {
      m_supportingRules.push_back(supportingRulesJsonList[supportingRulesIndex].AsObject());
    }
    m_supportingRulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logicWarning"))
  {
    m_logicWarning = jsonValue.GetObject("logicWarning");
    m_logicWarningHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailAutomatedReasoningValidFinding::Jsonize() const
{
  JsonValue payload;

  if(m_translationHasBeenSet)
  {
   payload.WithObject("translation", m_translation.Jsonize());

  }

  if(m_claimsTrueScenarioHasBeenSet)
  {
   payload.WithObject("claimsTrueScenario", m_claimsTrueScenario.Jsonize());

  }

  if(m_supportingRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportingRulesJsonList(m_supportingRules.size());
   for(unsigned supportingRulesIndex = 0; supportingRulesIndex < supportingRulesJsonList.GetLength(); ++supportingRulesIndex)
   {
     supportingRulesJsonList[supportingRulesIndex].AsObject(m_supportingRules[supportingRulesIndex].Jsonize());
   }
   payload.WithArray("supportingRules", std::move(supportingRulesJsonList));

  }

  if(m_logicWarningHasBeenSet)
  {
   payload.WithObject("logicWarning", m_logicWarning.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
