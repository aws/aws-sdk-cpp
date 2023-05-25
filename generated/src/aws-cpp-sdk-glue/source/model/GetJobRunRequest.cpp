/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetJobRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetJobRunRequest::GetJobRunRequest() : 
    m_jobNameHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_predecessorsIncluded(false),
    m_predecessorsIncludedHasBeenSet(false)
{
}

Aws::String GetJobRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("RunId", m_runId);

  }

  if(m_predecessorsIncludedHasBeenSet)
  {
   payload.WithBool("PredecessorsIncluded", m_predecessorsIncluded);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetJobRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetJobRun"));
  return headers;

}




