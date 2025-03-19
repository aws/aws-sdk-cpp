/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/UpdateMediaInsightsPipelineStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMediaInsightsPipelineStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updateStatusHasBeenSet)
  {
   payload.WithString("UpdateStatus", MediaPipelineStatusUpdateMapper::GetNameForMediaPipelineStatusUpdate(m_updateStatus));
  }

  return payload.View().WriteReadable();
}




