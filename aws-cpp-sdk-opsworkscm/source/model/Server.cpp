/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/opsworkscm/model/Server.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

Server::Server() : 
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_backupRetentionCount(0),
    m_backupRetentionCountHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_cloudFormationStackArnHasBeenSet(false),
    m_disableAutomatedBackup(false),
    m_disableAutomatedBackupHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineModelHasBeenSet(false),
    m_engineAttributesHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_instanceProfileArnHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_keyPairHasBeenSet(false),
    m_maintenanceStatus(MaintenanceStatus::NOT_SET),
    m_maintenanceStatusHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_status(ServerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_serverArnHasBeenSet(false)
{
}

Server::Server(const JsonValue& jsonValue) : 
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_backupRetentionCount(0),
    m_backupRetentionCountHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_cloudFormationStackArnHasBeenSet(false),
    m_disableAutomatedBackup(false),
    m_disableAutomatedBackupHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineModelHasBeenSet(false),
    m_engineAttributesHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_instanceProfileArnHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_keyPairHasBeenSet(false),
    m_maintenanceStatus(MaintenanceStatus::NOT_SET),
    m_maintenanceStatusHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_status(ServerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_serverArnHasBeenSet(false)
{
  *this = jsonValue;
}

Server& Server::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AssociatePublicIpAddress"))
  {
    m_associatePublicIpAddress = jsonValue.GetBool("AssociatePublicIpAddress");

    m_associatePublicIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupRetentionCount"))
  {
    m_backupRetentionCount = jsonValue.GetInteger("BackupRetentionCount");

    m_backupRetentionCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");

    m_serverNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudFormationStackArn"))
  {
    m_cloudFormationStackArn = jsonValue.GetString("CloudFormationStackArn");

    m_cloudFormationStackArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisableAutomatedBackup"))
  {
    m_disableAutomatedBackup = jsonValue.GetBool("DisableAutomatedBackup");

    m_disableAutomatedBackupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Engine"))
  {
    m_engine = jsonValue.GetString("Engine");

    m_engineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineModel"))
  {
    m_engineModel = jsonValue.GetString("EngineModel");

    m_engineModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineAttributes"))
  {
    Array<JsonValue> engineAttributesJsonList = jsonValue.GetArray("EngineAttributes");
    for(unsigned engineAttributesIndex = 0; engineAttributesIndex < engineAttributesJsonList.GetLength(); ++engineAttributesIndex)
    {
      m_engineAttributes.push_back(engineAttributesJsonList[engineAttributesIndex].AsObject());
    }
    m_engineAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceProfileArn"))
  {
    m_instanceProfileArn = jsonValue.GetString("InstanceProfileArn");

    m_instanceProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyPair"))
  {
    m_keyPair = jsonValue.GetString("KeyPair");

    m_keyPairHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaintenanceStatus"))
  {
    m_maintenanceStatus = MaintenanceStatusMapper::GetMaintenanceStatusForName(jsonValue.GetString("MaintenanceStatus"));

    m_maintenanceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredMaintenanceWindow"))
  {
    m_preferredMaintenanceWindow = jsonValue.GetString("PreferredMaintenanceWindow");

    m_preferredMaintenanceWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredBackupWindow"))
  {
    m_preferredBackupWindow = jsonValue.GetString("PreferredBackupWindow");

    m_preferredBackupWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Array<JsonValue> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRoleArn"))
  {
    m_serviceRoleArn = jsonValue.GetString("ServiceRoleArn");

    m_serviceRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ServerStatusMapper::GetServerStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetIds"))
  {
    Array<JsonValue> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerArn"))
  {
    m_serverArn = jsonValue.GetString("ServerArn");

    m_serverArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Server::Jsonize() const
{
  JsonValue payload;

  if(m_associatePublicIpAddressHasBeenSet)
  {
   payload.WithBool("AssociatePublicIpAddress", m_associatePublicIpAddress);

  }

  if(m_backupRetentionCountHasBeenSet)
  {
   payload.WithInteger("BackupRetentionCount", m_backupRetentionCount);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_cloudFormationStackArnHasBeenSet)
  {
   payload.WithString("CloudFormationStackArn", m_cloudFormationStackArn);

  }

  if(m_disableAutomatedBackupHasBeenSet)
  {
   payload.WithBool("DisableAutomatedBackup", m_disableAutomatedBackup);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", m_engine);

  }

  if(m_engineModelHasBeenSet)
  {
   payload.WithString("EngineModel", m_engineModel);

  }

  if(m_engineAttributesHasBeenSet)
  {
   Array<JsonValue> engineAttributesJsonList(m_engineAttributes.size());
   for(unsigned engineAttributesIndex = 0; engineAttributesIndex < engineAttributesJsonList.GetLength(); ++engineAttributesIndex)
   {
     engineAttributesJsonList[engineAttributesIndex].AsObject(m_engineAttributes[engineAttributesIndex].Jsonize());
   }
   payload.WithArray("EngineAttributes", std::move(engineAttributesJsonList));

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_instanceProfileArnHasBeenSet)
  {
   payload.WithString("InstanceProfileArn", m_instanceProfileArn);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_keyPairHasBeenSet)
  {
   payload.WithString("KeyPair", m_keyPair);

  }

  if(m_maintenanceStatusHasBeenSet)
  {
   payload.WithString("MaintenanceStatus", MaintenanceStatusMapper::GetNameForMaintenanceStatus(m_maintenanceStatus));
  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("PreferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_preferredBackupWindowHasBeenSet)
  {
   payload.WithString("PreferredBackupWindow", m_preferredBackupWindow);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_serviceRoleArnHasBeenSet)
  {
   payload.WithString("ServiceRoleArn", m_serviceRoleArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ServerStatusMapper::GetNameForServerStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_serverArnHasBeenSet)
  {
   payload.WithString("ServerArn", m_serverArn);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws