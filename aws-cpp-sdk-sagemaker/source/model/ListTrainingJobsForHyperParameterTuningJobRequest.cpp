/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListTrainingJobsForHyperParameterTuningJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTrainingJobsForHyperParameterTuningJobRequest::ListTrainingJobsForHyperParameterTuningJobRequest() : 
    m_hyperParameterTuningJobNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_statusEquals(TrainingJobStatus::NOT_SET),
    m_statusEqualsHasBeenSet(false),
    m_sortBy(TrainingJobSortByOptions::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

Aws::String ListTrainingJobsForHyperParameterTuningJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hyperParameterTuningJobNameHasBeenSet)
  {
   payload.WithString("HyperParameterTuningJobName", m_hyperParameterTuningJobName);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_statusEqualsHasBeenSet)
  {
   payload.WithString("StatusEquals", TrainingJobStatusMapper::GetNameForTrainingJobStatus(m_statusEquals));
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", TrainingJobSortByOptionsMapper::GetNameForTrainingJobSortByOptions(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListTrainingJobsForHyperParameterTuningJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListTrainingJobsForHyperParameterTuningJob"));
  return headers;

}




