/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/DescribeServiceUpdatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeServiceUpdatesRequest::DescribeServiceUpdatesRequest() : 
    m_serviceUpdateNameHasBeenSet(false),
    m_clusterNamesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeServiceUpdatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceUpdateNameHasBeenSet)
  {
   payload.WithString("ServiceUpdateName", m_serviceUpdateName);

  }

  if(m_clusterNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clusterNamesJsonList(m_clusterNames.size());
   for(unsigned clusterNamesIndex = 0; clusterNamesIndex < clusterNamesJsonList.GetLength(); ++clusterNamesIndex)
   {
     clusterNamesJsonList[clusterNamesIndex].AsString(m_clusterNames[clusterNamesIndex]);
   }
   payload.WithArray("ClusterNames", std::move(clusterNamesJsonList));

  }

  if(m_statusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusJsonList(m_status.size());
   for(unsigned statusIndex = 0; statusIndex < statusJsonList.GetLength(); ++statusIndex)
   {
     statusJsonList[statusIndex].AsString(ServiceUpdateStatusMapper::GetNameForServiceUpdateStatus(m_status[statusIndex]));
   }
   payload.WithArray("Status", std::move(statusJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeServiceUpdatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.DescribeServiceUpdates"));
  return headers;

}




