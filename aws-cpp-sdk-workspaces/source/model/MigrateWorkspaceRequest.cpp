/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/MigrateWorkspaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

MigrateWorkspaceRequest::MigrateWorkspaceRequest() : 
    m_sourceWorkspaceIdHasBeenSet(false),
    m_bundleIdHasBeenSet(false)
{
}

Aws::String MigrateWorkspaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceWorkspaceIdHasBeenSet)
  {
   payload.WithString("SourceWorkspaceId", m_sourceWorkspaceId);

  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("BundleId", m_bundleId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection MigrateWorkspaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.MigrateWorkspace"));
  return headers;

}




