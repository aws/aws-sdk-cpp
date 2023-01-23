/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/CreatePresetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticTranscoder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePresetRequest::CreatePresetRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_audioHasBeenSet(false),
    m_thumbnailsHasBeenSet(false)
{
}

Aws::String CreatePresetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_containerHasBeenSet)
  {
   payload.WithString("Container", m_container);

  }

  if(m_videoHasBeenSet)
  {
   payload.WithObject("Video", m_video.Jsonize());

  }

  if(m_audioHasBeenSet)
  {
   payload.WithObject("Audio", m_audio.Jsonize());

  }

  if(m_thumbnailsHasBeenSet)
  {
   payload.WithObject("Thumbnails", m_thumbnails.Jsonize());

  }

  return payload.View().WriteReadable();
}




