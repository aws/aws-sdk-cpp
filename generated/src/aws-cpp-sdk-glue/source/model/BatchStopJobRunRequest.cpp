/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchStopJobRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchStopJobRunRequest::BatchStopJobRunRequest() : 
    m_jobNameHasBeenSet(false),
    m_jobRunIdsHasBeenSet(false)
{
}

Aws::String BatchStopJobRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobRunIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobRunIdsJsonList(m_jobRunIds.size());
   for(unsigned jobRunIdsIndex = 0; jobRunIdsIndex < jobRunIdsJsonList.GetLength(); ++jobRunIdsIndex)
   {
     jobRunIdsJsonList[jobRunIdsIndex].AsString(m_jobRunIds[jobRunIdsIndex]);
   }
   payload.WithArray("JobRunIds", std::move(jobRunIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchStopJobRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchStopJobRun"));
  return headers;

}




