/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/StartCommitmentPurchaseAnalysisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartCommitmentPurchaseAnalysisRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_commitmentPurchaseAnalysisConfigurationHasBeenSet)
  {
   payload.WithObject("CommitmentPurchaseAnalysisConfiguration", m_commitmentPurchaseAnalysisConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartCommitmentPurchaseAnalysisRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.StartCommitmentPurchaseAnalysis"));
  return headers;

}




