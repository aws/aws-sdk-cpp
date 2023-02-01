/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/CreateWorkspaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkspaceRequest::CreateWorkspaceRequest() : 
    m_accountAccessType(AccountAccessType::NOT_SET),
    m_accountAccessTypeHasBeenSet(false),
    m_authenticationProvidersHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_configurationHasBeenSet(false),
    m_organizationRoleNameHasBeenSet(false),
    m_permissionType(PermissionType::NOT_SET),
    m_permissionTypeHasBeenSet(false),
    m_stackSetNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_workspaceDataSourcesHasBeenSet(false),
    m_workspaceDescriptionHasBeenSet(false),
    m_workspaceNameHasBeenSet(false),
    m_workspaceNotificationDestinationsHasBeenSet(false),
    m_workspaceOrganizationalUnitsHasBeenSet(false),
    m_workspaceRoleArnHasBeenSet(false)
{
}

Aws::String CreateWorkspaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountAccessTypeHasBeenSet)
  {
   payload.WithString("accountAccessType", AccountAccessTypeMapper::GetNameForAccountAccessType(m_accountAccessType));
  }

  if(m_authenticationProvidersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authenticationProvidersJsonList(m_authenticationProviders.size());
   for(unsigned authenticationProvidersIndex = 0; authenticationProvidersIndex < authenticationProvidersJsonList.GetLength(); ++authenticationProvidersIndex)
   {
     authenticationProvidersJsonList[authenticationProvidersIndex].AsString(AuthenticationProviderTypesMapper::GetNameForAuthenticationProviderTypes(m_authenticationProviders[authenticationProvidersIndex]));
   }
   payload.WithArray("authenticationProviders", std::move(authenticationProvidersJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithString("configuration", m_configuration);

  }

  if(m_organizationRoleNameHasBeenSet)
  {
   payload.WithString("organizationRoleName", m_organizationRoleName);

  }

  if(m_permissionTypeHasBeenSet)
  {
   payload.WithString("permissionType", PermissionTypeMapper::GetNameForPermissionType(m_permissionType));
  }

  if(m_stackSetNameHasBeenSet)
  {
   payload.WithString("stackSetName", m_stackSetName);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

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




