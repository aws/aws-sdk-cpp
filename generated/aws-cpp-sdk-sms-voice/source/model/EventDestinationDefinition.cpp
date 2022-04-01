﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/model/EventDestinationDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoice
{
namespace Model
{

EventDestinationDefinition::EventDestinationDefinition() : 
    m_cloudWatchLogsDestinationHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_kinesisFirehoseDestinationHasBeenSet(false),
    m_matchingEventTypesHasBeenSet(false),
    m_snsDestinationHasBeenSet(false)
{
}

EventDestinationDefinition::EventDestinationDefinition(JsonView jsonValue) : 
    m_cloudWatchLogsDestinationHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_kinesisFirehoseDestinationHasBeenSet(false),
    m_matchingEventTypesHasBeenSet(false),
    m_snsDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

EventDestinationDefinition& EventDestinationDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLogsDestination"))
  {
    m_cloudWatchLogsDestination = jsonValue.GetObject("CloudWatchLogsDestination");

    m_cloudWatchLogsDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisFirehoseDestination"))
  {
    m_kinesisFirehoseDestination = jsonValue.GetObject("KinesisFirehoseDestination");

    m_kinesisFirehoseDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchingEventTypes"))
  {
    Array<JsonView> matchingEventTypesJsonList = jsonValue.GetArray("MatchingEventTypes");
    for(unsigned matchingEventTypesIndex = 0; matchingEventTypesIndex < matchingEventTypesJsonList.GetLength(); ++matchingEventTypesIndex)
    {
      m_matchingEventTypes.push_back(EventTypeMapper::GetEventTypeForName(matchingEventTypesJsonList[matchingEventTypesIndex].AsString()));
    }
    m_matchingEventTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsDestination"))
  {
    m_snsDestination = jsonValue.GetObject("SnsDestination");

    m_snsDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue EventDestinationDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsDestinationHasBeenSet)
  {
   payload.WithObject("CloudWatchLogsDestination", m_cloudWatchLogsDestination.Jsonize());

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_kinesisFirehoseDestinationHasBeenSet)
  {
   payload.WithObject("KinesisFirehoseDestination", m_kinesisFirehoseDestination.Jsonize());

  }

  if(m_matchingEventTypesHasBeenSet)
  {
   Array<JsonValue> matchingEventTypesJsonList(m_matchingEventTypes.size());
   for(unsigned matchingEventTypesIndex = 0; matchingEventTypesIndex < matchingEventTypesJsonList.GetLength(); ++matchingEventTypesIndex)
   {
     matchingEventTypesJsonList[matchingEventTypesIndex].AsString(EventTypeMapper::GetNameForEventType(m_matchingEventTypes[matchingEventTypesIndex]));
   }
   payload.WithArray("MatchingEventTypes", std::move(matchingEventTypesJsonList));

  }

  if(m_snsDestinationHasBeenSet)
  {
   payload.WithObject("SnsDestination", m_snsDestination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
