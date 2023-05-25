/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/CreateRecordingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRecordingConfigurationRequest::CreateRecordingConfigurationRequest() : 
    m_destinationConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recordingReconnectWindowSeconds(0),
    m_recordingReconnectWindowSecondsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_thumbnailConfigurationHasBeenSet(false)
{
}

Aws::String CreateRecordingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationConfigurationHasBeenSet)
  {
   payload.WithObject("destinationConfiguration", m_destinationConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_recordingReconnectWindowSecondsHasBeenSet)
  {
   payload.WithInteger("recordingReconnectWindowSeconds", m_recordingReconnectWindowSeconds);

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

  if(m_thumbnailConfigurationHasBeenSet)
  {
   payload.WithObject("thumbnailConfiguration", m_thumbnailConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




