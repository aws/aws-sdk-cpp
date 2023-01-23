/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ListTagsForResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTagsForResourceRequest::ListTagsForResourceRequest() : 
    m_resourceArnHasBeenSet(false),
    m_resourceArnListHasBeenSet(false)
{
}

Aws::String ListTagsForResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_resourceArnListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceArnListJsonList(m_resourceArnList.size());
   for(unsigned resourceArnListIndex = 0; resourceArnListIndex < resourceArnListJsonList.GetLength(); ++resourceArnListIndex)
   {
     resourceArnListJsonList[resourceArnListIndex].AsString(m_resourceArnList[resourceArnListIndex]);
   }
   payload.WithArray("ResourceArnList", std::move(resourceArnListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListTagsForResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ListTagsForResource"));
  return headers;

}




