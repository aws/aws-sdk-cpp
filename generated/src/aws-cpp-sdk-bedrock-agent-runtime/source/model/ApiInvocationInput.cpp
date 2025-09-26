/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ApiInvocationInput.h>
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

ApiInvocationInput::ApiInvocationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

ApiInvocationInput& ApiInvocationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionGroup"))
  {
    m_actionGroup = jsonValue.GetString("actionGroup");
    m_actionGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("httpMethod"))
  {
    m_httpMethod = jsonValue.GetString("httpMethod");
    m_httpMethodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("apiPath"))
  {
    m_apiPath = jsonValue.GetString("apiPath");
    m_apiPathHasBeenSet = true;
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
  if(jsonValue.ValueExists("requestBody"))
  {
    m_requestBody = jsonValue.GetObject("requestBody");
    m_requestBodyHasBeenSet = true;
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
  return *this;
}

JsonValue ApiInvocationInput::Jsonize() const
{
  JsonValue payload;

  if(m_actionGroupHasBeenSet)
  {
   payload.WithString("actionGroup", m_actionGroup);

  }

  if(m_httpMethodHasBeenSet)
  {
   payload.WithString("httpMethod", m_httpMethod);

  }

  if(m_apiPathHasBeenSet)
  {
   payload.WithString("apiPath", m_apiPath);

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

  if(m_requestBodyHasBeenSet)
  {
   payload.WithObject("requestBody", m_requestBody.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
