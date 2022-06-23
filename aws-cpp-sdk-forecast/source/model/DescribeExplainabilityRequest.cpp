/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeExplainabilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeExplainabilityRequest::DescribeExplainabilityRequest() : 
    m_explainabilityArnHasBeenSet(false)
{
}

Aws::String DescribeExplainabilityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_explainabilityArnHasBeenSet)
  {
   payload.WithString("ExplainabilityArn", m_explainabilityArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeExplainabilityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.DescribeExplainability"));
  return headers;

}




