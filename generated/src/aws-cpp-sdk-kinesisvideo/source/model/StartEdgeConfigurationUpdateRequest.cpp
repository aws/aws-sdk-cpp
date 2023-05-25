/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/StartEdgeConfigurationUpdateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartEdgeConfigurationUpdateRequest::StartEdgeConfigurationUpdateRequest() : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_edgeConfigHasBeenSet(false)
{
}

Aws::String StartEdgeConfigurationUpdateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_streamARNHasBeenSet)
  {
   payload.WithString("StreamARN", m_streamARN);

  }

  if(m_edgeConfigHasBeenSet)
  {
   payload.WithObject("EdgeConfig", m_edgeConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




