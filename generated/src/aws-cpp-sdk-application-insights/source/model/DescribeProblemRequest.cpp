/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/DescribeProblemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeProblemRequest::DescribeProblemRequest() : 
    m_problemIdHasBeenSet(false)
{
}

Aws::String DescribeProblemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_problemIdHasBeenSet)
  {
   payload.WithString("ProblemId", m_problemId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeProblemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EC2WindowsBarleyService.DescribeProblem"));
  return headers;

}




