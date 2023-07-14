/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/UpdateConnectionAliasPermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConnectionAliasPermissionRequest::UpdateConnectionAliasPermissionRequest() : 
    m_aliasIdHasBeenSet(false),
    m_connectionAliasPermissionHasBeenSet(false)
{
}

Aws::String UpdateConnectionAliasPermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aliasIdHasBeenSet)
  {
   payload.WithString("AliasId", m_aliasId);

  }

  if(m_connectionAliasPermissionHasBeenSet)
  {
   payload.WithObject("ConnectionAliasPermission", m_connectionAliasPermission.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateConnectionAliasPermissionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.UpdateConnectionAliasPermission"));
  return headers;

}




