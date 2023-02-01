/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/BatchGetDocumentStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetDocumentStatusRequest::BatchGetDocumentStatusRequest() : 
    m_indexIdHasBeenSet(false),
    m_documentInfoListHasBeenSet(false)
{
}

Aws::String BatchGetDocumentStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_documentInfoListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentInfoListJsonList(m_documentInfoList.size());
   for(unsigned documentInfoListIndex = 0; documentInfoListIndex < documentInfoListJsonList.GetLength(); ++documentInfoListIndex)
   {
     documentInfoListJsonList[documentInfoListIndex].AsObject(m_documentInfoList[documentInfoListIndex].Jsonize());
   }
   payload.WithArray("DocumentInfoList", std::move(documentInfoListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetDocumentStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.BatchGetDocumentStatus"));
  return headers;

}




