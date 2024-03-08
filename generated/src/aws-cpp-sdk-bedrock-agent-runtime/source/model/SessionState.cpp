/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/SessionState.h>
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

SessionState::SessionState() : 
    m_promptSessionAttributesHasBeenSet(false),
    m_sessionAttributesHasBeenSet(false)
{
}

SessionState::SessionState(JsonView jsonValue) : 
    m_promptSessionAttributesHasBeenSet(false),
    m_sessionAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

SessionState& SessionState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("promptSessionAttributes"))
  {
    Aws::Map<Aws::String, JsonView> promptSessionAttributesJsonMap = jsonValue.GetObject("promptSessionAttributes").GetAllObjects();
    for(auto& promptSessionAttributesItem : promptSessionAttributesJsonMap)
    {
      m_promptSessionAttributes[promptSessionAttributesItem.first] = promptSessionAttributesItem.second.AsString();
    }
    m_promptSessionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionAttributes"))
  {
    Aws::Map<Aws::String, JsonView> sessionAttributesJsonMap = jsonValue.GetObject("sessionAttributes").GetAllObjects();
    for(auto& sessionAttributesItem : sessionAttributesJsonMap)
    {
      m_sessionAttributes[sessionAttributesItem.first] = sessionAttributesItem.second.AsString();
    }
    m_sessionAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionState::Jsonize() const
{
  JsonValue payload;

  if(m_promptSessionAttributesHasBeenSet)
  {
   JsonValue promptSessionAttributesJsonMap;
   for(auto& promptSessionAttributesItem : m_promptSessionAttributes)
   {
     promptSessionAttributesJsonMap.WithString(promptSessionAttributesItem.first, promptSessionAttributesItem.second);
   }
   payload.WithObject("promptSessionAttributes", std::move(promptSessionAttributesJsonMap));

  }

  if(m_sessionAttributesHasBeenSet)
  {
   JsonValue sessionAttributesJsonMap;
   for(auto& sessionAttributesItem : m_sessionAttributes)
   {
     sessionAttributesJsonMap.WithString(sessionAttributesItem.first, sessionAttributesItem.second);
   }
   payload.WithObject("sessionAttributes", std::move(sessionAttributesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
