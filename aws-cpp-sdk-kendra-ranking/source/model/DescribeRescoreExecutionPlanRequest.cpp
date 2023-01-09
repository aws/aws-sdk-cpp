/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra-ranking/model/DescribeRescoreExecutionPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KendraRanking::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRescoreExecutionPlanRequest::DescribeRescoreExecutionPlanRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String DescribeRescoreExecutionPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRescoreExecutionPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraRerankingFrontendService.DescribeRescoreExecutionPlan"));
  return headers;

}




