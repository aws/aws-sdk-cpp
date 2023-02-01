/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_readOnlyHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_cloudTrailEventHasBeenSet(false)
{
}

Event::Event(JsonView jsonValue) : 
    m_eventIdHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_cloudTrailEventHasBeenSet(false)
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

  if(jsonValue.ValueExists("EventName"))
  {
    m_eventName = jsonValue.GetString("EventName");

    m_eventNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadOnly"))
  {
    m_readOnly = jsonValue.GetString("ReadOnly");

    m_readOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("AccessKeyId");

    m_accessKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventTime"))
  {
    m_eventTime = jsonValue.GetDouble("EventTime");

    m_eventTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventSource"))
  {
    m_eventSource = jsonValue.GetString("EventSource");

    m_eventSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
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

  if(m_readOnlyHasBeenSet)
  {
   payload.WithString("ReadOnly", m_readOnly);

  }

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("AccessKeyId", m_accessKeyId);

  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithDouble("EventTime", m_eventTime.SecondsWithMSPrecision());
  }

  if(m_eventSourceHasBeenSet)
  {
   payload.WithString("EventSource", m_eventSource);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
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
