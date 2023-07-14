/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/GetSolutionMetricsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSolutionMetricsRequest::GetSolutionMetricsRequest() : 
    m_solutionVersionArnHasBeenSet(false)
{
}

Aws::String GetSolutionMetricsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_solutionVersionArnHasBeenSet)
  {
   payload.WithString("solutionVersionArn", m_solutionVersionArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSolutionMetricsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.GetSolutionMetrics"));
  return headers;

}




