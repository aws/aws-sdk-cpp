/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeStorageSystemResourceMetricsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeStorageSystemResourceMetricsRequest::DescribeStorageSystemResourceMetricsRequest() : 
    m_discoveryJobArnHasBeenSet(false),
    m_resourceType(DiscoveryResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeStorageSystemResourceMetricsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_discoveryJobArnHasBeenSet)
  {
   payload.WithString("DiscoveryJobArn", m_discoveryJobArn);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", DiscoveryResourceTypeMapper::GetNameForDiscoveryResourceType(m_resourceType));
  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
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

Aws::Http::HeaderValueCollection DescribeStorageSystemResourceMetricsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.DescribeStorageSystemResourceMetrics"));
  return headers;

}




