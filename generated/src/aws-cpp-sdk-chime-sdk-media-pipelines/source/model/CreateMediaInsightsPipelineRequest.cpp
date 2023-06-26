/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/CreateMediaInsightsPipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMediaInsightsPipelineRequest::CreateMediaInsightsPipelineRequest() : 
    m_mediaInsightsPipelineConfigurationArnHasBeenSet(false),
    m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet(false),
    m_mediaInsightsRuntimeMetadataHasBeenSet(false),
    m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet(false),
    m_s3RecordingSinkRuntimeConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String CreateMediaInsightsPipelineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mediaInsightsPipelineConfigurationArnHasBeenSet)
  {
   payload.WithString("MediaInsightsPipelineConfigurationArn", m_mediaInsightsPipelineConfigurationArn);

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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




