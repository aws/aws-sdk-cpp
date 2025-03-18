/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/CreateStageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivsrealtime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateStageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_participantTokenConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> participantTokenConfigurationsJsonList(m_participantTokenConfigurations.size());
   for(unsigned participantTokenConfigurationsIndex = 0; participantTokenConfigurationsIndex < participantTokenConfigurationsJsonList.GetLength(); ++participantTokenConfigurationsIndex)
   {
     participantTokenConfigurationsJsonList[participantTokenConfigurationsIndex].AsObject(m_participantTokenConfigurations[participantTokenConfigurationsIndex].Jsonize());
   }
   payload.WithArray("participantTokenConfigurations", std::move(participantTokenConfigurationsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_autoParticipantRecordingConfigurationHasBeenSet)
  {
   payload.WithObject("autoParticipantRecordingConfiguration", m_autoParticipantRecordingConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




