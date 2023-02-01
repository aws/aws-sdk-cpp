/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/RelationalDatabase.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

RelationalDatabase::RelationalDatabase() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_relationalDatabaseBlueprintIdHasBeenSet(false),
    m_relationalDatabaseBundleIdHasBeenSet(false),
    m_masterDatabaseNameHasBeenSet(false),
    m_hardwareHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_secondaryAvailabilityZoneHasBeenSet(false),
    m_backupRetentionEnabled(false),
    m_backupRetentionEnabledHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_latestRestorableTimeHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_masterEndpointHasBeenSet(false),
    m_pendingMaintenanceActionsHasBeenSet(false),
    m_caCertificateIdentifierHasBeenSet(false)
{
}

RelationalDatabase::RelationalDatabase(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_relationalDatabaseBlueprintIdHasBeenSet(false),
    m_relationalDatabaseBundleIdHasBeenSet(false),
    m_masterDatabaseNameHasBeenSet(false),
    m_hardwareHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_secondaryAvailabilityZoneHasBeenSet(false),
    m_backupRetentionEnabled(false),
    m_backupRetentionEnabledHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_latestRestorableTimeHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_masterEndpointHasBeenSet(false),
    m_pendingMaintenanceActionsHasBeenSet(false),
    m_caCertificateIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

RelationalDatabase& RelationalDatabase::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportCode"))
  {
    m_supportCode = jsonValue.GetString("supportCode");

    m_supportCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationalDatabaseBlueprintId"))
  {
    m_relationalDatabaseBlueprintId = jsonValue.GetString("relationalDatabaseBlueprintId");

    m_relationalDatabaseBlueprintIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationalDatabaseBundleId"))
  {
    m_relationalDatabaseBundleId = jsonValue.GetString("relationalDatabaseBundleId");

    m_relationalDatabaseBundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("masterDatabaseName"))
  {
    m_masterDatabaseName = jsonValue.GetString("masterDatabaseName");

    m_masterDatabaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hardware"))
  {
    m_hardware = jsonValue.GetObject("hardware");

    m_hardwareHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetString("state");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secondaryAvailabilityZone"))
  {
    m_secondaryAvailabilityZone = jsonValue.GetString("secondaryAvailabilityZone");

    m_secondaryAvailabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("backupRetentionEnabled"))
  {
    m_backupRetentionEnabled = jsonValue.GetBool("backupRetentionEnabled");

    m_backupRetentionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pendingModifiedValues"))
  {
    m_pendingModifiedValues = jsonValue.GetObject("pendingModifiedValues");

    m_pendingModifiedValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engine"))
  {
    m_engine = jsonValue.GetString("engine");

    m_engineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestRestorableTime"))
  {
    m_latestRestorableTime = jsonValue.GetDouble("latestRestorableTime");

    m_latestRestorableTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("masterUsername"))
  {
    m_masterUsername = jsonValue.GetString("masterUsername");

    m_masterUsernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameterApplyStatus"))
  {
    m_parameterApplyStatus = jsonValue.GetString("parameterApplyStatus");

    m_parameterApplyStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("preferredBackupWindow"))
  {
    m_preferredBackupWindow = jsonValue.GetString("preferredBackupWindow");

    m_preferredBackupWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("preferredMaintenanceWindow"))
  {
    m_preferredMaintenanceWindow = jsonValue.GetString("preferredMaintenanceWindow");

    m_preferredMaintenanceWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publiclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("publiclyAccessible");

    m_publiclyAccessibleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("masterEndpoint"))
  {
    m_masterEndpoint = jsonValue.GetObject("masterEndpoint");

    m_masterEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pendingMaintenanceActions"))
  {
    Aws::Utils::Array<JsonView> pendingMaintenanceActionsJsonList = jsonValue.GetArray("pendingMaintenanceActions");
    for(unsigned pendingMaintenanceActionsIndex = 0; pendingMaintenanceActionsIndex < pendingMaintenanceActionsJsonList.GetLength(); ++pendingMaintenanceActionsIndex)
    {
      m_pendingMaintenanceActions.push_back(pendingMaintenanceActionsJsonList[pendingMaintenanceActionsIndex].AsObject());
    }
    m_pendingMaintenanceActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("caCertificateIdentifier"))
  {
    m_caCertificateIdentifier = jsonValue.GetString("caCertificateIdentifier");

    m_caCertificateIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue RelationalDatabase::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_supportCodeHasBeenSet)
  {
   payload.WithString("supportCode", m_supportCode);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_relationalDatabaseBlueprintIdHasBeenSet)
  {
   payload.WithString("relationalDatabaseBlueprintId", m_relationalDatabaseBlueprintId);

  }

  if(m_relationalDatabaseBundleIdHasBeenSet)
  {
   payload.WithString("relationalDatabaseBundleId", m_relationalDatabaseBundleId);

  }

  if(m_masterDatabaseNameHasBeenSet)
  {
   payload.WithString("masterDatabaseName", m_masterDatabaseName);

  }

  if(m_hardwareHasBeenSet)
  {
   payload.WithObject("hardware", m_hardware.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", m_state);

  }

  if(m_secondaryAvailabilityZoneHasBeenSet)
  {
   payload.WithString("secondaryAvailabilityZone", m_secondaryAvailabilityZone);

  }

  if(m_backupRetentionEnabledHasBeenSet)
  {
   payload.WithBool("backupRetentionEnabled", m_backupRetentionEnabled);

  }

  if(m_pendingModifiedValuesHasBeenSet)
  {
   payload.WithObject("pendingModifiedValues", m_pendingModifiedValues.Jsonize());

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("engine", m_engine);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_latestRestorableTimeHasBeenSet)
  {
   payload.WithDouble("latestRestorableTime", m_latestRestorableTime.SecondsWithMSPrecision());
  }

  if(m_masterUsernameHasBeenSet)
  {
   payload.WithString("masterUsername", m_masterUsername);

  }

  if(m_parameterApplyStatusHasBeenSet)
  {
   payload.WithString("parameterApplyStatus", m_parameterApplyStatus);

  }

  if(m_preferredBackupWindowHasBeenSet)
  {
   payload.WithString("preferredBackupWindow", m_preferredBackupWindow);

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("preferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("publiclyAccessible", m_publiclyAccessible);

  }

  if(m_masterEndpointHasBeenSet)
  {
   payload.WithObject("masterEndpoint", m_masterEndpoint.Jsonize());

  }

  if(m_pendingMaintenanceActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pendingMaintenanceActionsJsonList(m_pendingMaintenanceActions.size());
   for(unsigned pendingMaintenanceActionsIndex = 0; pendingMaintenanceActionsIndex < pendingMaintenanceActionsJsonList.GetLength(); ++pendingMaintenanceActionsIndex)
   {
     pendingMaintenanceActionsJsonList[pendingMaintenanceActionsIndex].AsObject(m_pendingMaintenanceActions[pendingMaintenanceActionsIndex].Jsonize());
   }
   payload.WithArray("pendingMaintenanceActions", std::move(pendingMaintenanceActionsJsonList));

  }

  if(m_caCertificateIdentifierHasBeenSet)
  {
   payload.WithString("caCertificateIdentifier", m_caCertificateIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
