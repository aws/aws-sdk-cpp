/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/mediatailor/model/PutPlaybackConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutPlaybackConfigurationRequest::PutPlaybackConfigurationRequest() : 
    m_adDecisionServerUrlHasBeenSet(false),
    m_cdnConfigurationHasBeenSet(false),
    m_dashConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_slateAdUrlHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_transcodeProfileNameHasBeenSet(false),
    m_videoContentSourceUrlHasBeenSet(false)
{
}

Aws::String PutPlaybackConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adDecisionServerUrlHasBeenSet)
  {
   payload.WithString("AdDecisionServerUrl", m_adDecisionServerUrl);

  }

  if(m_cdnConfigurationHasBeenSet)
  {
   payload.WithObject("CdnConfiguration", m_cdnConfiguration.Jsonize());

  }

  if(m_dashConfigurationHasBeenSet)
  {
   payload.WithObject("DashConfiguration", m_dashConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_slateAdUrlHasBeenSet)
  {
   payload.WithString("SlateAdUrl", m_slateAdUrl);

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

  if(m_transcodeProfileNameHasBeenSet)
  {
   payload.WithString("TranscodeProfileName", m_transcodeProfileName);

  }

  if(m_videoContentSourceUrlHasBeenSet)
  {
   payload.WithString("VideoContentSourceUrl", m_videoContentSourceUrl);

  }

  return payload.View().WriteReadable();
}




