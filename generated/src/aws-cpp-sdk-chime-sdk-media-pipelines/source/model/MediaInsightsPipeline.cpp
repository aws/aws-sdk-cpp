/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipeline.h>
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

MediaInsightsPipeline::MediaInsightsPipeline() : 
    m_mediaPipelineIdHasBeenSet(false),
    m_mediaPipelineArnHasBeenSet(false),
    m_mediaInsightsPipelineConfigurationArnHasBeenSet(false),
    m_status(MediaPipelineStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet(false),
    m_mediaInsightsRuntimeMetadataHasBeenSet(false),
    m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet(false),
    m_s3RecordingSinkRuntimeConfigurationHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_elementStatusesHasBeenSet(false)
{
}

MediaInsightsPipeline::MediaInsightsPipeline(JsonView jsonValue) : 
    m_mediaPipelineIdHasBeenSet(false),
    m_mediaPipelineArnHasBeenSet(false),
    m_mediaInsightsPipelineConfigurationArnHasBeenSet(false),
    m_status(MediaPipelineStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet(false),
    m_mediaInsightsRuntimeMetadataHasBeenSet(false),
    m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet(false),
    m_s3RecordingSinkRuntimeConfigurationHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_elementStatusesHasBeenSet(false)
{
  *this = jsonValue;
}

MediaInsightsPipeline& MediaInsightsPipeline::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("MediaInsightsPipelineConfigurationArn"))
  {
    m_mediaInsightsPipelineConfigurationArn = jsonValue.GetString("MediaInsightsPipelineConfigurationArn");

    m_mediaInsightsPipelineConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MediaPipelineStatusMapper::GetMediaPipelineStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisVideoStreamSourceRuntimeConfiguration"))
  {
    m_kinesisVideoStreamSourceRuntimeConfiguration = jsonValue.GetObject("KinesisVideoStreamSourceRuntimeConfiguration");

    m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaInsightsRuntimeMetadata"))
  {
    Aws::Map<Aws::String, JsonView> mediaInsightsRuntimeMetadataJsonMap = jsonValue.GetObject("MediaInsightsRuntimeMetadata").GetAllObjects();
    for(auto& mediaInsightsRuntimeMetadataItem : mediaInsightsRuntimeMetadataJsonMap)
    {
      m_mediaInsightsRuntimeMetadata[mediaInsightsRuntimeMetadataItem.first] = mediaInsightsRuntimeMetadataItem.second.AsString();
    }
    m_mediaInsightsRuntimeMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisVideoStreamRecordingSourceRuntimeConfiguration"))
  {
    m_kinesisVideoStreamRecordingSourceRuntimeConfiguration = jsonValue.GetObject("KinesisVideoStreamRecordingSourceRuntimeConfiguration");

    m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3RecordingSinkRuntimeConfiguration"))
  {
    m_s3RecordingSinkRuntimeConfiguration = jsonValue.GetObject("S3RecordingSinkRuntimeConfiguration");

    m_s3RecordingSinkRuntimeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElementStatuses"))
  {
    Aws::Utils::Array<JsonView> elementStatusesJsonList = jsonValue.GetArray("ElementStatuses");
    for(unsigned elementStatusesIndex = 0; elementStatusesIndex < elementStatusesJsonList.GetLength(); ++elementStatusesIndex)
    {
      m_elementStatuses.push_back(elementStatusesJsonList[elementStatusesIndex].AsObject());
    }
    m_elementStatusesHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaInsightsPipeline::Jsonize() const
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

  if(m_mediaInsightsPipelineConfigurationArnHasBeenSet)
  {
   payload.WithString("MediaInsightsPipelineConfigurationArn", m_mediaInsightsPipelineConfigurationArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MediaPipelineStatusMapper::GetNameForMediaPipelineStatus(m_status));
  }

  if(m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet)
  {
   payload.WithObject("KinesisVideoStreamSourceRuntimeConfiguration", m_kinesisVideoStreamSourceRuntimeConfiguration.Jsonize());

  }

  if(m_mediaInsightsRuntimeMetadataHasBeenSet)
  {
   JsonValue mediaInsightsRuntimeMetadataJsonMap;
   for(auto& mediaInsightsRuntimeMetadataItem : m_mediaInsightsRuntimeMetadata)
   {
     mediaInsightsRuntimeMetadataJsonMap.WithString(mediaInsightsRuntimeMetadataItem.first, mediaInsightsRuntimeMetadataItem.second);
   }
   payload.WithObject("MediaInsightsRuntimeMetadata", std::move(mediaInsightsRuntimeMetadataJsonMap));

  }

  if(m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet)
  {
   payload.WithObject("KinesisVideoStreamRecordingSourceRuntimeConfiguration", m_kinesisVideoStreamRecordingSourceRuntimeConfiguration.Jsonize());

  }

  if(m_s3RecordingSinkRuntimeConfigurationHasBeenSet)
  {
   payload.WithObject("S3RecordingSinkRuntimeConfiguration", m_s3RecordingSinkRuntimeConfiguration.Jsonize());

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_elementStatusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> elementStatusesJsonList(m_elementStatuses.size());
   for(unsigned elementStatusesIndex = 0; elementStatusesIndex < elementStatusesJsonList.GetLength(); ++elementStatusesIndex)
   {
     elementStatusesJsonList[elementStatusesIndex].AsObject(m_elementStatuses[elementStatusesIndex].Jsonize());
   }
   payload.WithArray("ElementStatuses", std::move(elementStatusesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
