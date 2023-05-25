/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/Event.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

Event::Event() : 
    m_eventIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_eventCode(EventCode::NOT_SET),
    m_eventCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_preSignedLogUrlHasBeenSet(false)
{
}

Event::Event(JsonView jsonValue) : 
    m_eventIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_eventCode(EventCode::NOT_SET),
    m_eventCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_preSignedLogUrlHasBeenSet(false)
{
  *this = jsonValue;
}

Event& Event::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventId"))
  {
    m_eventId = jsonValue.GetString("EventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventCode"))
  {
    m_eventCode = EventCodeMapper::GetEventCodeForName(jsonValue.GetString("EventCode"));

    m_eventCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventTime"))
  {
    m_eventTime = jsonValue.GetDouble("EventTime");

    m_eventTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreSignedLogUrl"))
  {
    m_preSignedLogUrl = jsonValue.GetString("PreSignedLogUrl");

    m_preSignedLogUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue Event::Jsonize() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("EventId", m_eventId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_eventCodeHasBeenSet)
  {
   payload.WithString("EventCode", EventCodeMapper::GetNameForEventCode(m_eventCode));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithDouble("EventTime", m_eventTime.SecondsWithMSPrecision());
  }

  if(m_preSignedLogUrlHasBeenSet)
  {
   payload.WithString("PreSignedLogUrl", m_preSignedLogUrl);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
