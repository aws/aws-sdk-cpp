/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DeleteExplainabilityExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteExplainabilityExportRequest::DeleteExplainabilityExportRequest() : 
    m_explainabilityExportArnHasBeenSet(false)
{
}

Aws::String DeleteExplainabilityExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_explainabilityExportArnHasBeenSet)
  {
   payload.WithString("ExplainabilityExportArn", m_explainabilityExportArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteExplainabilityExportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.DeleteExplainabilityExport"));
  return headers;

}




