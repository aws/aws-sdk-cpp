/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningTranslationAmbiguousFinding.h>
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

GuardrailAutomatedReasoningTranslationAmbiguousFinding::GuardrailAutomatedReasoningTranslationAmbiguousFinding(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailAutomatedReasoningTranslationAmbiguousFinding& GuardrailAutomatedReasoningTranslationAmbiguousFinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("options"))
  {
    Aws::Utils::Array<JsonView> optionsJsonList = jsonValue.GetArray("options");
    for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
    {
      m_options.push_back(optionsJsonList[optionsIndex].AsObject());
    }
    m_optionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("differenceScenarios"))
  {
    Aws::Utils::Array<JsonView> differenceScenariosJsonList = jsonValue.GetArray("differenceScenarios");
    for(unsigned differenceScenariosIndex = 0; differenceScenariosIndex < differenceScenariosJsonList.GetLength(); ++differenceScenariosIndex)
    {
      m_differenceScenarios.push_back(differenceScenariosJsonList[differenceScenariosIndex].AsObject());
    }
    m_differenceScenariosHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailAutomatedReasoningTranslationAmbiguousFinding::Jsonize() const
{
  JsonValue payload;

  if(m_optionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
   for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
   {
     optionsJsonList[optionsIndex].AsObject(m_options[optionsIndex].Jsonize());
   }
   payload.WithArray("options", std::move(optionsJsonList));

  }

  if(m_differenceScenariosHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> differenceScenariosJsonList(m_differenceScenarios.size());
   for(unsigned differenceScenariosIndex = 0; differenceScenariosIndex < differenceScenariosJsonList.GetLength(); ++differenceScenariosIndex)
   {
     differenceScenariosJsonList[differenceScenariosIndex].AsObject(m_differenceScenarios[differenceScenariosIndex].Jsonize());
   }
   payload.WithArray("differenceScenarios", std::move(differenceScenariosJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
