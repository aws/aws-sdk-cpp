/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kinesis-video-archived-media/model/GetMediaForFragmentListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideoArchivedMedia::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMediaForFragmentListRequest::GetMediaForFragmentListRequest() : 
    m_streamNameHasBeenSet(false),
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

  if(m_fragmentsHasBeenSet)
  {
   Array<JsonValue> fragmentsJsonList(m_fragments.size());
   for(unsigned fragmentsIndex = 0; fragmentsIndex < fragmentsJsonList.GetLength(); ++fragmentsIndex)
   {
     fragmentsJsonList[fragmentsIndex].AsString(m_fragments[fragmentsIndex]);
   }
   payload.WithArray("Fragments", std::move(fragmentsJsonList));

  }

  return payload.WriteReadable();
}




