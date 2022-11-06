/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> resourceIdListJsonList(m_resourceIdList.size());
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListTagsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.ListTags"));
  return headers;

}




