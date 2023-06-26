/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ListQueriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListQueriesRequest::ListQueriesRequest() : 
    m_eventDataStoreHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_queryStatus(QueryStatus::NOT_SET),
    m_queryStatusHasBeenSet(false)
{
}

Aws::String ListQueriesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventDataStoreHasBeenSet)
  {
   payload.WithString("EventDataStore", m_eventDataStore);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_queryStatusHasBeenSet)
  {
   payload.WithString("QueryStatus", QueryStatusMapper::GetNameForQueryStatus(m_queryStatus));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListQueriesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.ListQueries"));
  return headers;

}




