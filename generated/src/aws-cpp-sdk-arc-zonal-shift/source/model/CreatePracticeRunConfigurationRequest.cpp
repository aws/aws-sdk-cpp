/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/CreatePracticeRunConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ARCZonalShift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePracticeRunConfigurationRequest::CreatePracticeRunConfigurationRequest() : 
    m_blockedDatesHasBeenSet(false),
    m_blockedWindowsHasBeenSet(false),
    m_blockingAlarmsHasBeenSet(false),
    m_outcomeAlarmsHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false)
{
}

Aws::String CreatePracticeRunConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_blockedDatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockedDatesJsonList(m_blockedDates.size());
   for(unsigned blockedDatesIndex = 0; blockedDatesIndex < blockedDatesJsonList.GetLength(); ++blockedDatesIndex)
   {
     blockedDatesJsonList[blockedDatesIndex].AsString(m_blockedDates[blockedDatesIndex]);
   }
   payload.WithArray("blockedDates", std::move(blockedDatesJsonList));

  }

  if(m_blockedWindowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockedWindowsJsonList(m_blockedWindows.size());
   for(unsigned blockedWindowsIndex = 0; blockedWindowsIndex < blockedWindowsJsonList.GetLength(); ++blockedWindowsIndex)
   {
     blockedWindowsJsonList[blockedWindowsIndex].AsString(m_blockedWindows[blockedWindowsIndex]);
   }
   payload.WithArray("blockedWindows", std::move(blockedWindowsJsonList));

  }

  if(m_blockingAlarmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockingAlarmsJsonList(m_blockingAlarms.size());
   for(unsigned blockingAlarmsIndex = 0; blockingAlarmsIndex < blockingAlarmsJsonList.GetLength(); ++blockingAlarmsIndex)
   {
     blockingAlarmsJsonList[blockingAlarmsIndex].AsObject(m_blockingAlarms[blockingAlarmsIndex].Jsonize());
   }
   payload.WithArray("blockingAlarms", std::move(blockingAlarmsJsonList));

  }

  if(m_outcomeAlarmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outcomeAlarmsJsonList(m_outcomeAlarms.size());
   for(unsigned outcomeAlarmsIndex = 0; outcomeAlarmsIndex < outcomeAlarmsJsonList.GetLength(); ++outcomeAlarmsIndex)
   {
     outcomeAlarmsJsonList[outcomeAlarmsIndex].AsObject(m_outcomeAlarms[outcomeAlarmsIndex].Jsonize());
   }
   payload.WithArray("outcomeAlarms", std::move(outcomeAlarmsJsonList));

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("resourceIdentifier", m_resourceIdentifier);

  }

  return payload.View().WriteReadable();
}




