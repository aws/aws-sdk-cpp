/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListModelCardExportJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListModelCardExportJobsRequest::ListModelCardExportJobsRequest() : 
    m_modelCardNameHasBeenSet(false),
    m_modelCardVersion(0),
    m_modelCardVersionHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_modelCardExportJobNameContainsHasBeenSet(false),
    m_statusEquals(ModelCardExportJobStatus::NOT_SET),
    m_statusEqualsHasBeenSet(false),
    m_sortBy(ModelCardExportJobSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(ModelCardExportJobSortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListModelCardExportJobsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelCardNameHasBeenSet)
  {
   payload.WithString("ModelCardName", m_modelCardName);

  }

  if(m_modelCardVersionHasBeenSet)
  {
   payload.WithInteger("ModelCardVersion", m_modelCardVersion);

  }

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if(m_modelCardExportJobNameContainsHasBeenSet)
  {
   payload.WithString("ModelCardExportJobNameContains", m_modelCardExportJobNameContains);

  }

  if(m_statusEqualsHasBeenSet)
  {
   payload.WithString("StatusEquals", ModelCardExportJobStatusMapper::GetNameForModelCardExportJobStatus(m_statusEquals));
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", ModelCardExportJobSortByMapper::GetNameForModelCardExportJobSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", ModelCardExportJobSortOrderMapper::GetNameForModelCardExportJobSortOrder(m_sortOrder));
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

Aws::Http::HeaderValueCollection ListModelCardExportJobsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListModelCardExportJobs"));
  return headers;

}




