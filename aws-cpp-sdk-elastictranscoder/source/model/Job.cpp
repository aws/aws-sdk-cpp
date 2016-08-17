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
#include <aws/elastictranscoder/model/Job.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

Job::Job() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_pipelineIdHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_outputKeyPrefixHasBeenSet(false),
    m_playlistsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_userMetadataHasBeenSet(false),
    m_timingHasBeenSet(false)
{
}

Job::Job(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_pipelineIdHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_outputKeyPrefixHasBeenSet(false),
    m_playlistsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_userMetadataHasBeenSet(false),
    m_timingHasBeenSet(false)
{
  *this = jsonValue;
}

Job& Job::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineId"))
  {
    m_pipelineId = jsonValue.GetString("PipelineId");

    m_pipelineIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Input"))
  {
    m_input = jsonValue.GetObject("Input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Output"))
  {
    m_output = jsonValue.GetObject("Output");

    m_outputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Outputs"))
  {
    Array<JsonValue> outputsJsonList = jsonValue.GetArray("Outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
    m_outputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputKeyPrefix"))
  {
    m_outputKeyPrefix = jsonValue.GetString("OutputKeyPrefix");

    m_outputKeyPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Playlists"))
  {
    Array<JsonValue> playlistsJsonList = jsonValue.GetArray("Playlists");
    for(unsigned playlistsIndex = 0; playlistsIndex < playlistsJsonList.GetLength(); ++playlistsIndex)
    {
      m_playlists.push_back(playlistsJsonList[playlistsIndex].AsObject());
    }
    m_playlistsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserMetadata"))
  {
    Aws::Map<Aws::String, JsonValue> userMetadataJsonMap = jsonValue.GetObject("UserMetadata").GetAllObjects();
    for(auto& userMetadataItem : userMetadataJsonMap)
    {
      m_userMetadata[userMetadataItem.first] = userMetadataItem.second.AsString();
    }
    m_userMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timing"))
  {
    m_timing = jsonValue.GetObject("Timing");

    m_timingHasBeenSet = true;
  }

  return *this;
}

JsonValue Job::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

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

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

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

  if(m_timingHasBeenSet)
  {
   payload.WithObject("Timing", m_timing.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws