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
#include <aws/cloudtrail/model/Event.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

Event::Event() : 
    m_eventIdHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_cloudTrailEventHasBeenSet(false)
{
}

Event::Event(const JsonValue& jsonValue) : 
    m_eventIdHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_cloudTrailEventHasBeenSet(false)
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

  if(jsonValue.ValueExists("EventName"))
  {
    m_eventName = jsonValue.GetString("EventName");

    m_eventNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventTime"))
  {
    m_eventTime = jsonValue.GetDouble("EventTime");

    m_eventTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resources"))
  {
    Array<JsonValue> resourcesJsonList = jsonValue.GetArray("Resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudTrailEvent"))
  {
    m_cloudTrailEvent = jsonValue.GetString("CloudTrailEvent");

    m_cloudTrailEventHasBeenSet = true;
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

  if(m_eventNameHasBeenSet)
  {
   payload.WithString("EventName", m_eventName);

  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithDouble("EventTime", m_eventTime.SecondsWithMSPrecision());
  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_resourcesHasBeenSet)
  {
   Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("Resources", std::move(resourcesJsonList));

  }

  if(m_cloudTrailEventHasBeenSet)
  {
   payload.WithString("CloudTrailEvent", m_cloudTrailEvent);

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws