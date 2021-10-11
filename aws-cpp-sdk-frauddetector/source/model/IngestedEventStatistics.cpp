/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/IngestedEventStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

IngestedEventStatistics::IngestedEventStatistics() : 
    m_numberOfEvents(0),
    m_numberOfEventsHasBeenSet(false),
    m_eventDataSizeInBytes(0),
    m_eventDataSizeInBytesHasBeenSet(false),
    m_leastRecentEventHasBeenSet(false),
    m_mostRecentEventHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

IngestedEventStatistics::IngestedEventStatistics(JsonView jsonValue) : 
    m_numberOfEvents(0),
    m_numberOfEventsHasBeenSet(false),
    m_eventDataSizeInBytes(0),
    m_eventDataSizeInBytesHasBeenSet(false),
    m_leastRecentEventHasBeenSet(false),
    m_mostRecentEventHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

IngestedEventStatistics& IngestedEventStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("numberOfEvents"))
  {
    m_numberOfEvents = jsonValue.GetInt64("numberOfEvents");

    m_numberOfEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventDataSizeInBytes"))
  {
    m_eventDataSizeInBytes = jsonValue.GetInt64("eventDataSizeInBytes");

    m_eventDataSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("leastRecentEvent"))
  {
    m_leastRecentEvent = jsonValue.GetString("leastRecentEvent");

    m_leastRecentEventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mostRecentEvent"))
  {
    m_mostRecentEvent = jsonValue.GetString("mostRecentEvent");

    m_mostRecentEventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestedEventStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfEventsHasBeenSet)
  {
   payload.WithInt64("numberOfEvents", m_numberOfEvents);

  }

  if(m_eventDataSizeInBytesHasBeenSet)
  {
   payload.WithInt64("eventDataSizeInBytes", m_eventDataSizeInBytes);

  }

  if(m_leastRecentEventHasBeenSet)
  {
   payload.WithString("leastRecentEvent", m_leastRecentEvent);

  }

  if(m_mostRecentEventHasBeenSet)
  {
   payload.WithString("mostRecentEvent", m_mostRecentEvent);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithString("lastUpdatedTime", m_lastUpdatedTime);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
