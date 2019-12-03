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

#include <aws/kendra/model/BatchDeleteDocumentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteDocumentRequest::BatchDeleteDocumentRequest() : 
    m_indexIdHasBeenSet(false),
    m_documentIdListHasBeenSet(false)
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
   Array<JsonValue> documentIdListJsonList(m_documentIdList.size());
   for(unsigned documentIdListIndex = 0; documentIdListIndex < documentIdListJsonList.GetLength(); ++documentIdListIndex)
   {
     documentIdListJsonList[documentIdListIndex].AsString(m_documentIdList[documentIdListIndex]);
   }
   payload.WithArray("DocumentIdList", std::move(documentIdListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDeleteDocumentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.BatchDeleteDocument"));
  return headers;

}




