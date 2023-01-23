/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateScheduledAuditRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateScheduledAuditRequest::CreateScheduledAuditRequest() : 
    m_frequency(AuditFrequency::NOT_SET),
    m_frequencyHasBeenSet(false),
    m_dayOfMonthHasBeenSet(false),
    m_dayOfWeek(DayOfWeek::NOT_SET),
    m_dayOfWeekHasBeenSet(false),
    m_targetCheckNamesHasBeenSet(false),
    m_scheduledAuditNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateScheduledAuditRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_frequencyHasBeenSet)
  {
   payload.WithString("frequency", AuditFrequencyMapper::GetNameForAuditFrequency(m_frequency));
  }

  if(m_dayOfMonthHasBeenSet)
  {
   payload.WithString("dayOfMonth", m_dayOfMonth);

  }

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithString("dayOfWeek", DayOfWeekMapper::GetNameForDayOfWeek(m_dayOfWeek));
  }

  if(m_targetCheckNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetCheckNamesJsonList(m_targetCheckNames.size());
   for(unsigned targetCheckNamesIndex = 0; targetCheckNamesIndex < targetCheckNamesJsonList.GetLength(); ++targetCheckNamesIndex)
   {
     targetCheckNamesJsonList[targetCheckNamesIndex].AsString(m_targetCheckNames[targetCheckNamesIndex]);
   }
   payload.WithArray("targetCheckNames", std::move(targetCheckNamesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




