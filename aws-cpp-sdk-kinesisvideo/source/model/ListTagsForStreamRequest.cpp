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

#include <aws/kinesisvideo/model/ListTagsForStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTagsForStreamRequest::ListTagsForStreamRequest() : 
    m_nextTokenHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
}

Aws::String ListTagsForStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_streamARNHasBeenSet)
  {
   payload.WithString("StreamARN", m_streamARN);

  }

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  return payload.WriteReadable();
}




