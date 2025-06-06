﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/UpdateWorkspaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWorkspaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountAccessTypeHasBeenSet)
  {
   payload.WithString("accountAccessType", AccountAccessTypeMapper::GetNameForAccountAccessType(m_accountAccessType));
  }

  if(m_networkAccessControlHasBeenSet)
  {
   payload.WithObject("networkAccessControl", m_networkAccessControl.Jsonize());

  }

  if(m_organizationRoleNameHasBeenSet)
  {
   payload.WithString("organizationRoleName", m_organizationRoleName);

  }

  if(m_permissionTypeHasBeenSet)
  {
   payload.WithString("permissionType", PermissionTypeMapper::GetNameForPermissionType(m_permissionType));
  }

  if(m_removeNetworkAccessConfigurationHasBeenSet)
  {
   payload.WithBool("removeNetworkAccessConfiguration", m_removeNetworkAccessConfiguration);

  }

  if(m_removeVpcConfigurationHasBeenSet)
  {
   payload.WithBool("removeVpcConfiguration", m_removeVpcConfiguration);

  }

  if(m_stackSetNameHasBeenSet)
  {
   payload.WithString("stackSetName", m_stackSetName);

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("vpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  if(m_workspaceDataSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workspaceDataSourcesJsonList(m_workspaceDataSources.size());
   for(unsigned workspaceDataSourcesIndex = 0; workspaceDataSourcesIndex < workspaceDataSourcesJsonList.GetLength(); ++workspaceDataSourcesIndex)
   {
     workspaceDataSourcesJsonList[workspaceDataSourcesIndex].AsString(DataSourceTypeMapper::GetNameForDataSourceType(m_workspaceDataSources[workspaceDataSourcesIndex]));
   }
   payload.WithArray("workspaceDataSources", std::move(workspaceDataSourcesJsonList));

  }

  if(m_workspaceDescriptionHasBeenSet)
  {
   payload.WithString("workspaceDescription", m_workspaceDescription);

  }

  if(m_workspaceNameHasBeenSet)
  {
   payload.WithString("workspaceName", m_workspaceName);

  }

  if(m_workspaceNotificationDestinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workspaceNotificationDestinationsJsonList(m_workspaceNotificationDestinations.size());
   for(unsigned workspaceNotificationDestinationsIndex = 0; workspaceNotificationDestinationsIndex < workspaceNotificationDestinationsJsonList.GetLength(); ++workspaceNotificationDestinationsIndex)
   {
     workspaceNotificationDestinationsJsonList[workspaceNotificationDestinationsIndex].AsString(NotificationDestinationTypeMapper::GetNameForNotificationDestinationType(m_workspaceNotificationDestinations[workspaceNotificationDestinationsIndex]));
   }
   payload.WithArray("workspaceNotificationDestinations", std::move(workspaceNotificationDestinationsJsonList));

  }

  if(m_workspaceOrganizationalUnitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workspaceOrganizationalUnitsJsonList(m_workspaceOrganizationalUnits.size());
   for(unsigned workspaceOrganizationalUnitsIndex = 0; workspaceOrganizationalUnitsIndex < workspaceOrganizationalUnitsJsonList.GetLength(); ++workspaceOrganizationalUnitsIndex)
   {
     workspaceOrganizationalUnitsJsonList[workspaceOrganizationalUnitsIndex].AsString(m_workspaceOrganizationalUnits[workspaceOrganizationalUnitsIndex]);
   }
   payload.WithArray("workspaceOrganizationalUnits", std::move(workspaceOrganizationalUnitsJsonList));

  }

  if(m_workspaceRoleArnHasBeenSet)
  {
   payload.WithString("workspaceRoleArn", m_workspaceRoleArn);

  }

  return payload.View().WriteReadable();
}




