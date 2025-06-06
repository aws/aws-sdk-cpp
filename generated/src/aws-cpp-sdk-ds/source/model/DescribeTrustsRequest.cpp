﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeTrustsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeTrustsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_trustIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trustIdsJsonList(m_trustIds.size());
   for(unsigned trustIdsIndex = 0; trustIdsIndex < trustIdsJsonList.GetLength(); ++trustIdsIndex)
   {
     trustIdsJsonList[trustIdsIndex].AsString(m_trustIds[trustIdsIndex]);
   }
   payload.WithArray("TrustIds", std::move(trustIdsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTrustsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DescribeTrusts"));
  return headers;

}




