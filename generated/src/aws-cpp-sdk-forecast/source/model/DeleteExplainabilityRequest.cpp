/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DeleteExplainabilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteExplainabilityRequest::DeleteExplainabilityRequest() : 
    m_explainabilityArnHasBeenSet(false)
{
}

Aws::String DeleteExplainabilityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_explainabilityArnHasBeenSet)
  {
   payload.WithString("ExplainabilityArn", m_explainabilityArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteExplainabilityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.DeleteExplainability"));
  return headers;

}




