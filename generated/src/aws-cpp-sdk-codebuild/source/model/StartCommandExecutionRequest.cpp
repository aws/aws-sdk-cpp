/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/StartCommandExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartCommandExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sandboxIdHasBeenSet)
  {
   payload.WithString("sandboxId", m_sandboxId);

  }

  if(m_commandHasBeenSet)
  {
   payload.WithString("command", m_command);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CommandTypeMapper::GetNameForCommandType(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartCommandExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.StartCommandExecution"));
  return headers;

}




