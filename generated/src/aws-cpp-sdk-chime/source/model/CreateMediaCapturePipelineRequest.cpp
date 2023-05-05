/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/CreateMediaCapturePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMediaCapturePipelineRequest::CreateMediaCapturePipelineRequest() : 
    m_sourceType(MediaPipelineSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_sinkType(MediaPipelineSinkType::NOT_SET),
    m_sinkTypeHasBeenSet(false),
    m_sinkArnHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_chimeSdkMeetingConfigurationHasBeenSet(false)
{
}

Aws::String CreateMediaCapturePipelineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", MediaPipelineSourceTypeMapper::GetNameForMediaPipelineSourceType(m_sourceType));
  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_sinkTypeHasBeenSet)
  {
   payload.WithString("SinkType", MediaPipelineSinkTypeMapper::GetNameForMediaPipelineSinkType(m_sinkType));
  }

  if(m_sinkArnHasBeenSet)
  {
   payload.WithString("SinkArn", m_sinkArn);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_chimeSdkMeetingConfigurationHasBeenSet)
  {
   payload.WithObject("ChimeSdkMeetingConfiguration", m_chimeSdkMeetingConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




