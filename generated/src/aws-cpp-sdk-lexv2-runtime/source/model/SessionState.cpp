/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/SessionState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

SessionState::SessionState() : 
    m_dialogActionHasBeenSet(false),
    m_intentHasBeenSet(false),
    m_activeContextsHasBeenSet(false),
    m_sessionAttributesHasBeenSet(false),
    m_originatingRequestIdHasBeenSet(false),
    m_runtimeHintsHasBeenSet(false)
{
}

SessionState::SessionState(JsonView jsonValue) : 
    m_dialogActionHasBeenSet(false),
    m_intentHasBeenSet(false),
    m_activeContextsHasBeenSet(false),
    m_sessionAttributesHasBeenSet(false),
    m_originatingRequestIdHasBeenSet(false),
    m_runtimeHintsHasBeenSet(false)
{
  *this = jsonValue;
}

SessionState& SessionState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dialogAction"))
  {
    m_dialogAction = jsonValue.GetObject("dialogAction");

    m_dialogActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intent"))
  {
    m_intent = jsonValue.GetObject("intent");

    m_intentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeContexts"))
  {
    Aws::Utils::Array<JsonView> activeContextsJsonList = jsonValue.GetArray("activeContexts");
    for(unsigned activeContextsIndex = 0; activeContextsIndex < activeContextsJsonList.GetLength(); ++activeContextsIndex)
    {
      m_activeContexts.push_back(activeContextsJsonList[activeContextsIndex].AsObject());
    }
    m_activeContextsHasBeenSet = true;
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

  if(jsonValue.ValueExists("originatingRequestId"))
  {
    m_originatingRequestId = jsonValue.GetString("originatingRequestId");

    m_originatingRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtimeHints"))
  {
    m_runtimeHints = jsonValue.GetObject("runtimeHints");

    m_runtimeHintsHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionState::Jsonize() const
{
  JsonValue payload;

  if(m_dialogActionHasBeenSet)
  {
   payload.WithObject("dialogAction", m_dialogAction.Jsonize());

  }

  if(m_intentHasBeenSet)
  {
   payload.WithObject("intent", m_intent.Jsonize());

  }

  if(m_activeContextsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> activeContextsJsonList(m_activeContexts.size());
   for(unsigned activeContextsIndex = 0; activeContextsIndex < activeContextsJsonList.GetLength(); ++activeContextsIndex)
   {
     activeContextsJsonList[activeContextsIndex].AsObject(m_activeContexts[activeContextsIndex].Jsonize());
   }
   payload.WithArray("activeContexts", std::move(activeContextsJsonList));

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

  if(m_originatingRequestIdHasBeenSet)
  {
   payload.WithString("originatingRequestId", m_originatingRequestId);

  }

  if(m_runtimeHintsHasBeenSet)
  {
   payload.WithObject("runtimeHints", m_runtimeHints.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
