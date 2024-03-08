/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/CreateEncoderConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivsrealtime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEncoderConfigurationRequest::CreateEncoderConfigurationRequest() : 
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_videoHasBeenSet(false)
{
}

Aws::String CreateEncoderConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

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

  if(m_videoHasBeenSet)
  {
   payload.WithObject("video", m_video.Jsonize());

  }

  return payload.View().WriteReadable();
}




