/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BatchGetCommandExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetCommandExecutionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sandboxIdHasBeenSet)
  {
   payload.WithString("sandboxId", m_sandboxId);

  }

  if(m_commandExecutionIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandExecutionIdsJsonList(m_commandExecutionIds.size());
   for(unsigned commandExecutionIdsIndex = 0; commandExecutionIdsIndex < commandExecutionIdsJsonList.GetLength(); ++commandExecutionIdsIndex)
   {
     commandExecutionIdsJsonList[commandExecutionIdsIndex].AsString(m_commandExecutionIds[commandExecutionIdsIndex]);
   }
   payload.WithArray("commandExecutionIds", std::move(commandExecutionIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetCommandExecutionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.BatchGetCommandExecutions"));
  return headers;

}




