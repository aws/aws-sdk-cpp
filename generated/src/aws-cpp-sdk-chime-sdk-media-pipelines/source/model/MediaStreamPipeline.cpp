﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaStreamPipeline.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

MediaStreamPipeline::MediaStreamPipeline() : 
    m_mediaPipelineIdHasBeenSet(false),
    m_mediaPipelineArnHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_status(MediaPipelineStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_sinksHasBeenSet(false)
{
}

MediaStreamPipeline::MediaStreamPipeline(JsonView jsonValue) : 
    m_mediaPipelineIdHasBeenSet(false),
    m_mediaPipelineArnHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_status(MediaPipelineStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_sinksHasBeenSet(false)
{
  *this = jsonValue;
}

MediaStreamPipeline& MediaStreamPipeline::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaPipelineId"))
  {
    m_mediaPipelineId = jsonValue.GetString("MediaPipelineId");

    m_mediaPipelineIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaPipelineArn"))
  {
    m_mediaPipelineArn = jsonValue.GetString("MediaPipelineArn");

    m_mediaPipelineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MediaPipelineStatusMapper::GetMediaPipelineStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("Sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sinks"))
  {
    Aws::Utils::Array<JsonView> sinksJsonList = jsonValue.GetArray("Sinks");
    for(unsigned sinksIndex = 0; sinksIndex < sinksJsonList.GetLength(); ++sinksIndex)
    {
      m_sinks.push_back(sinksJsonList[sinksIndex].AsObject());
    }
    m_sinksHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaStreamPipeline::Jsonize() const
{
  JsonValue payload;

  if(m_mediaPipelineIdHasBeenSet)
  {
   payload.WithString("MediaPipelineId", m_mediaPipelineId);

  }

  if(m_mediaPipelineArnHasBeenSet)
  {
   payload.WithString("MediaPipelineArn", m_mediaPipelineArn);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MediaPipelineStatusMapper::GetNameForMediaPipelineStatus(m_status));
  }

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("Sources", std::move(sourcesJsonList));

  }

  if(m_sinksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sinksJsonList(m_sinks.size());
   for(unsigned sinksIndex = 0; sinksIndex < sinksJsonList.GetLength(); ++sinksIndex)
   {
     sinksJsonList[sinksIndex].AsObject(m_sinks[sinksIndex].Jsonize());
   }
   payload.WithArray("Sinks", std::move(sinksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
