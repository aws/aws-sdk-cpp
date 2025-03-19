/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ListCommitmentPurchaseAnalysesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListCommitmentPurchaseAnalysesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_analysisStatusHasBeenSet)
  {
   payload.WithString("AnalysisStatus", AnalysisStatusMapper::GetNameForAnalysisStatus(m_analysisStatus));
  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("NextPageToken", m_nextPageToken);

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_analysisIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> analysisIdsJsonList(m_analysisIds.size());
   for(unsigned analysisIdsIndex = 0; analysisIdsIndex < analysisIdsJsonList.GetLength(); ++analysisIdsIndex)
   {
     analysisIdsJsonList[analysisIdsIndex].AsString(m_analysisIds[analysisIdsIndex]);
   }
   payload.WithArray("AnalysisIds", std::move(analysisIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListCommitmentPurchaseAnalysesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.ListCommitmentPurchaseAnalyses"));
  return headers;

}




