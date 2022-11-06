/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/CreateSignalingChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSignalingChannelRequest::CreateSignalingChannelRequest() : 
    m_channelNameHasBeenSet(false),
    m_channelType(ChannelType::NOT_SET),
    m_channelTypeHasBeenSet(false),
    m_singleMasterConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateSignalingChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("ChannelName", m_channelName);

  }

  if(m_channelTypeHasBeenSet)
  {
   payload.WithString("ChannelType", ChannelTypeMapper::GetNameForChannelType(m_channelType));
  }

  if(m_singleMasterConfigurationHasBeenSet)
  {
   payload.WithObject("SingleMasterConfiguration", m_singleMasterConfiguration.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




