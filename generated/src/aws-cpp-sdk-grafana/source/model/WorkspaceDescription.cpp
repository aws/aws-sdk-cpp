/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/WorkspaceDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

WorkspaceDescription::WorkspaceDescription() : 
    m_accountAccessType(AccountAccessType::NOT_SET),
    m_accountAccessTypeHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_dataSourcesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_freeTrialConsumed(false),
    m_freeTrialConsumedHasBeenSet(false),
    m_freeTrialExpirationHasBeenSet(false),
    m_grafanaVersionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_licenseExpirationHasBeenSet(false),
    m_licenseType(LicenseType::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_modifiedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_notificationDestinationsHasBeenSet(false),
    m_organizationRoleNameHasBeenSet(false),
    m_organizationalUnitsHasBeenSet(false),
    m_permissionType(PermissionType::NOT_SET),
    m_permissionTypeHasBeenSet(false),
    m_stackSetNameHasBeenSet(false),
    m_status(WorkspaceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_workspaceRoleArnHasBeenSet(false)
{
}

WorkspaceDescription::WorkspaceDescription(JsonView jsonValue) : 
    m_accountAccessType(AccountAccessType::NOT_SET),
    m_accountAccessTypeHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_dataSourcesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_freeTrialConsumed(false),
    m_freeTrialConsumedHasBeenSet(false),
    m_freeTrialExpirationHasBeenSet(false),
    m_grafanaVersionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_licenseExpirationHasBeenSet(false),
    m_licenseType(LicenseType::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_modifiedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_notificationDestinationsHasBeenSet(false),
    m_organizationRoleNameHasBeenSet(false),
    m_organizationalUnitsHasBeenSet(false),
    m_permissionType(PermissionType::NOT_SET),
    m_permissionTypeHasBeenSet(false),
    m_stackSetNameHasBeenSet(false),
    m_status(WorkspaceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_workspaceRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspaceDescription& WorkspaceDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountAccessType"))
  {
    m_accountAccessType = AccountAccessTypeMapper::GetAccountAccessTypeForName(jsonValue.GetString("accountAccessType"));

    m_accountAccessTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authentication"))
  {
    m_authentication = jsonValue.GetObject("authentication");

    m_authenticationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSources"))
  {
    Aws::Utils::Array<JsonView> dataSourcesJsonList = jsonValue.GetArray("dataSources");
    for(unsigned dataSourcesIndex = 0; dataSourcesIndex < dataSourcesJsonList.GetLength(); ++dataSourcesIndex)
    {
      m_dataSources.push_back(DataSourceTypeMapper::GetDataSourceTypeForName(dataSourcesJsonList[dataSourcesIndex].AsString()));
    }
    m_dataSourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("freeTrialConsumed"))
  {
    m_freeTrialConsumed = jsonValue.GetBool("freeTrialConsumed");

    m_freeTrialConsumedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("freeTrialExpiration"))
  {
    m_freeTrialExpiration = jsonValue.GetDouble("freeTrialExpiration");

    m_freeTrialExpirationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("grafanaVersion"))
  {
    m_grafanaVersion = jsonValue.GetString("grafanaVersion");

    m_grafanaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseExpiration"))
  {
    m_licenseExpiration = jsonValue.GetDouble("licenseExpiration");

    m_licenseExpirationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseType"))
  {
    m_licenseType = LicenseTypeMapper::GetLicenseTypeForName(jsonValue.GetString("licenseType"));

    m_licenseTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modified"))
  {
    m_modified = jsonValue.GetDouble("modified");

    m_modifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notificationDestinations"))
  {
    Aws::Utils::Array<JsonView> notificationDestinationsJsonList = jsonValue.GetArray("notificationDestinations");
    for(unsigned notificationDestinationsIndex = 0; notificationDestinationsIndex < notificationDestinationsJsonList.GetLength(); ++notificationDestinationsIndex)
    {
      m_notificationDestinations.push_back(NotificationDestinationTypeMapper::GetNotificationDestinationTypeForName(notificationDestinationsJsonList[notificationDestinationsIndex].AsString()));
    }
    m_notificationDestinationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("organizationRoleName"))
  {
    m_organizationRoleName = jsonValue.GetString("organizationRoleName");

    m_organizationRoleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("organizationalUnits"))
  {
    Aws::Utils::Array<JsonView> organizationalUnitsJsonList = jsonValue.GetArray("organizationalUnits");
    for(unsigned organizationalUnitsIndex = 0; organizationalUnitsIndex < organizationalUnitsJsonList.GetLength(); ++organizationalUnitsIndex)
    {
      m_organizationalUnits.push_back(organizationalUnitsJsonList[organizationalUnitsIndex].AsString());
    }
    m_organizationalUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("permissionType"))
  {
    m_permissionType = PermissionTypeMapper::GetPermissionTypeForName(jsonValue.GetString("permissionType"));

    m_permissionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stackSetName"))
  {
    m_stackSetName = jsonValue.GetString("stackSetName");

    m_stackSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkspaceStatusMapper::GetWorkspaceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("vpcConfiguration");

    m_vpcConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workspaceRoleArn"))
  {
    m_workspaceRoleArn = jsonValue.GetString("workspaceRoleArn");

    m_workspaceRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkspaceDescription::Jsonize() const
{
  JsonValue payload;

  if(m_accountAccessTypeHasBeenSet)
  {
   payload.WithString("accountAccessType", AccountAccessTypeMapper::GetNameForAccountAccessType(m_accountAccessType));
  }

  if(m_authenticationHasBeenSet)
  {
   payload.WithObject("authentication", m_authentication.Jsonize());

  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_dataSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSourcesJsonList(m_dataSources.size());
   for(unsigned dataSourcesIndex = 0; dataSourcesIndex < dataSourcesJsonList.GetLength(); ++dataSourcesIndex)
   {
     dataSourcesJsonList[dataSourcesIndex].AsString(DataSourceTypeMapper::GetNameForDataSourceType(m_dataSources[dataSourcesIndex]));
   }
   payload.WithArray("dataSources", std::move(dataSourcesJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_freeTrialConsumedHasBeenSet)
  {
   payload.WithBool("freeTrialConsumed", m_freeTrialConsumed);

  }

  if(m_freeTrialExpirationHasBeenSet)
  {
   payload.WithDouble("freeTrialExpiration", m_freeTrialExpiration.SecondsWithMSPrecision());
  }

  if(m_grafanaVersionHasBeenSet)
  {
   payload.WithString("grafanaVersion", m_grafanaVersion);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_licenseExpirationHasBeenSet)
  {
   payload.WithDouble("licenseExpiration", m_licenseExpiration.SecondsWithMSPrecision());
  }

  if(m_licenseTypeHasBeenSet)
  {
   payload.WithString("licenseType", LicenseTypeMapper::GetNameForLicenseType(m_licenseType));
  }

  if(m_modifiedHasBeenSet)
  {
   payload.WithDouble("modified", m_modified.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_notificationDestinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationDestinationsJsonList(m_notificationDestinations.size());
   for(unsigned notificationDestinationsIndex = 0; notificationDestinationsIndex < notificationDestinationsJsonList.GetLength(); ++notificationDestinationsIndex)
   {
     notificationDestinationsJsonList[notificationDestinationsIndex].AsString(NotificationDestinationTypeMapper::GetNameForNotificationDestinationType(m_notificationDestinations[notificationDestinationsIndex]));
   }
   payload.WithArray("notificationDestinations", std::move(notificationDestinationsJsonList));

  }

  if(m_organizationRoleNameHasBeenSet)
  {
   payload.WithString("organizationRoleName", m_organizationRoleName);

  }

  if(m_organizationalUnitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationalUnitsJsonList(m_organizationalUnits.size());
   for(unsigned organizationalUnitsIndex = 0; organizationalUnitsIndex < organizationalUnitsJsonList.GetLength(); ++organizationalUnitsIndex)
   {
     organizationalUnitsJsonList[organizationalUnitsIndex].AsString(m_organizationalUnits[organizationalUnitsIndex]);
   }
   payload.WithArray("organizationalUnits", std::move(organizationalUnitsJsonList));

  }

  if(m_permissionTypeHasBeenSet)
  {
   payload.WithString("permissionType", PermissionTypeMapper::GetNameForPermissionType(m_permissionType));
  }

  if(m_stackSetNameHasBeenSet)
  {
   payload.WithString("stackSetName", m_stackSetName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorkspaceStatusMapper::GetNameForWorkspaceStatus(m_status));
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

  if(m_workspaceRoleArnHasBeenSet)
  {
   payload.WithString("workspaceRoleArn", m_workspaceRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
