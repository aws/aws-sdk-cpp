/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListTrainingJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTrainingJobsRequest::ListTrainingJobsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_lastModifiedTimeAfterHasBeenSet(false),
    m_lastModifiedTimeBeforeHasBeenSet(false),
    m_nameContainsHasBeenSet(false),
    m_statusEquals(TrainingJobStatus::NOT_SET),
    m_statusEqualsHasBeenSet(false),
    m_sortBy(SortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_warmPoolStatusEquals(WarmPoolResourceStatus::NOT_SET),
    m_warmPoolStatusEqualsHasBeenSet(false)
{
}

Aws::String ListTrainingJobsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeAfterHasBeenSet)
  {
   payload.WithDouble("LastModifiedTimeAfter", m_lastModifiedTimeAfter.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeBeforeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTimeBefore", m_lastModifiedTimeBefore.SecondsWithMSPrecision());
  }

  if(m_nameContainsHasBeenSet)
  {
   payload.WithString("NameContains", m_nameContains);

  }

  if(m_statusEqualsHasBeenSet)
  {
   payload.WithString("StatusEquals", TrainingJobStatusMapper::GetNameForTrainingJobStatus(m_statusEquals));
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", SortByMapper::GetNameForSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_warmPoolStatusEqualsHasBeenSet)
  {
   payload.WithString("WarmPoolStatusEquals", WarmPoolResourceStatusMapper::GetNameForWarmPoolResourceStatus(m_warmPoolStatusEquals));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListTrainingJobsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListTrainingJobs"));
  return headers;

}




