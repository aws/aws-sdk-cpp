/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/UpdateActionTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateActionTypeRequest::UpdateActionTypeRequest() : 
    m_actionTypeHasBeenSet(false)
{
}

Aws::String UpdateActionTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionTypeHasBeenSet)
  {
   payload.WithObject("actionType", m_actionType.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateActionTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.UpdateActionType"));
  return headers;

}




