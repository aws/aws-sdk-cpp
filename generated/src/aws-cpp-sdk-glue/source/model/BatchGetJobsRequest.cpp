/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetJobsRequest::BatchGetJobsRequest() : 
    m_jobNamesHasBeenSet(false)
{
}

Aws::String BatchGetJobsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobNamesJsonList(m_jobNames.size());
   for(unsigned jobNamesIndex = 0; jobNamesIndex < jobNamesJsonList.GetLength(); ++jobNamesIndex)
   {
     jobNamesJsonList[jobNamesIndex].AsString(m_jobNames[jobNamesIndex]);
   }
   payload.WithArray("JobNames", std::move(jobNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetJobsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchGetJobs"));
  return headers;

}




