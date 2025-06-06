﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/DescribeContinuousExportsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeContinuousExportsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_exportIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exportIdsJsonList(m_exportIds.size());
   for(unsigned exportIdsIndex = 0; exportIdsIndex < exportIdsJsonList.GetLength(); ++exportIdsIndex)
   {
     exportIdsJsonList[exportIdsIndex].AsString(m_exportIds[exportIdsIndex]);
   }
   payload.WithArray("exportIds", std::move(exportIdsJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeContinuousExportsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.DescribeContinuousExports"));
  return headers;

}




