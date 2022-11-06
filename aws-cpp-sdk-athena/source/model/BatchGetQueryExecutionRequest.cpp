/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/BatchGetQueryExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetQueryExecutionRequest::BatchGetQueryExecutionRequest() : 
    m_queryExecutionIdsHasBeenSet(false)
{
}

Aws::String BatchGetQueryExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryExecutionIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queryExecutionIdsJsonList(m_queryExecutionIds.size());
   for(unsigned queryExecutionIdsIndex = 0; queryExecutionIdsIndex < queryExecutionIdsJsonList.GetLength(); ++queryExecutionIdsIndex)
   {
     queryExecutionIdsJsonList[queryExecutionIdsIndex].AsString(m_queryExecutionIds[queryExecutionIdsIndex]);
   }
   payload.WithArray("QueryExecutionIds", std::move(queryExecutionIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetQueryExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.BatchGetQueryExecution"));
  return headers;

}




