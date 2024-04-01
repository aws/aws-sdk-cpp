/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateJobRequest::UpdateJobRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_farmIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_lifecycleStatus(UpdateJobLifecycleStatus::NOT_SET),
    m_lifecycleStatusHasBeenSet(false),
    m_maxFailedTasksCount(0),
    m_maxFailedTasksCountHasBeenSet(false),
    m_maxRetriesPerTask(0),
    m_maxRetriesPerTaskHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_targetTaskRunStatus(JobTargetTaskRunStatus::NOT_SET),
    m_targetTaskRunStatusHasBeenSet(false)
{
}

Aws::String UpdateJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lifecycleStatusHasBeenSet)
  {
   payload.WithString("lifecycleStatus", UpdateJobLifecycleStatusMapper::GetNameForUpdateJobLifecycleStatus(m_lifecycleStatus));
  }

  if(m_maxFailedTasksCountHasBeenSet)
  {
   payload.WithInteger("maxFailedTasksCount", m_maxFailedTasksCount);

  }

  if(m_maxRetriesPerTaskHasBeenSet)
  {
   payload.WithInteger("maxRetriesPerTask", m_maxRetriesPerTask);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_targetTaskRunStatusHasBeenSet)
  {
   payload.WithString("targetTaskRunStatus", JobTargetTaskRunStatusMapper::GetNameForJobTargetTaskRunStatus(m_targetTaskRunStatus));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




