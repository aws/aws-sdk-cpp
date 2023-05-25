/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/ListFHIRImportJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListFHIRImportJobsRequest::ListFHIRImportJobsRequest() : 
    m_datastoreIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_submittedBeforeHasBeenSet(false),
    m_submittedAfterHasBeenSet(false)
{
}

Aws::String ListFHIRImportJobsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datastoreIdHasBeenSet)
  {
   payload.WithString("DatastoreId", m_datastoreId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("JobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  if(m_submittedBeforeHasBeenSet)
  {
   payload.WithDouble("SubmittedBefore", m_submittedBefore.SecondsWithMSPrecision());
  }

  if(m_submittedAfterHasBeenSet)
  {
   payload.WithDouble("SubmittedAfter", m_submittedAfter.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListFHIRImportJobsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "HealthLake.ListFHIRImportJobs"));
  return headers;

}




