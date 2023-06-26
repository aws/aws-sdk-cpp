/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetResourceEvaluationSummaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResourceEvaluationSummaryRequest::GetResourceEvaluationSummaryRequest() : 
    m_resourceEvaluationIdHasBeenSet(false)
{
}

Aws::String GetResourceEvaluationSummaryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceEvaluationIdHasBeenSet)
  {
   payload.WithString("ResourceEvaluationId", m_resourceEvaluationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetResourceEvaluationSummaryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.GetResourceEvaluationSummary"));
  return headers;

}




