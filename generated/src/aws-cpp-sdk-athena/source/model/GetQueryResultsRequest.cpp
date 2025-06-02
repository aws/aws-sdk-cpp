/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/GetQueryResultsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetQueryResultsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryExecutionIdHasBeenSet)
  {
   payload.WithString("QueryExecutionId", m_queryExecutionId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_queryResultTypeHasBeenSet)
  {
   payload.WithString("QueryResultType", QueryResultTypeMapper::GetNameForQueryResultType(m_queryResultType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetQueryResultsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.GetQueryResults"));
  return headers;

}




