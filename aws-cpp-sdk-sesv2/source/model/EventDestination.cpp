/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/EventDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

EventDestination::EventDestination() : 
    m_nameHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_matchingEventTypesHasBeenSet(false),
    m_kinesisFirehoseDestinationHasBeenSet(false),
    m_cloudWatchDestinationHasBeenSet(false),
    m_snsDestinationHasBeenSet(false),
    m_pinpointDestinationHasBeenSet(false)
{
}

EventDestination::EventDestination(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_matchingEventTypesHasBeenSet(false),
    m_kinesisFirehoseDestinationHasBeenSet(false),
    m_cloudWatchDestinationHasBeenSet(false),
    m_snsDestinationHasBeenSet(false),
    m_pinpointDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

EventDestination& EventDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchingEventTypes"))
  {
    Aws::Utils::Array<JsonView> matchingEventTypesJsonList = jsonValue.GetArray("MatchingEventTypes");
    for(unsigned matchingEventTypesIndex = 0; matchingEventTypesIndex < matchingEventTypesJsonList.GetLength(); ++matchingEventTypesIndex)
    {
      m_matchingEventTypes.push_back(EventTypeMapper::GetEventTypeForName(matchingEventTypesJsonList[matchingEventTypesIndex].AsString()));
    }
    m_matchingEventTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisFirehoseDestination"))
  {
    m_kinesisFirehoseDestination = jsonValue.GetObject("KinesisFirehoseDestination");

    m_kinesisFirehoseDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchDestination"))
  {
    m_cloudWatchDestination = jsonValue.GetObject("CloudWatchDestination");

    m_cloudWatchDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsDestination"))
  {
    m_snsDestination = jsonValue.GetObject("SnsDestination");

    m_snsDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PinpointDestination"))
  {
    m_pinpointDestination = jsonValue.GetObject("PinpointDestination");

    m_pinpointDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue EventDestination::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_matchingEventTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchingEventTypesJsonList(m_matchingEventTypes.size());
   for(unsigned matchingEventTypesIndex = 0; matchingEventTypesIndex < matchingEventTypesJsonList.GetLength(); ++matchingEventTypesIndex)
   {
     matchingEventTypesJsonList[matchingEventTypesIndex].AsString(EventTypeMapper::GetNameForEventType(m_matchingEventTypes[matchingEventTypesIndex]));
   }
   payload.WithArray("MatchingEventTypes", std::move(matchingEventTypesJsonList));

  }

  if(m_kinesisFirehoseDestinationHasBeenSet)
  {
   payload.WithObject("KinesisFirehoseDestination", m_kinesisFirehoseDestination.Jsonize());

  }

  if(m_cloudWatchDestinationHasBeenSet)
  {
   payload.WithObject("CloudWatchDestination", m_cloudWatchDestination.Jsonize());

  }

  if(m_snsDestinationHasBeenSet)
  {
   payload.WithObject("SnsDestination", m_snsDestination.Jsonize());

  }

  if(m_pinpointDestinationHasBeenSet)
  {
   payload.WithObject("PinpointDestination", m_pinpointDestination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
