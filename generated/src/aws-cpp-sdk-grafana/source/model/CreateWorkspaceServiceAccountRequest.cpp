/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/CreateWorkspaceServiceAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkspaceServiceAccountRequest::CreateWorkspaceServiceAccountRequest() : 
    m_grafanaRole(Role::NOT_SET),
    m_grafanaRoleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String CreateWorkspaceServiceAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_grafanaRoleHasBeenSet)
  {
   payload.WithString("grafanaRole", RoleMapper::GetNameForRole(m_grafanaRole));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload.View().WriteReadable();
}




