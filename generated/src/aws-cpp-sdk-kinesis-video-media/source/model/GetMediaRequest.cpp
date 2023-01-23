/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-media/model/GetMediaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideoMedia::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMediaRequest::GetMediaRequest() : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_startSelectorHasBeenSet(false)
{
}

Aws::String GetMediaRequest::SerializePayload() const
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

  if(m_startSelectorHasBeenSet)
  {
   payload.WithObject("StartSelector", m_startSelector.Jsonize());

  }

  return payload.View().WriteReadable();
}




