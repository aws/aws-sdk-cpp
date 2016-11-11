/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_eventTimeHasBeenSet(false)
{
}

Event::Event(const JsonValue& jsonValue) : 
    m_eventIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_eventCode(EventCode::NOT_SET),
    m_eventCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eventTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Event& Event::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws