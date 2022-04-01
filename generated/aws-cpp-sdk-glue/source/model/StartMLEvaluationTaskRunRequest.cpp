/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StartMLEvaluationTaskRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMLEvaluationTaskRunRequest::StartMLEvaluationTaskRunRequest() : 
    m_transformIdHasBeenSet(false)
{
}

Aws::String StartMLEvaluationTaskRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transformIdHasBeenSet)
  {
   payload.WithString("TransformId", m_transformId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartMLEvaluationTaskRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.StartMLEvaluationTaskRun"));
  return headers;

}




