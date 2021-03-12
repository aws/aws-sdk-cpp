/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/UpdateWorkspaceBundleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWorkspaceBundleRequest::UpdateWorkspaceBundleRequest() : 
    m_bundleIdHasBeenSet(false),
    m_imageIdHasBeenSet(false)
{
}

Aws::String UpdateWorkspaceBundleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("BundleId", m_bundleId);

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("ImageId", m_imageId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateWorkspaceBundleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.UpdateWorkspaceBundle"));
  return headers;

}




