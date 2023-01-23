/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/ConfigurationEvent.h>
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

ConfigurationEvent::ConfigurationEvent() : 
    m_requestAttributesHasBeenSet(false),
    m_responseContentTypeHasBeenSet(false),
    m_sessionStateHasBeenSet(false),
    m_welcomeMessagesHasBeenSet(false),
    m_disablePlayback(false),
    m_disablePlaybackHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_clientTimestampMillis(0),
    m_clientTimestampMillisHasBeenSet(false)
{
}

ConfigurationEvent::ConfigurationEvent(JsonView jsonValue) : 
    m_requestAttributesHasBeenSet(false),
    m_responseContentTypeHasBeenSet(false),
    m_sessionStateHasBeenSet(false),
    m_welcomeMessagesHasBeenSet(false),
    m_disablePlayback(false),
    m_disablePlaybackHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_clientTimestampMillis(0),
    m_clientTimestampMillisHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationEvent& ConfigurationEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("requestAttributes"))
  {
    Aws::Map<Aws::String, JsonView> requestAttributesJsonMap = jsonValue.GetObject("requestAttributes").GetAllObjects();
    for(auto& requestAttributesItem : requestAttributesJsonMap)
    {
      m_requestAttributes[requestAttributesItem.first] = requestAttributesItem.second.AsString();
    }
    m_requestAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseContentType"))
  {
    m_responseContentType = jsonValue.GetString("responseContentType");

    m_responseContentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionState"))
  {
    m_sessionState = jsonValue.GetObject("sessionState");

    m_sessionStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("welcomeMessages"))
  {
    Aws::Utils::Array<JsonView> welcomeMessagesJsonList = jsonValue.GetArray("welcomeMessages");
    for(unsigned welcomeMessagesIndex = 0; welcomeMessagesIndex < welcomeMessagesJsonList.GetLength(); ++welcomeMessagesIndex)
    {
      m_welcomeMessages.push_back(welcomeMessagesJsonList[welcomeMessagesIndex].AsObject());
    }
    m_welcomeMessagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("disablePlayback"))
  {
    m_disablePlayback = jsonValue.GetBool("disablePlayback");

    m_disablePlaybackHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientTimestampMillis"))
  {
    m_clientTimestampMillis = jsonValue.GetInt64("clientTimestampMillis");

    m_clientTimestampMillisHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationEvent::Jsonize() const
{
  JsonValue payload;

  if(m_requestAttributesHasBeenSet)
  {
   JsonValue requestAttributesJsonMap;
   for(auto& requestAttributesItem : m_requestAttributes)
   {
     requestAttributesJsonMap.WithString(requestAttributesItem.first, requestAttributesItem.second);
   }
   payload.WithObject("requestAttributes", std::move(requestAttributesJsonMap));

  }

  if(m_responseContentTypeHasBeenSet)
  {
   payload.WithString("responseContentType", m_responseContentType);

  }

  if(m_sessionStateHasBeenSet)
  {
   payload.WithObject("sessionState", m_sessionState.Jsonize());

  }

  if(m_welcomeMessagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> welcomeMessagesJsonList(m_welcomeMessages.size());
   for(unsigned welcomeMessagesIndex = 0; welcomeMessagesIndex < welcomeMessagesJsonList.GetLength(); ++welcomeMessagesIndex)
   {
     welcomeMessagesJsonList[welcomeMessagesIndex].AsObject(m_welcomeMessages[welcomeMessagesIndex].Jsonize());
   }
   payload.WithArray("welcomeMessages", std::move(welcomeMessagesJsonList));

  }

  if(m_disablePlaybackHasBeenSet)
  {
   payload.WithBool("disablePlayback", m_disablePlayback);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_clientTimestampMillisHasBeenSet)
  {
   payload.WithInt64("clientTimestampMillis", m_clientTimestampMillis);

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
