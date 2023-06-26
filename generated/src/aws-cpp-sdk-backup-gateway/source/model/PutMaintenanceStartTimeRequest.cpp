/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/PutMaintenanceStartTimeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutMaintenanceStartTimeRequest::PutMaintenanceStartTimeRequest() : 
    m_dayOfMonth(0),
    m_dayOfMonthHasBeenSet(false),
    m_dayOfWeek(0),
    m_dayOfWeekHasBeenSet(false),
    m_gatewayArnHasBeenSet(false),
    m_hourOfDay(0),
    m_hourOfDayHasBeenSet(false),
    m_minuteOfHour(0),
    m_minuteOfHourHasBeenSet(false)
{
}

Aws::String PutMaintenanceStartTimeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dayOfMonthHasBeenSet)
  {
   payload.WithInteger("DayOfMonth", m_dayOfMonth);

  }

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithInteger("DayOfWeek", m_dayOfWeek);

  }

  if(m_gatewayArnHasBeenSet)
  {
   payload.WithString("GatewayArn", m_gatewayArn);

  }

  if(m_hourOfDayHasBeenSet)
  {
   payload.WithInteger("HourOfDay", m_hourOfDay);

  }

  if(m_minuteOfHourHasBeenSet)
  {
   payload.WithInteger("MinuteOfHour", m_minuteOfHour);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutMaintenanceStartTimeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BackupOnPremises_v20210101.PutMaintenanceStartTime"));
  return headers;

}




