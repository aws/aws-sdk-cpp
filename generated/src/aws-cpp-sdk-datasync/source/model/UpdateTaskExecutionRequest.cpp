/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/UpdateTaskExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTaskExecutionRequest::UpdateTaskExecutionRequest() : 
    m_taskExecutionArnHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

Aws::String UpdateTaskExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskExecutionArnHasBeenSet)
  {
   payload.WithString("TaskExecutionArn", m_taskExecutionArn);

  }

  if(m_optionsHasBeenSet)
  {
   payload.WithObject("Options", m_options.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTaskExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.UpdateTaskExecution"));
  return headers;

}




