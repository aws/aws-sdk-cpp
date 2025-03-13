/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FunctionInvocationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

FunctionInvocationInput::FunctionInvocationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

FunctionInvocationInput& FunctionInvocationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionGroup"))
  {
    m_actionGroup = jsonValue.GetString("actionGroup");
    m_actionGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionInvocationType"))
  {
    m_actionInvocationType = ActionInvocationTypeMapper::GetActionInvocationTypeForName(jsonValue.GetString("actionInvocationType"));
    m_actionInvocationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");
    m_agentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaboratorName"))
  {
    m_collaboratorName = jsonValue.GetString("collaboratorName");
    m_collaboratorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("function"))
  {
    m_function = jsonValue.GetString("function");
    m_functionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }
  return *this;
}

JsonValue FunctionInvocationInput::Jsonize() const
{
  JsonValue payload;

  if(m_actionGroupHasBeenSet)
  {
   payload.WithString("actionGroup", m_actionGroup);

  }

  if(m_actionInvocationTypeHasBeenSet)
  {
   payload.WithString("actionInvocationType", ActionInvocationTypeMapper::GetNameForActionInvocationType(m_actionInvocationType));
  }

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_collaboratorNameHasBeenSet)
  {
   payload.WithString("collaboratorName", m_collaboratorName);

  }

  if(m_functionHasBeenSet)
  {
   payload.WithString("function", m_function);

  }

  if(m_parametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("parameters", std::move(parametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
