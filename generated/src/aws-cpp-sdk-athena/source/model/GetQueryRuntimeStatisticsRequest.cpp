/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/GetQueryRuntimeStatisticsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetQueryRuntimeStatisticsRequest::GetQueryRuntimeStatisticsRequest() : 
    m_queryExecutionIdHasBeenSet(false)
{
}

Aws::String GetQueryRuntimeStatisticsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryExecutionIdHasBeenSet)
  {
   payload.WithString("QueryExecutionId", m_queryExecutionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetQueryRuntimeStatisticsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.GetQueryRuntimeStatistics"));
  return headers;

}




