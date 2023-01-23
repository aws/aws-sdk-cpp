/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/IntentResultEvent.h>
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

IntentResultEvent::IntentResultEvent() : 
    m_inputMode(InputMode::NOT_SET),
    m_inputModeHasBeenSet(false),
    m_interpretationsHasBeenSet(false),
    m_sessionStateHasBeenSet(false),
    m_requestAttributesHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

IntentResultEvent::IntentResultEvent(JsonView jsonValue) : 
    m_inputMode(InputMode::NOT_SET),
    m_inputModeHasBeenSet(false),
    m_interpretationsHasBeenSet(false),
    m_sessionStateHasBeenSet(false),
    m_requestAttributesHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
  *this = jsonValue;
}

IntentResultEvent& IntentResultEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputMode"))
  {
    m_inputMode = InputModeMapper::GetInputModeForName(jsonValue.GetString("inputMode"));

    m_inputModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interpretations"))
  {
    Aws::Utils::Array<JsonView> interpretationsJsonList = jsonValue.GetArray("interpretations");
    for(unsigned interpretationsIndex = 0; interpretationsIndex < interpretationsJsonList.GetLength(); ++interpretationsIndex)
    {
      m_interpretations.push_back(interpretationsJsonList[interpretationsIndex].AsObject());
    }
    m_interpretationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionState"))
  {
    m_sessionState = jsonValue.GetObject("sessionState");

    m_sessionStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestAttributes"))
  {
    Aws::Map<Aws::String, JsonView> requestAttributesJsonMap = jsonValue.GetObject("requestAttributes").GetAllObjects();
    for(auto& requestAttributesItem : requestAttributesJsonMap)
    {
      m_requestAttributes[requestAttributesItem.first] = requestAttributesItem.second.AsString();
    }
    m_requestAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

    m_sessionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue IntentResultEvent::Jsonize() const
{
  JsonValue payload;

  if(m_inputModeHasBeenSet)
  {
   payload.WithString("inputMode", InputModeMapper::GetNameForInputMode(m_inputMode));
  }

  if(m_interpretationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> interpretationsJsonList(m_interpretations.size());
   for(unsigned interpretationsIndex = 0; interpretationsIndex < interpretationsJsonList.GetLength(); ++interpretationsIndex)
   {
     interpretationsJsonList[interpretationsIndex].AsObject(m_interpretations[interpretationsIndex].Jsonize());
   }
   payload.WithArray("interpretations", std::move(interpretationsJsonList));

  }

  if(m_sessionStateHasBeenSet)
  {
   payload.WithObject("sessionState", m_sessionState.Jsonize());

  }

  if(m_requestAttributesHasBeenSet)
  {
   JsonValue requestAttributesJsonMap;
   for(auto& requestAttributesItem : m_requestAttributes)
   {
     requestAttributesJsonMap.WithString(requestAttributesItem.first, requestAttributesItem.second);
   }
   payload.WithObject("requestAttributes", std::move(requestAttributesJsonMap));

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
