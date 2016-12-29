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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SetTaskStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.SetTaskStatus"));
  return headers;

}



