/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/CreateChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateChannelRequest::CreateChannelRequest() : 
    m_authorized(false),
    m_authorizedHasBeenSet(false),
    m_latencyMode(ChannelLatencyMode::NOT_SET),
    m_latencyModeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recordingConfigurationArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(ChannelType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String CreateChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorizedHasBeenSet)
  {
   payload.WithBool("authorized", m_authorized);

  }

  if(m_latencyModeHasBeenSet)
  {
   payload.WithString("latencyMode", ChannelLatencyModeMapper::GetNameForChannelLatencyMode(m_latencyMode));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_recordingConfigurationArnHasBeenSet)
  {
   payload.WithString("recordingConfigurationArn", m_recordingConfigurationArn);

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

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ChannelTypeMapper::GetNameForChannelType(m_type));
  }

  return payload.View().WriteReadable();
}




