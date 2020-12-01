/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListPipelineExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListPipelineExecutionsRequest::ListPipelineExecutionsRequest() : 
    m_pipelineNameHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_sortBy(SortPipelineExecutionsBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListPipelineExecutionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineNameHasBeenSet)
  {
   payload.WithString("PipelineName", m_pipelineName);

  }

  if(m_createdAfterHasBeenSet)
  {
   payload.WithDouble("CreatedAfter", m_createdAfter.SecondsWithMSPrecision());
  }

  if(m_createdBeforeHasBeenSet)
  {
   payload.WithDouble("CreatedBefore", m_createdBefore.SecondsWithMSPrecision());
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", SortPipelineExecutionsByMapper::GetNameForSortPipelineExecutionsBy(m_sortBy));
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListPipelineExecutionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListPipelineExecutions"));
  return headers;

}




