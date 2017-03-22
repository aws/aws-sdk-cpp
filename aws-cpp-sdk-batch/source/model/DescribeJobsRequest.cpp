/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/batch/model/DescribeJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeJobsRequest::DescribeJobsRequest() : 
    m_jobsHasBeenSet(false)
{
}

Aws::String DescribeJobsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobsHasBeenSet)
  {
   Array<JsonValue> jobsJsonList(m_jobs.size());
   for(unsigned jobsIndex = 0; jobsIndex < jobsJsonList.GetLength(); ++jobsIndex)
   {
     jobsJsonList[jobsIndex].AsString(m_jobs[jobsIndex]);
   }
   payload.WithArray("jobs", std::move(jobsJsonList));

  }

  return payload.WriteReadable();
}




