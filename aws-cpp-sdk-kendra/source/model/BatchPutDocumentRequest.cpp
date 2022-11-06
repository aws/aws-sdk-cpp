/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/BatchPutDocumentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchPutDocumentRequest::BatchPutDocumentRequest() : 
    m_indexIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_documentsHasBeenSet(false),
    m_customDocumentEnrichmentConfigurationHasBeenSet(false)
{
}

Aws::String BatchPutDocumentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_documentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentsJsonList(m_documents.size());
   for(unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex)
   {
     documentsJsonList[documentsIndex].AsObject(m_documents[documentsIndex].Jsonize());
   }
   payload.WithArray("Documents", std::move(documentsJsonList));

  }

  if(m_customDocumentEnrichmentConfigurationHasBeenSet)
  {
   payload.WithObject("CustomDocumentEnrichmentConfiguration", m_customDocumentEnrichmentConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchPutDocumentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.BatchPutDocument"));
  return headers;

}




