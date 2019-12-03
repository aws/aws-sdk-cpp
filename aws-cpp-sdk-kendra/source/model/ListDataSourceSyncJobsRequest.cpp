/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kendra/model/ListDataSourceSyncJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDataSourceSyncJobsRequest::ListDataSourceSyncJobsRequest() : 
    m_idHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_startTimeFilterHasBeenSet(false),
    m_statusFilter(DataSourceSyncJobStatus::NOT_SET),
    m_statusFilterHasBeenSet(false)
{
}

Aws::String ListDataSourceSyncJobsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_startTimeFilterHasBeenSet)
  {
   payload.WithObject("StartTimeFilter", m_startTimeFilter.Jsonize());

  }

  if(m_statusFilterHasBeenSet)
  {
   payload.WithString("StatusFilter", DataSourceSyncJobStatusMapper::GetNameForDataSourceSyncJobStatus(m_statusFilter));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListDataSourceSyncJobsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.ListDataSourceSyncJobs"));
  return headers;

}




