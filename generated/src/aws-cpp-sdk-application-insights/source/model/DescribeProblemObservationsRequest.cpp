/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/DescribeProblemObservationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeProblemObservationsRequest::DescribeProblemObservationsRequest() : 
    m_problemIdHasBeenSet(false)
{
}

Aws::String DescribeProblemObservationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_problemIdHasBeenSet)
  {
   payload.WithString("ProblemId", m_problemId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeProblemObservationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EC2WindowsBarleyService.DescribeProblemObservations"));
  return headers;

}




