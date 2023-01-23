/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/GetMediaForFragmentListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideoArchivedMedia::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMediaForFragmentListRequest::GetMediaForFragmentListRequest() : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_fragmentsHasBeenSet(false)
{
}

Aws::String GetMediaForFragmentListRequest::SerializePayload() const
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

  if(m_fragmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fragmentsJsonList(m_fragments.size());
   for(unsigned fragmentsIndex = 0; fragmentsIndex < fragmentsJsonList.GetLength(); ++fragmentsIndex)
   {
     fragmentsJsonList[fragmentsIndex].AsString(m_fragments[fragmentsIndex]);
   }
   payload.WithArray("Fragments", std::move(fragmentsJsonList));

  }

  return payload.View().WriteReadable();
}




