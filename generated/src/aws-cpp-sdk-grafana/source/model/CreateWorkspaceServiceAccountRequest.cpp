/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/grafana/model/CreateWorkspaceServiceAccountRequest.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWorkspaceServiceAccountRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_grafanaRoleHasBeenSet) {
    payload.WithString("grafanaRole", RoleMapper::GetNameForRole(m_grafanaRole));
  }

  return payload.View().WriteReadable();
}
