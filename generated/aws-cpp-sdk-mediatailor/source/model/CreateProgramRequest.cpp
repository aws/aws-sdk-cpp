/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/CreateProgramRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProgramRequest::CreateProgramRequest() : 
    m_adBreaksHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_programNameHasBeenSet(false),
    m_scheduleConfigurationHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false),
    m_vodSourceNameHasBeenSet(false)
{
}

Aws::String CreateProgramRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adBreaksHasBeenSet)
  {
   Array<JsonValue> adBreaksJsonList(m_adBreaks.size());
   for(unsigned adBreaksIndex = 0; adBreaksIndex < adBreaksJsonList.GetLength(); ++adBreaksIndex)
   {
     adBreaksJsonList[adBreaksIndex].AsObject(m_adBreaks[adBreaksIndex].Jsonize());
   }
   payload.WithArray("AdBreaks", std::move(adBreaksJsonList));

  }

  if(m_scheduleConfigurationHasBeenSet)
  {
   payload.WithObject("ScheduleConfiguration", m_scheduleConfiguration.Jsonize());

  }

  if(m_sourceLocationNameHasBeenSet)
  {
   payload.WithString("SourceLocationName", m_sourceLocationName);

  }

  if(m_vodSourceNameHasBeenSet)
  {
   payload.WithString("VodSourceName", m_vodSourceName);

  }

  return payload.View().WriteReadable();
}




