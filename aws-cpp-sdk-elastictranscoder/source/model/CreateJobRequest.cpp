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
#include <aws/elastictranscoder/model/CreateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticTranscoder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateJobRequest::CreateJobRequest() : 
    m_pipelineIdHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_outputKeyPrefixHasBeenSet(false),
    m_playlistsHasBeenSet(false),
    m_userMetadataHasBeenSet(false)
{
}

Aws::String CreateJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("PipelineId", m_pipelineId);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithObject("Input", m_input.Jsonize());

  }

  if(m_outputHasBeenSet)
  {
   payload.WithObject("Output", m_output.Jsonize());

  }

  if(m_outputsHasBeenSet)
  {
   Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("Outputs", std::move(outputsJsonList));

  }

  if(m_outputKeyPrefixHasBeenSet)
  {
   payload.WithString("OutputKeyPrefix", m_outputKeyPrefix);

  }

  if(m_playlistsHasBeenSet)
  {
   Array<JsonValue> playlistsJsonList(m_playlists.size());
   for(unsigned playlistsIndex = 0; playlistsIndex < playlistsJsonList.GetLength(); ++playlistsIndex)
   {
     playlistsJsonList[playlistsIndex].AsObject(m_playlists[playlistsIndex].Jsonize());
   }
   payload.WithArray("Playlists", std::move(playlistsJsonList));

  }

  if(m_userMetadataHasBeenSet)
  {
   JsonValue userMetadataJsonMap;
   for(auto& userMetadataItem : m_userMetadata)
   {
     userMetadataJsonMap.WithString(userMetadataItem.first, userMetadataItem.second);
   }
   payload.WithObject("UserMetadata", std::move(userMetadataJsonMap));

  }

  return payload.WriteReadable();
}



