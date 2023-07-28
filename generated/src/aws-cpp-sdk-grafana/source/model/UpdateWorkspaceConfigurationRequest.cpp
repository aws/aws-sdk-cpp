/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/UpdateWorkspaceConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWorkspaceConfigurationRequest::UpdateWorkspaceConfigurationRequest() : 
    m_configurationHasBeenSet(false),
    m_grafanaVersionHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String UpdateWorkspaceConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithString("configuration", m_configuration);

  }

  if(m_grafanaVersionHasBeenSet)
  {
   payload.WithString("grafanaVersion", m_grafanaVersion);

  }

  return payload.View().WriteReadable();
}




