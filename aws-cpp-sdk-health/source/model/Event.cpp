/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/health/model/Event.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace Model
{

Event::Event() : 
    m_arnHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_eventTypeCodeHasBeenSet(false),
    m_eventTypeCategory(EventTypeCategory::NOT_SET),
    m_eventTypeCategoryHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_statusCode(EventStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false)
{
}

Event::Event(const JsonValue& jsonValue) : 
    m_arnHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_eventTypeCodeHasBeenSet(false),
    m_eventTypeCategory(EventTypeCategory::NOT_SET),
    m_eventTypeCategoryHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_statusCode(EventStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false)
{
  *this = jsonValue;
}

Event& Event::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("service"))
  {
    m_service = jsonValue.GetString("service");

    m_serviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTypeCode"))
  {
    m_eventTypeCode = jsonValue.GetString("eventTypeCode");

    m_eventTypeCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTypeCategory"))
  {
    m_eventTypeCategory = EventTypeCategoryMapper::GetEventTypeCategoryForName(jsonValue.GetString("eventTypeCategory"));

    m_eventTypeCategoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = EventStatusCodeMapper::GetEventStatusCodeForName(jsonValue.GetString("statusCode"));

    m_statusCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue Event::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  if(m_eventTypeCodeHasBeenSet)
  {
   payload.WithString("eventTypeCode", m_eventTypeCode);

  }

  if(m_eventTypeCategoryHasBeenSet)
  {
   payload.WithString("eventTypeCategory", EventTypeCategoryMapper::GetNameForEventTypeCategory(m_eventTypeCategory));
  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", EventStatusCodeMapper::GetNameForEventStatusCode(m_statusCode));
  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws