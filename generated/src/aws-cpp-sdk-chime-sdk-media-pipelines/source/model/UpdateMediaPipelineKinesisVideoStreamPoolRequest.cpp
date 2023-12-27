/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/UpdateMediaPipelineKinesisVideoStreamPoolRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMediaPipelineKinesisVideoStreamPoolRequest::UpdateMediaPipelineKinesisVideoStreamPoolRequest() : 
    m_identifierHasBeenSet(false),
    m_streamConfigurationHasBeenSet(false)
{
}

Aws::String UpdateMediaPipelineKinesisVideoStreamPoolRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamConfigurationHasBeenSet)
  {
   payload.WithObject("StreamConfiguration", m_streamConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




