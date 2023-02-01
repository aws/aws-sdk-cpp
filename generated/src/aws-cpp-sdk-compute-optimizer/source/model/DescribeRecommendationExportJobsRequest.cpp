/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/DescribeRecommendationExportJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRecommendationExportJobsRequest::DescribeRecommendationExportJobsRequest() : 
    m_jobIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeRecommendationExportJobsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobIdsJsonList(m_jobIds.size());
   for(unsigned jobIdsIndex = 0; jobIdsIndex < jobIdsJsonList.GetLength(); ++jobIdsIndex)
   {
     jobIdsJsonList[jobIdsIndex].AsString(m_jobIds[jobIdsIndex]);
   }
   payload.WithArray("jobIds", std::move(jobIdsJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRecommendationExportJobsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerService.DescribeRecommendationExportJobs"));
  return headers;

}




