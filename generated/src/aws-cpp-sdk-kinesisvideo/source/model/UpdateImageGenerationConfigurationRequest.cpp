/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/UpdateImageGenerationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateImageGenerationConfigurationRequest::UpdateImageGenerationConfigurationRequest() : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_imageGenerationConfigurationHasBeenSet(false)
{
}

Aws::String UpdateImageGenerationConfigurationRequest::SerializePayload() const
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

  if(m_imageGenerationConfigurationHasBeenSet)
  {
   payload.WithObject("ImageGenerationConfiguration", m_imageGenerationConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




