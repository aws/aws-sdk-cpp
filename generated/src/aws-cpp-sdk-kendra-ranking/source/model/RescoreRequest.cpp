/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra-ranking/model/RescoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KendraRanking::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RescoreRequest::RescoreRequest() : 
    m_rescoreExecutionPlanIdHasBeenSet(false),
    m_searchQueryHasBeenSet(false),
    m_documentsHasBeenSet(false)
{
}

Aws::String RescoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rescoreExecutionPlanIdHasBeenSet)
  {
   payload.WithString("RescoreExecutionPlanId", m_rescoreExecutionPlanId);

  }

  if(m_searchQueryHasBeenSet)
  {
   payload.WithString("SearchQuery", m_searchQuery);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RescoreRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraRerankingFrontendService.Rescore"));
  return headers;

}




