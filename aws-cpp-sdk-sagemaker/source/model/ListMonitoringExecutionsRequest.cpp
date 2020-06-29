/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListMonitoringExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListMonitoringExecutionsRequest::ListMonitoringExecutionsRequest() : 
    m_monitoringScheduleNameHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_sortBy(MonitoringExecutionSortKey::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_scheduledTimeBeforeHasBeenSet(false),
    m_scheduledTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_lastModifiedTimeBeforeHasBeenSet(false),
    m_lastModifiedTimeAfterHasBeenSet(false),
    m_statusEquals(ExecutionStatus::NOT_SET),
    m_statusEqualsHasBeenSet(false)
{
}

Aws::String ListMonitoringExecutionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_monitoringScheduleNameHasBeenSet)
  {
   payload.WithString("MonitoringScheduleName", m_monitoringScheduleName);

  }

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", MonitoringExecutionSortKeyMapper::GetNameForMonitoringExecutionSortKey(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_scheduledTimeBeforeHasBeenSet)
  {
   payload.WithDouble("ScheduledTimeBefore", m_scheduledTimeBefore.SecondsWithMSPrecision());
  }

  if(m_scheduledTimeAfterHasBeenSet)
  {
   payload.WithDouble("ScheduledTimeAfter", m_scheduledTimeAfter.SecondsWithMSPrecision());
  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeBeforeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTimeBefore", m_lastModifiedTimeBefore.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeAfterHasBeenSet)
  {
   payload.WithDouble("LastModifiedTimeAfter", m_lastModifiedTimeAfter.SecondsWithMSPrecision());
  }

  if(m_statusEqualsHasBeenSet)
  {
   payload.WithString("StatusEquals", ExecutionStatusMapper::GetNameForExecutionStatus(m_statusEquals));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListMonitoringExecutionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListMonitoringExecutions"));
  return headers;

}




