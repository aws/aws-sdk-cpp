/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FunctionResult.h>
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

FunctionResult::FunctionResult(JsonView jsonValue)
{
  *this = jsonValue;
}

FunctionResult& FunctionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionGroup"))
  {
    m_actionGroup = jsonValue.GetString("actionGroup");
    m_actionGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("confirmationState"))
  {
    m_confirmationState = ConfirmationStateMapper::GetConfirmationStateForName(jsonValue.GetString("confirmationState"));
    m_confirmationStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("function"))
  {
    m_function = jsonValue.GetString("function");
    m_functionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("responseBody"))
  {
    Aws::Map<Aws::String, JsonView> responseBodyJsonMap = jsonValue.GetObject("responseBody").GetAllObjects();
    for(auto& responseBodyItem : responseBodyJsonMap)
    {
      m_responseBody[responseBodyItem.first] = responseBodyItem.second.AsObject();
    }
    m_responseBodyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("responseState"))
  {
    m_responseState = ResponseStateMapper::GetResponseStateForName(jsonValue.GetString("responseState"));
    m_responseStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");
    m_agentIdHasBeenSet = true;
  }
  return *this;
}

JsonValue FunctionResult::Jsonize() const
{
  JsonValue payload;

  if(m_actionGroupHasBeenSet)
  {
   payload.WithString("actionGroup", m_actionGroup);

  }

  if(m_confirmationStateHasBeenSet)
  {
   payload.WithString("confirmationState", ConfirmationStateMapper::GetNameForConfirmationState(m_confirmationState));
  }

  if(m_functionHasBeenSet)
  {
   payload.WithString("function", m_function);

  }

  if(m_responseBodyHasBeenSet)
  {
   JsonValue responseBodyJsonMap;
   for(auto& responseBodyItem : m_responseBody)
   {
     responseBodyJsonMap.WithObject(responseBodyItem.first, responseBodyItem.second.Jsonize());
   }
   payload.WithObject("responseBody", std::move(responseBodyJsonMap));

  }

  if(m_responseStateHasBeenSet)
  {
   payload.WithString("responseState", ResponseStateMapper::GetNameForResponseState(m_responseState));
  }

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
