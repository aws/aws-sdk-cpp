/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/BatchDeleteFeaturedResultsSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteFeaturedResultsSetRequest::BatchDeleteFeaturedResultsSetRequest() : 
    m_indexIdHasBeenSet(false),
    m_featuredResultsSetIdsHasBeenSet(false)
{
}

Aws::String BatchDeleteFeaturedResultsSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_featuredResultsSetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featuredResultsSetIdsJsonList(m_featuredResultsSetIds.size());
   for(unsigned featuredResultsSetIdsIndex = 0; featuredResultsSetIdsIndex < featuredResultsSetIdsJsonList.GetLength(); ++featuredResultsSetIdsIndex)
   {
     featuredResultsSetIdsJsonList[featuredResultsSetIdsIndex].AsString(m_featuredResultsSetIds[featuredResultsSetIdsIndex]);
   }
   payload.WithArray("FeaturedResultsSetIds", std::move(featuredResultsSetIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDeleteFeaturedResultsSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.BatchDeleteFeaturedResultsSet"));
  return headers;

}




