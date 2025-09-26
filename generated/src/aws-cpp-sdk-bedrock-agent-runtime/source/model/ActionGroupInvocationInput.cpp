/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ActionGroupInvocationInput.h>
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

ActionGroupInvocationInput::ActionGroupInvocationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

ActionGroupInvocationInput& ActionGroupInvocationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionGroupName"))
  {
    m_actionGroupName = jsonValue.GetString("actionGroupName");
    m_actionGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("verb"))
  {
    m_verb = jsonValue.GetString("verb");
    m_verbHasBeenSet = true;
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
  if(jsonValue.ValueExists("function"))
  {
    m_function = jsonValue.GetString("function");
    m_functionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionType"))
  {
    m_executionType = ExecutionTypeMapper::GetExecutionTypeForName(jsonValue.GetString("executionType"));
    m_executionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("invocationId"))
  {
    m_invocationId = jsonValue.GetString("invocationId");
    m_invocationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionGroupInvocationInput::Jsonize() const
{
  JsonValue payload;

  if(m_actionGroupNameHasBeenSet)
  {
   payload.WithString("actionGroupName", m_actionGroupName);

  }

  if(m_verbHasBeenSet)
  {
   payload.WithString("verb", m_verb);

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

  if(m_functionHasBeenSet)
  {
   payload.WithString("function", m_function);

  }

  if(m_executionTypeHasBeenSet)
  {
   payload.WithString("executionType", ExecutionTypeMapper::GetNameForExecutionType(m_executionType));
  }

  if(m_invocationIdHasBeenSet)
  {
   payload.WithString("invocationId", m_invocationId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
