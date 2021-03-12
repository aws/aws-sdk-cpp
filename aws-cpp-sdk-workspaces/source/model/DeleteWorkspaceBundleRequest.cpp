/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DeleteWorkspaceBundleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteWorkspaceBundleRequest::DeleteWorkspaceBundleRequest() : 
    m_bundleIdHasBeenSet(false)
{
}

Aws::String DeleteWorkspaceBundleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("BundleId", m_bundleId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteWorkspaceBundleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DeleteWorkspaceBundle"));
  return headers;

}




