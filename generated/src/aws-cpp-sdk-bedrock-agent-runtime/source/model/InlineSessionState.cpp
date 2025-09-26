/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InlineSessionState.h>
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

InlineSessionState::InlineSessionState(JsonView jsonValue)
{
  *this = jsonValue;
}

InlineSessionState& InlineSessionState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionAttributes"))
  {
    Aws::Map<Aws::String, JsonView> sessionAttributesJsonMap = jsonValue.GetObject("sessionAttributes").GetAllObjects();
    for(auto& sessionAttributesItem : sessionAttributesJsonMap)
    {
      m_sessionAttributes[sessionAttributesItem.first] = sessionAttributesItem.second.AsString();
    }
    m_sessionAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("promptSessionAttributes"))
  {
    Aws::Map<Aws::String, JsonView> promptSessionAttributesJsonMap = jsonValue.GetObject("promptSessionAttributes").GetAllObjects();
    for(auto& promptSessionAttributesItem : promptSessionAttributesJsonMap)
    {
      m_promptSessionAttributes[promptSessionAttributesItem.first] = promptSessionAttributesItem.second.AsString();
    }
    m_promptSessionAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("returnControlInvocationResults"))
  {
    Aws::Utils::Array<JsonView> returnControlInvocationResultsJsonList = jsonValue.GetArray("returnControlInvocationResults");
    for(unsigned returnControlInvocationResultsIndex = 0; returnControlInvocationResultsIndex < returnControlInvocationResultsJsonList.GetLength(); ++returnControlInvocationResultsIndex)
    {
      m_returnControlInvocationResults.push_back(returnControlInvocationResultsJsonList[returnControlInvocationResultsIndex].AsObject());
    }
    m_returnControlInvocationResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("invocationId"))
  {
    m_invocationId = jsonValue.GetString("invocationId");
    m_invocationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("files"))
  {
    Aws::Utils::Array<JsonView> filesJsonList = jsonValue.GetArray("files");
    for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
    {
      m_files.push_back(filesJsonList[filesIndex].AsObject());
    }
    m_filesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conversationHistory"))
  {
    m_conversationHistory = jsonValue.GetObject("conversationHistory");
    m_conversationHistoryHasBeenSet = true;
  }
  return *this;
}

JsonValue InlineSessionState::Jsonize() const
{
  JsonValue payload;

  if(m_sessionAttributesHasBeenSet)
  {
   JsonValue sessionAttributesJsonMap;
   for(auto& sessionAttributesItem : m_sessionAttributes)
   {
     sessionAttributesJsonMap.WithString(sessionAttributesItem.first, sessionAttributesItem.second);
   }
   payload.WithObject("sessionAttributes", std::move(sessionAttributesJsonMap));

  }

  if(m_promptSessionAttributesHasBeenSet)
  {
   JsonValue promptSessionAttributesJsonMap;
   for(auto& promptSessionAttributesItem : m_promptSessionAttributes)
   {
     promptSessionAttributesJsonMap.WithString(promptSessionAttributesItem.first, promptSessionAttributesItem.second);
   }
   payload.WithObject("promptSessionAttributes", std::move(promptSessionAttributesJsonMap));

  }

  if(m_returnControlInvocationResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> returnControlInvocationResultsJsonList(m_returnControlInvocationResults.size());
   for(unsigned returnControlInvocationResultsIndex = 0; returnControlInvocationResultsIndex < returnControlInvocationResultsJsonList.GetLength(); ++returnControlInvocationResultsIndex)
   {
     returnControlInvocationResultsJsonList[returnControlInvocationResultsIndex].AsObject(m_returnControlInvocationResults[returnControlInvocationResultsIndex].Jsonize());
   }
   payload.WithArray("returnControlInvocationResults", std::move(returnControlInvocationResultsJsonList));

  }

  if(m_invocationIdHasBeenSet)
  {
   payload.WithString("invocationId", m_invocationId);

  }

  if(m_filesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filesJsonList(m_files.size());
   for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
   {
     filesJsonList[filesIndex].AsObject(m_files[filesIndex].Jsonize());
   }
   payload.WithArray("files", std::move(filesJsonList));

  }

  if(m_conversationHistoryHasBeenSet)
  {
   payload.WithObject("conversationHistory", m_conversationHistory.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
