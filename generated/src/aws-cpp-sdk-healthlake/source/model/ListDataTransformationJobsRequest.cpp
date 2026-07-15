/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/ListDataTransformationJobsRequest.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListDataTransformationJobsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_jobStatusHasBeenSet) {
    payload.WithString("JobStatus", TransformationJobStatusMapper::GetNameForTransformationJobStatus(m_jobStatus));
  }

  if (m_jobNameHasBeenSet) {
    payload.WithString("JobName", m_jobName);
  }

  if (m_submittedAfterHasBeenSet) {
    payload.WithDouble("SubmittedAfter", m_submittedAfter.SecondsWithMSPrecision());
  }

  if (m_submittedBeforeHasBeenSet) {
    payload.WithDouble("SubmittedBefore", m_submittedBefore.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListDataTransformationJobsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "HealthLake.ListDataTransformationJobs"));
  return headers;
}
