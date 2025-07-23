/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StartJobRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartJobRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobRunQueuingEnabledHasBeenSet)
  {
   payload.WithBool("JobRunQueuingEnabled", m_jobRunQueuingEnabled);

  }

  if(m_jobRunIdHasBeenSet)
  {
   payload.WithString("JobRunId", m_jobRunId);

  }

  if(m_argumentsHasBeenSet)
  {
   JsonValue argumentsJsonMap;
   for(auto& argumentsItem : m_arguments)
   {
     argumentsJsonMap.WithString(argumentsItem.first, argumentsItem.second);
   }
   payload.WithObject("Arguments", std::move(argumentsJsonMap));

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithDouble("MaxCapacity", m_maxCapacity);

  }

  if(m_securityConfigurationHasBeenSet)
  {
   payload.WithString("SecurityConfiguration", m_securityConfiguration);

  }

  if(m_notificationPropertyHasBeenSet)
  {
   payload.WithObject("NotificationProperty", m_notificationProperty.Jsonize());

  }

  if(m_workerTypeHasBeenSet)
  {
   payload.WithString("WorkerType", WorkerTypeMapper::GetNameForWorkerType(m_workerType));
  }

  if(m_numberOfWorkersHasBeenSet)
  {
   payload.WithInteger("NumberOfWorkers", m_numberOfWorkers);

  }

  if(m_executionClassHasBeenSet)
  {
   payload.WithString("ExecutionClass", ExecutionClassMapper::GetNameForExecutionClass(m_executionClass));
  }

  if(m_executionRoleSessionPolicyHasBeenSet)
  {
   payload.WithString("ExecutionRoleSessionPolicy", m_executionRoleSessionPolicy);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartJobRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.StartJobRun"));
  return headers;

}




