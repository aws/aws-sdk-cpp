/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetCommitmentPurchaseAnalysisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetCommitmentPurchaseAnalysisRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_analysisIdHasBeenSet)
  {
   payload.WithString("AnalysisId", m_analysisId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCommitmentPurchaseAnalysisRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetCommitmentPurchaseAnalysis"));
  return headers;

}




