/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbClusterDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRdsDbClusterDetails::AwsRdsDbClusterDetails() : 
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_readerEndpointHasBeenSet(false),
    m_customEndpointsHasBeenSet(false),
    m_multiAz(false),
    m_multiAzHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_readReplicaIdentifiersHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dbClusterResourceIdHasBeenSet(false),
    m_associatedRolesHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_enabledCloudWatchLogsExportsHasBeenSet(false),
    m_engineModeHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_httpEndpointEnabled(false),
    m_httpEndpointEnabledHasBeenSet(false),
    m_activityStreamStatusHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_crossAccountClone(false),
    m_crossAccountCloneHasBeenSet(false),
    m_domainMembershipsHasBeenSet(false),
    m_dbClusterParameterGroupHasBeenSet(false),
    m_dbSubnetGroupHasBeenSet(false),
    m_dbClusterOptionGroupMembershipsHasBeenSet(false),
    m_dbClusterIdentifierHasBeenSet(false),
    m_dbClusterMembersHasBeenSet(false),
    m_iamDatabaseAuthenticationEnabled(false),
    m_iamDatabaseAuthenticationEnabledHasBeenSet(false)
{
}

AwsRdsDbClusterDetails::AwsRdsDbClusterDetails(JsonView jsonValue) : 
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_readerEndpointHasBeenSet(false),
    m_customEndpointsHasBeenSet(false),
    m_multiAz(false),
    m_multiAzHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_readReplicaIdentifiersHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dbClusterResourceIdHasBeenSet(false),
    m_associatedRolesHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_enabledCloudWatchLogsExportsHasBeenSet(false),
    m_engineModeHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_httpEndpointEnabled(false),
    m_httpEndpointEnabledHasBeenSet(false),
    m_activityStreamStatusHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_crossAccountClone(false),
    m_crossAccountCloneHasBeenSet(false),
    m_domainMembershipsHasBeenSet(false),
    m_dbClusterParameterGroupHasBeenSet(false),
    m_dbSubnetGroupHasBeenSet(false),
    m_dbClusterOptionGroupMembershipsHasBeenSet(false),
    m_dbClusterIdentifierHasBeenSet(false),
    m_dbClusterMembersHasBeenSet(false),
    m_iamDatabaseAuthenticationEnabled(false),
    m_iamDatabaseAuthenticationEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbClusterDetails& AwsRdsDbClusterDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllocatedStorage"))
  {
    m_allocatedStorage = jsonValue.GetInteger("AllocatedStorage");

    m_allocatedStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZones"))
  {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("AvailabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupRetentionPeriod"))
  {
    m_backupRetentionPeriod = jsonValue.GetInteger("BackupRetentionPeriod");

    m_backupRetentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReaderEndpoint"))
  {
    m_readerEndpoint = jsonValue.GetString("ReaderEndpoint");

    m_readerEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomEndpoints"))
  {
    Aws::Utils::Array<JsonView> customEndpointsJsonList = jsonValue.GetArray("CustomEndpoints");
    for(unsigned customEndpointsIndex = 0; customEndpointsIndex < customEndpointsJsonList.GetLength(); ++customEndpointsIndex)
    {
      m_customEndpoints.push_back(customEndpointsJsonList[customEndpointsIndex].AsString());
    }
    m_customEndpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MultiAz"))
  {
    m_multiAz = jsonValue.GetBool("MultiAz");

    m_multiAzHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Engine"))
  {
    m_engine = jsonValue.GetString("Engine");

    m_engineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterUsername"))
  {
    m_masterUsername = jsonValue.GetString("MasterUsername");

    m_masterUsernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredBackupWindow"))
  {
    m_preferredBackupWindow = jsonValue.GetString("PreferredBackupWindow");

    m_preferredBackupWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredMaintenanceWindow"))
  {
    m_preferredMaintenanceWindow = jsonValue.GetString("PreferredMaintenanceWindow");

    m_preferredMaintenanceWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadReplicaIdentifiers"))
  {
    Aws::Utils::Array<JsonView> readReplicaIdentifiersJsonList = jsonValue.GetArray("ReadReplicaIdentifiers");
    for(unsigned readReplicaIdentifiersIndex = 0; readReplicaIdentifiersIndex < readReplicaIdentifiersJsonList.GetLength(); ++readReplicaIdentifiersIndex)
    {
      m_readReplicaIdentifiers.push_back(readReplicaIdentifiersJsonList[readReplicaIdentifiersIndex].AsString());
    }
    m_readReplicaIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcSecurityGroups"))
  {
    Aws::Utils::Array<JsonView> vpcSecurityGroupsJsonList = jsonValue.GetArray("VpcSecurityGroups");
    for(unsigned vpcSecurityGroupsIndex = 0; vpcSecurityGroupsIndex < vpcSecurityGroupsJsonList.GetLength(); ++vpcSecurityGroupsIndex)
    {
      m_vpcSecurityGroups.push_back(vpcSecurityGroupsJsonList[vpcSecurityGroupsIndex].AsObject());
    }
    m_vpcSecurityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostedZoneId"))
  {
    m_hostedZoneId = jsonValue.GetString("HostedZoneId");

    m_hostedZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageEncrypted"))
  {
    m_storageEncrypted = jsonValue.GetBool("StorageEncrypted");

    m_storageEncryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbClusterResourceId"))
  {
    m_dbClusterResourceId = jsonValue.GetString("DbClusterResourceId");

    m_dbClusterResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociatedRoles"))
  {
    Aws::Utils::Array<JsonView> associatedRolesJsonList = jsonValue.GetArray("AssociatedRoles");
    for(unsigned associatedRolesIndex = 0; associatedRolesIndex < associatedRolesJsonList.GetLength(); ++associatedRolesIndex)
    {
      m_associatedRoles.push_back(associatedRolesJsonList[associatedRolesIndex].AsObject());
    }
    m_associatedRolesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterCreateTime"))
  {
    m_clusterCreateTime = jsonValue.GetString("ClusterCreateTime");

    m_clusterCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnabledCloudWatchLogsExports"))
  {
    Aws::Utils::Array<JsonView> enabledCloudWatchLogsExportsJsonList = jsonValue.GetArray("EnabledCloudWatchLogsExports");
    for(unsigned enabledCloudWatchLogsExportsIndex = 0; enabledCloudWatchLogsExportsIndex < enabledCloudWatchLogsExportsJsonList.GetLength(); ++enabledCloudWatchLogsExportsIndex)
    {
      m_enabledCloudWatchLogsExports.push_back(enabledCloudWatchLogsExportsJsonList[enabledCloudWatchLogsExportsIndex].AsString());
    }
    m_enabledCloudWatchLogsExportsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineMode"))
  {
    m_engineMode = jsonValue.GetString("EngineMode");

    m_engineModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletionProtection"))
  {
    m_deletionProtection = jsonValue.GetBool("DeletionProtection");

    m_deletionProtectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpEndpointEnabled"))
  {
    m_httpEndpointEnabled = jsonValue.GetBool("HttpEndpointEnabled");

    m_httpEndpointEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActivityStreamStatus"))
  {
    m_activityStreamStatus = jsonValue.GetString("ActivityStreamStatus");

    m_activityStreamStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyTagsToSnapshot"))
  {
    m_copyTagsToSnapshot = jsonValue.GetBool("CopyTagsToSnapshot");

    m_copyTagsToSnapshotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrossAccountClone"))
  {
    m_crossAccountClone = jsonValue.GetBool("CrossAccountClone");

    m_crossAccountCloneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainMemberships"))
  {
    Aws::Utils::Array<JsonView> domainMembershipsJsonList = jsonValue.GetArray("DomainMemberships");
    for(unsigned domainMembershipsIndex = 0; domainMembershipsIndex < domainMembershipsJsonList.GetLength(); ++domainMembershipsIndex)
    {
      m_domainMemberships.push_back(domainMembershipsJsonList[domainMembershipsIndex].AsObject());
    }
    m_domainMembershipsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbClusterParameterGroup"))
  {
    m_dbClusterParameterGroup = jsonValue.GetString("DbClusterParameterGroup");

    m_dbClusterParameterGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbSubnetGroup"))
  {
    m_dbSubnetGroup = jsonValue.GetString("DbSubnetGroup");

    m_dbSubnetGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbClusterOptionGroupMemberships"))
  {
    Aws::Utils::Array<JsonView> dbClusterOptionGroupMembershipsJsonList = jsonValue.GetArray("DbClusterOptionGroupMemberships");
    for(unsigned dbClusterOptionGroupMembershipsIndex = 0; dbClusterOptionGroupMembershipsIndex < dbClusterOptionGroupMembershipsJsonList.GetLength(); ++dbClusterOptionGroupMembershipsIndex)
    {
      m_dbClusterOptionGroupMemberships.push_back(dbClusterOptionGroupMembershipsJsonList[dbClusterOptionGroupMembershipsIndex].AsObject());
    }
    m_dbClusterOptionGroupMembershipsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbClusterIdentifier"))
  {
    m_dbClusterIdentifier = jsonValue.GetString("DbClusterIdentifier");

    m_dbClusterIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbClusterMembers"))
  {
    Aws::Utils::Array<JsonView> dbClusterMembersJsonList = jsonValue.GetArray("DbClusterMembers");
    for(unsigned dbClusterMembersIndex = 0; dbClusterMembersIndex < dbClusterMembersJsonList.GetLength(); ++dbClusterMembersIndex)
    {
      m_dbClusterMembers.push_back(dbClusterMembersJsonList[dbClusterMembersIndex].AsObject());
    }
    m_dbClusterMembersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamDatabaseAuthenticationEnabled"))
  {
    m_iamDatabaseAuthenticationEnabled = jsonValue.GetBool("IamDatabaseAuthenticationEnabled");

    m_iamDatabaseAuthenticationEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbClusterDetails::Jsonize() const
{
  JsonValue payload;

  if(m_allocatedStorageHasBeenSet)
  {
   payload.WithInteger("AllocatedStorage", m_allocatedStorage);

  }

  if(m_availabilityZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_backupRetentionPeriodHasBeenSet)
  {
   payload.WithInteger("BackupRetentionPeriod", m_backupRetentionPeriod);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_readerEndpointHasBeenSet)
  {
   payload.WithString("ReaderEndpoint", m_readerEndpoint);

  }

  if(m_customEndpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customEndpointsJsonList(m_customEndpoints.size());
   for(unsigned customEndpointsIndex = 0; customEndpointsIndex < customEndpointsJsonList.GetLength(); ++customEndpointsIndex)
   {
     customEndpointsJsonList[customEndpointsIndex].AsString(m_customEndpoints[customEndpointsIndex]);
   }
   payload.WithArray("CustomEndpoints", std::move(customEndpointsJsonList));

  }

  if(m_multiAzHasBeenSet)
  {
   payload.WithBool("MultiAz", m_multiAz);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", m_engine);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_masterUsernameHasBeenSet)
  {
   payload.WithString("MasterUsername", m_masterUsername);

  }

  if(m_preferredBackupWindowHasBeenSet)
  {
   payload.WithString("PreferredBackupWindow", m_preferredBackupWindow);

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("PreferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_readReplicaIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> readReplicaIdentifiersJsonList(m_readReplicaIdentifiers.size());
   for(unsigned readReplicaIdentifiersIndex = 0; readReplicaIdentifiersIndex < readReplicaIdentifiersJsonList.GetLength(); ++readReplicaIdentifiersIndex)
   {
     readReplicaIdentifiersJsonList[readReplicaIdentifiersIndex].AsString(m_readReplicaIdentifiers[readReplicaIdentifiersIndex]);
   }
   payload.WithArray("ReadReplicaIdentifiers", std::move(readReplicaIdentifiersJsonList));

  }

  if(m_vpcSecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcSecurityGroupsJsonList(m_vpcSecurityGroups.size());
   for(unsigned vpcSecurityGroupsIndex = 0; vpcSecurityGroupsIndex < vpcSecurityGroupsJsonList.GetLength(); ++vpcSecurityGroupsIndex)
   {
     vpcSecurityGroupsJsonList[vpcSecurityGroupsIndex].AsObject(m_vpcSecurityGroups[vpcSecurityGroupsIndex].Jsonize());
   }
   payload.WithArray("VpcSecurityGroups", std::move(vpcSecurityGroupsJsonList));

  }

  if(m_hostedZoneIdHasBeenSet)
  {
   payload.WithString("HostedZoneId", m_hostedZoneId);

  }

  if(m_storageEncryptedHasBeenSet)
  {
   payload.WithBool("StorageEncrypted", m_storageEncrypted);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_dbClusterResourceIdHasBeenSet)
  {
   payload.WithString("DbClusterResourceId", m_dbClusterResourceId);

  }

  if(m_associatedRolesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedRolesJsonList(m_associatedRoles.size());
   for(unsigned associatedRolesIndex = 0; associatedRolesIndex < associatedRolesJsonList.GetLength(); ++associatedRolesIndex)
   {
     associatedRolesJsonList[associatedRolesIndex].AsObject(m_associatedRoles[associatedRolesIndex].Jsonize());
   }
   payload.WithArray("AssociatedRoles", std::move(associatedRolesJsonList));

  }

  if(m_clusterCreateTimeHasBeenSet)
  {
   payload.WithString("ClusterCreateTime", m_clusterCreateTime);

  }

  if(m_enabledCloudWatchLogsExportsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledCloudWatchLogsExportsJsonList(m_enabledCloudWatchLogsExports.size());
   for(unsigned enabledCloudWatchLogsExportsIndex = 0; enabledCloudWatchLogsExportsIndex < enabledCloudWatchLogsExportsJsonList.GetLength(); ++enabledCloudWatchLogsExportsIndex)
   {
     enabledCloudWatchLogsExportsJsonList[enabledCloudWatchLogsExportsIndex].AsString(m_enabledCloudWatchLogsExports[enabledCloudWatchLogsExportsIndex]);
   }
   payload.WithArray("EnabledCloudWatchLogsExports", std::move(enabledCloudWatchLogsExportsJsonList));

  }

  if(m_engineModeHasBeenSet)
  {
   payload.WithString("EngineMode", m_engineMode);

  }

  if(m_deletionProtectionHasBeenSet)
  {
   payload.WithBool("DeletionProtection", m_deletionProtection);

  }

  if(m_httpEndpointEnabledHasBeenSet)
  {
   payload.WithBool("HttpEndpointEnabled", m_httpEndpointEnabled);

  }

  if(m_activityStreamStatusHasBeenSet)
  {
   payload.WithString("ActivityStreamStatus", m_activityStreamStatus);

  }

  if(m_copyTagsToSnapshotHasBeenSet)
  {
   payload.WithBool("CopyTagsToSnapshot", m_copyTagsToSnapshot);

  }

  if(m_crossAccountCloneHasBeenSet)
  {
   payload.WithBool("CrossAccountClone", m_crossAccountClone);

  }

  if(m_domainMembershipsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainMembershipsJsonList(m_domainMemberships.size());
   for(unsigned domainMembershipsIndex = 0; domainMembershipsIndex < domainMembershipsJsonList.GetLength(); ++domainMembershipsIndex)
   {
     domainMembershipsJsonList[domainMembershipsIndex].AsObject(m_domainMemberships[domainMembershipsIndex].Jsonize());
   }
   payload.WithArray("DomainMemberships", std::move(domainMembershipsJsonList));

  }

  if(m_dbClusterParameterGroupHasBeenSet)
  {
   payload.WithString("DbClusterParameterGroup", m_dbClusterParameterGroup);

  }

  if(m_dbSubnetGroupHasBeenSet)
  {
   payload.WithString("DbSubnetGroup", m_dbSubnetGroup);

  }

  if(m_dbClusterOptionGroupMembershipsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dbClusterOptionGroupMembershipsJsonList(m_dbClusterOptionGroupMemberships.size());
   for(unsigned dbClusterOptionGroupMembershipsIndex = 0; dbClusterOptionGroupMembershipsIndex < dbClusterOptionGroupMembershipsJsonList.GetLength(); ++dbClusterOptionGroupMembershipsIndex)
   {
     dbClusterOptionGroupMembershipsJsonList[dbClusterOptionGroupMembershipsIndex].AsObject(m_dbClusterOptionGroupMemberships[dbClusterOptionGroupMembershipsIndex].Jsonize());
   }
   payload.WithArray("DbClusterOptionGroupMemberships", std::move(dbClusterOptionGroupMembershipsJsonList));

  }

  if(m_dbClusterIdentifierHasBeenSet)
  {
   payload.WithString("DbClusterIdentifier", m_dbClusterIdentifier);

  }

  if(m_dbClusterMembersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dbClusterMembersJsonList(m_dbClusterMembers.size());
   for(unsigned dbClusterMembersIndex = 0; dbClusterMembersIndex < dbClusterMembersJsonList.GetLength(); ++dbClusterMembersIndex)
   {
     dbClusterMembersJsonList[dbClusterMembersIndex].AsObject(m_dbClusterMembers[dbClusterMembersIndex].Jsonize());
   }
   payload.WithArray("DbClusterMembers", std::move(dbClusterMembersJsonList));

  }

  if(m_iamDatabaseAuthenticationEnabledHasBeenSet)
  {
   payload.WithBool("IamDatabaseAuthenticationEnabled", m_iamDatabaseAuthenticationEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
