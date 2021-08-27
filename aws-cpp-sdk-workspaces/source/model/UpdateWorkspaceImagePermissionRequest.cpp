/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/UpdateWorkspaceImagePermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWorkspaceImagePermissionRequest::UpdateWorkspaceImagePermissionRequest() : 
    m_imageIdHasBeenSet(false),
    m_allowCopyImage(false),
    m_allowCopyImageHasBeenSet(false),
    m_sharedAccountIdHasBeenSet(false)
{
}

Aws::String UpdateWorkspaceImagePermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("ImageId", m_imageId);

  }

  if(m_allowCopyImageHasBeenSet)
  {
   payload.WithBool("AllowCopyImage", m_allowCopyImage);

  }

  if(m_sharedAccountIdHasBeenSet)
  {
   payload.WithString("SharedAccountId", m_sharedAccountId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateWorkspaceImagePermissionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.UpdateWorkspaceImagePermission"));
  return headers;

}




