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
#include <aws/mturk-requester/model/NotificationSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

NotificationSpecification::NotificationSpecification() : 
    m_destinationHasBeenSet(false),
    m_transport(NotificationTransport::NOT_SET),
    m_transportHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_eventTypesHasBeenSet(false)
{
}

NotificationSpecification::NotificationSpecification(const JsonValue& jsonValue) : 
    m_destinationHasBeenSet(false),
    m_transport(NotificationTransport::NOT_SET),
    m_transportHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_eventTypesHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationSpecification& NotificationSpecification::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetString("Destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Transport"))
  {
    m_transport = NotificationTransportMapper::GetNotificationTransportForName(jsonValue.GetString("Transport"));

    m_transportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventTypes"))
  {
    Array<JsonValue> eventTypesJsonList = jsonValue.GetArray("EventTypes");
    for(unsigned eventTypesIndex = 0; eventTypesIndex < eventTypesJsonList.GetLength(); ++eventTypesIndex)
    {
      m_eventTypes.push_back(EventTypeMapper::GetEventTypeForName(eventTypesJsonList[eventTypesIndex].AsString()));
    }
    m_eventTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", m_destination);

  }

  if(m_transportHasBeenSet)
  {
   payload.WithString("Transport", NotificationTransportMapper::GetNameForNotificationTransport(m_transport));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_eventTypesHasBeenSet)
  {
   Array<JsonValue> eventTypesJsonList(m_eventTypes.size());
   for(unsigned eventTypesIndex = 0; eventTypesIndex < eventTypesJsonList.GetLength(); ++eventTypesIndex)
   {
     eventTypesJsonList[eventTypesIndex].AsString(EventTypeMapper::GetNameForEventType(m_eventTypes[eventTypesIndex]));
   }
   payload.WithArray("EventTypes", std::move(eventTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws