/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}



