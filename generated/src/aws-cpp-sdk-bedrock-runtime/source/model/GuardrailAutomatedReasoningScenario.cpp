/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningScenario.h>
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

GuardrailAutomatedReasoningScenario::GuardrailAutomatedReasoningScenario(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailAutomatedReasoningScenario& GuardrailAutomatedReasoningScenario::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("statements"))
  {
    Aws::Utils::Array<JsonView> statementsJsonList = jsonValue.GetArray("statements");
    for(unsigned statementsIndex = 0; statementsIndex < statementsJsonList.GetLength(); ++statementsIndex)
    {
      m_statements.push_back(statementsJsonList[statementsIndex].AsObject());
    }
    m_statementsHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailAutomatedReasoningScenario::Jsonize() const
{
  JsonValue payload;

  if(m_statementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statementsJsonList(m_statements.size());
   for(unsigned statementsIndex = 0; statementsIndex < statementsJsonList.GetLength(); ++statementsIndex)
   {
     statementsJsonList[statementsIndex].AsObject(m_statements[statementsIndex].Jsonize());
   }
   payload.WithArray("statements", std::move(statementsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
