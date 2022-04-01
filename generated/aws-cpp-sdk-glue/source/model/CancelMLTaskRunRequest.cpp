/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CancelMLTaskRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelMLTaskRunRequest::CancelMLTaskRunRequest() : 
    m_transformIdHasBeenSet(false),
    m_taskRunIdHasBeenSet(false)
{
}

Aws::String CancelMLTaskRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transformIdHasBeenSet)
  {
   payload.WithString("TransformId", m_transformId);

  }

  if(m_taskRunIdHasBeenSet)
  {
   payload.WithString("TaskRunId", m_taskRunId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelMLTaskRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CancelMLTaskRun"));
  return headers;

}




