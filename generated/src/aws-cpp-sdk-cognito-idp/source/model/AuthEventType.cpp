/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AuthEventType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

AuthEventType::AuthEventType() : 
    m_eventIdHasBeenSet(false),
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_eventResponse(EventResponseType::NOT_SET),
    m_eventResponseHasBeenSet(false),
    m_eventRiskHasBeenSet(false),
    m_challengeResponsesHasBeenSet(false),
    m_eventContextDataHasBeenSet(false),
    m_eventFeedbackHasBeenSet(false)
{
}

AuthEventType::AuthEventType(JsonView jsonValue) : 
    m_eventIdHasBeenSet(false),
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_eventResponse(EventResponseType::NOT_SET),
    m_eventResponseHasBeenSet(false),
    m_eventRiskHasBeenSet(false),
    m_challengeResponsesHasBeenSet(false),
    m_eventContextDataHasBeenSet(false),
    m_eventFeedbackHasBeenSet(false)
{
  *this = jsonValue;
}

AuthEventType& AuthEventType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventId"))
  {
    m_eventId = jsonValue.GetString("EventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventType"))
  {
    m_eventType = EventTypeMapper::GetEventTypeForName(jsonValue.GetString("EventType"));

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventResponse"))
  {
    m_eventResponse = EventResponseTypeMapper::GetEventResponseTypeForName(jsonValue.GetString("EventResponse"));

    m_eventResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventRisk"))
  {
    m_eventRisk = jsonValue.GetObject("EventRisk");

    m_eventRiskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChallengeResponses"))
  {
    Aws::Utils::Array<JsonView> challengeResponsesJsonList = jsonValue.GetArray("ChallengeResponses");
    for(unsigned challengeResponsesIndex = 0; challengeResponsesIndex < challengeResponsesJsonList.GetLength(); ++challengeResponsesIndex)
    {
      m_challengeResponses.push_back(challengeResponsesJsonList[challengeResponsesIndex].AsObject());
    }
    m_challengeResponsesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventContextData"))
  {
    m_eventContextData = jsonValue.GetObject("EventContextData");

    m_eventContextDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventFeedback"))
  {
    m_eventFeedback = jsonValue.GetObject("EventFeedback");

    m_eventFeedbackHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthEventType::Jsonize() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("EventId", m_eventId);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("EventType", EventTypeMapper::GetNameForEventType(m_eventType));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_eventResponseHasBeenSet)
  {
   payload.WithString("EventResponse", EventResponseTypeMapper::GetNameForEventResponseType(m_eventResponse));
  }

  if(m_eventRiskHasBeenSet)
  {
   payload.WithObject("EventRisk", m_eventRisk.Jsonize());

  }

  if(m_challengeResponsesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> challengeResponsesJsonList(m_challengeResponses.size());
   for(unsigned challengeResponsesIndex = 0; challengeResponsesIndex < challengeResponsesJsonList.GetLength(); ++challengeResponsesIndex)
   {
     challengeResponsesJsonList[challengeResponsesIndex].AsObject(m_challengeResponses[challengeResponsesIndex].Jsonize());
   }
   payload.WithArray("ChallengeResponses", std::move(challengeResponsesJsonList));

  }

  if(m_eventContextDataHasBeenSet)
  {
   payload.WithObject("EventContextData", m_eventContextData.Jsonize());

  }

  if(m_eventFeedbackHasBeenSet)
  {
   payload.WithObject("EventFeedback", m_eventFeedback.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
