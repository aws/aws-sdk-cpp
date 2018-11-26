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

#include <aws/amplify/model/StartJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartJobRequest::StartJobRequest() : 
    m_appIdHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_jobReasonHasBeenSet(false),
    m_commitIdHasBeenSet(false),
    m_commitMessageHasBeenSet(false),
    m_commitTimeHasBeenSet(false)
{
}

Aws::String StartJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("jobType", JobTypeMapper::GetNameForJobType(m_jobType));
  }

  if(m_jobReasonHasBeenSet)
  {
   payload.WithString("jobReason", m_jobReason);

  }

  if(m_commitIdHasBeenSet)
  {
   payload.WithString("commitId", m_commitId);

  }

  if(m_commitMessageHasBeenSet)
  {
   payload.WithString("commitMessage", m_commitMessage);

  }

  if(m_commitTimeHasBeenSet)
  {
   payload.WithDouble("commitTime", m_commitTime.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}




