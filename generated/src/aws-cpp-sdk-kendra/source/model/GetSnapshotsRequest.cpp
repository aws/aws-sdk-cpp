/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/GetSnapshotsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSnapshotsRequest::GetSnapshotsRequest() : 
    m_indexIdHasBeenSet(false),
    m_interval(Interval::NOT_SET),
    m_intervalHasBeenSet(false),
    m_metricType(MetricType::NOT_SET),
    m_metricTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetSnapshotsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_intervalHasBeenSet)
  {
   payload.WithString("Interval", IntervalMapper::GetNameForInterval(m_interval));
  }

  if(m_metricTypeHasBeenSet)
  {
   payload.WithString("MetricType", MetricTypeMapper::GetNameForMetricType(m_metricType));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSnapshotsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.GetSnapshots"));
  return headers;

}




