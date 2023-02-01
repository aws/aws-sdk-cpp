/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/GetClipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideoArchivedMedia::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetClipRequest::GetClipRequest() : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_clipFragmentSelectorHasBeenSet(false)
{
}

Aws::String GetClipRequest::SerializePayload() const
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

  if(m_clipFragmentSelectorHasBeenSet)
  {
   payload.WithObject("ClipFragmentSelector", m_clipFragmentSelector.Jsonize());

  }

  return payload.View().WriteReadable();
}




