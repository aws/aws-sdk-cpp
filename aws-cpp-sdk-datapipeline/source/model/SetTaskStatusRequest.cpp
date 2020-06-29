/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/SetTaskStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetTaskStatusRequest::SetTaskStatusRequest() : 
    m_taskIdHasBeenSet(false),
    m_taskStatus(TaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false),
    m_errorIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorStackTraceHasBeenSet(false)
{
}

Aws::String SetTaskStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_taskStatusHasBeenSet)
  {
   payload.WithString("taskStatus", TaskStatusMapper::GetNameForTaskStatus(m_taskStatus));
  }

  if(m_errorIdHasBeenSet)
  {
   payload.WithString("errorId", m_errorId);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_errorStackTraceHasBeenSet)
  {
   payload.WithString("errorStackTrace", m_errorStackTrace);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetTaskStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.SetTaskStatus"));
  return headers;

}




