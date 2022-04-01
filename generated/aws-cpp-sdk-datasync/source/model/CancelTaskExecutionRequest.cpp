/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/CancelTaskExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelTaskExecutionRequest::CancelTaskExecutionRequest() : 
    m_taskExecutionArnHasBeenSet(false)
{
}

Aws::String CancelTaskExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskExecutionArnHasBeenSet)
  {
   payload.WithString("TaskExecutionArn", m_taskExecutionArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelTaskExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.CancelTaskExecution"));
  return headers;

}




