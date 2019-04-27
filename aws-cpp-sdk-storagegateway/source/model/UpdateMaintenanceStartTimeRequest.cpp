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

#include <aws/storagegateway/model/UpdateMaintenanceStartTimeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMaintenanceStartTimeRequest::UpdateMaintenanceStartTimeRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_hourOfDay(0),
    m_hourOfDayHasBeenSet(false),
    m_minuteOfHour(0),
    m_minuteOfHourHasBeenSet(false),
    m_dayOfWeek(0),
    m_dayOfWeekHasBeenSet(false),
    m_dayOfMonth(0),
    m_dayOfMonthHasBeenSet(false)
{
}

Aws::String UpdateMaintenanceStartTimeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_hourOfDayHasBeenSet)
  {
   payload.WithInteger("HourOfDay", m_hourOfDay);

  }

  if(m_minuteOfHourHasBeenSet)
  {
   payload.WithInteger("MinuteOfHour", m_minuteOfHour);

  }

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithInteger("DayOfWeek", m_dayOfWeek);

  }

  if(m_dayOfMonthHasBeenSet)
  {
   payload.WithInteger("DayOfMonth", m_dayOfMonth);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMaintenanceStartTimeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.UpdateMaintenanceStartTime"));
  return headers;

}




