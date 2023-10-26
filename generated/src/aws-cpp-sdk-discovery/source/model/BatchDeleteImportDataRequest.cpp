/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/BatchDeleteImportDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteImportDataRequest::BatchDeleteImportDataRequest() : 
    m_importTaskIdsHasBeenSet(false),
    m_deleteHistory(false),
    m_deleteHistoryHasBeenSet(false)
{
}

Aws::String BatchDeleteImportDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_importTaskIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> importTaskIdsJsonList(m_importTaskIds.size());
   for(unsigned importTaskIdsIndex = 0; importTaskIdsIndex < importTaskIdsJsonList.GetLength(); ++importTaskIdsIndex)
   {
     importTaskIdsJsonList[importTaskIdsIndex].AsString(m_importTaskIds[importTaskIdsIndex]);
   }
   payload.WithArray("importTaskIds", std::move(importTaskIdsJsonList));

  }

  if(m_deleteHistoryHasBeenSet)
  {
   payload.WithBool("deleteHistory", m_deleteHistory);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDeleteImportDataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.BatchDeleteImportData"));
  return headers;

}




