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

#include <aws/kinesisvideo/model/UntagResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UntagResourceRequest::UntagResourceRequest() : 
    m_resourceARNHasBeenSet(false),
    m_tagKeyListHasBeenSet(false)
{
}

Aws::String UntagResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  if(m_tagKeyListHasBeenSet)
  {
   Array<JsonValue> tagKeyListJsonList(m_tagKeyList.size());
   for(unsigned tagKeyListIndex = 0; tagKeyListIndex < tagKeyListJsonList.GetLength(); ++tagKeyListIndex)
   {
     tagKeyListJsonList[tagKeyListIndex].AsString(m_tagKeyList[tagKeyListIndex]);
   }
   payload.WithArray("TagKeyList", std::move(tagKeyListJsonList));

  }

  return payload.View().WriteReadable();
}




