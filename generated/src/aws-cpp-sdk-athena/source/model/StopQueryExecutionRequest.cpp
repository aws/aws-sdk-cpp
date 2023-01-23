/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/StopQueryExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopQueryExecutionRequest::StopQueryExecutionRequest() : 
    m_queryExecutionId(Aws::Utils::UUID::RandomUUID()),
    m_queryExecutionIdHasBeenSet(true)
{
}

Aws::String StopQueryExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryExecutionIdHasBeenSet)
  {
   payload.WithString("QueryExecutionId", m_queryExecutionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopQueryExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.StopQueryExecution"));
  return headers;

}




