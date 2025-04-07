/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/StartSandboxRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartSandboxRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("idempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartSandboxRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.StartSandbox"));
  return headers;

}




