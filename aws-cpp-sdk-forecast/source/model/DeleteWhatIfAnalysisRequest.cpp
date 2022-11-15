/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DeleteWhatIfAnalysisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteWhatIfAnalysisRequest::DeleteWhatIfAnalysisRequest() : 
    m_whatIfAnalysisArnHasBeenSet(false)
{
}

Aws::String DeleteWhatIfAnalysisRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_whatIfAnalysisArnHasBeenSet)
  {
   payload.WithString("WhatIfAnalysisArn", m_whatIfAnalysisArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteWhatIfAnalysisRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.DeleteWhatIfAnalysis"));
  return headers;

}




