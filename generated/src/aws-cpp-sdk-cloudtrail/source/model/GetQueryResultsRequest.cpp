/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GetQueryResultsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetQueryResultsRequest::GetQueryResultsRequest() : 
    m_queryIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxQueryResults(0),
    m_maxQueryResultsHasBeenSet(false)
{
}

Aws::String GetQueryResultsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("QueryId", m_queryId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxQueryResultsHasBeenSet)
  {
   payload.WithInteger("MaxQueryResults", m_maxQueryResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetQueryResultsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.GetQueryResults"));
  return headers;

}




