/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudtrail/model/ListTagsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTagsRequest::ListTagsRequest() : 
    m_resourceIdListHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListTagsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdListHasBeenSet)
  {
   Array<JsonValue> resourceIdListJsonList(m_resourceIdList.size());
   for(unsigned resourceIdListIndex = 0; resourceIdListIndex < resourceIdListJsonList.GetLength(); ++resourceIdListIndex)
   {
     resourceIdListJsonList[resourceIdListIndex].AsString(m_resourceIdList[resourceIdListIndex]);
   }
   payload.WithArray("ResourceIdList", std::move(resourceIdListJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListTagsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.ListTags"));
  return headers;

}



