/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/BatchDeleteDocumentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteDocumentRequest::BatchDeleteDocumentRequest() : 
    m_indexIdHasBeenSet(false),
    m_documentIdListHasBeenSet(false),
    m_dataSourceSyncJobMetricTargetHasBeenSet(false)
{
}

Aws::String BatchDeleteDocumentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_documentIdListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentIdListJsonList(m_documentIdList.size());
   for(unsigned documentIdListIndex = 0; documentIdListIndex < documentIdListJsonList.GetLength(); ++documentIdListIndex)
   {
     documentIdListJsonList[documentIdListIndex].AsString(m_documentIdList[documentIdListIndex]);
   }
   payload.WithArray("DocumentIdList", std::move(documentIdListJsonList));

  }

  if(m_dataSourceSyncJobMetricTargetHasBeenSet)
  {
   payload.WithObject("DataSourceSyncJobMetricTarget", m_dataSourceSyncJobMetricTarget.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDeleteDocumentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.BatchDeleteDocument"));
  return headers;

}




