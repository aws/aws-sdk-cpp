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
#include <aws/opsworkscm/model/Backup.h>
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

Backup::Backup() : 
    m_backupArnHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_backupType(BackupType::NOT_SET),
    m_backupTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineModelHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_instanceProfileArnHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_keyPairHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_s3LogUrlHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_status(BackupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDescriptionHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_toolsVersionHasBeenSet(false),
    m_userArnHasBeenSet(false)
{
}

Backup::Backup(const JsonValue& jsonValue) : 
    m_backupArnHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_backupType(BackupType::NOT_SET),
    m_backupTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineModelHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_instanceProfileArnHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_keyPairHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_s3LogUrlHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_status(BackupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDescriptionHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_toolsVersionHasBeenSet(false),
    m_userArnHasBeenSet(false)
{
  *this = jsonValue;
}

Backup& Backup::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("BackupArn"))
  {
    m_backupArn = jsonValue.GetString("BackupArn");

    m_backupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupId"))
  {
    m_backupId = jsonValue.GetString("BackupId");

    m_backupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupType"))
  {
    m_backupType = BackupTypeMapper::GetBackupTypeForName(jsonValue.GetString("BackupType"));

    m_backupTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
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

  if(jsonValue.ValueExists("S3LogUrl"))
  {
    m_s3LogUrl = jsonValue.GetString("S3LogUrl");

    m_s3LogUrlHasBeenSet = true;
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

  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");

    m_serverNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRoleArn"))
  {
    m_serviceRoleArn = jsonValue.GetString("ServiceRoleArn");

    m_serviceRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = BackupStatusMapper::GetBackupStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusDescription"))
  {
    m_statusDescription = jsonValue.GetString("StatusDescription");

    m_statusDescriptionHasBeenSet = true;
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

  if(jsonValue.ValueExists("ToolsVersion"))
  {
    m_toolsVersion = jsonValue.GetString("ToolsVersion");

    m_toolsVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserArn"))
  {
    m_userArn = jsonValue.GetString("UserArn");

    m_userArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Backup::Jsonize() const
{
  JsonValue payload;

  if(m_backupArnHasBeenSet)
  {
   payload.WithString("BackupArn", m_backupArn);

  }

  if(m_backupIdHasBeenSet)
  {
   payload.WithString("BackupId", m_backupId);

  }

  if(m_backupTypeHasBeenSet)
  {
   payload.WithString("BackupType", BackupTypeMapper::GetNameForBackupType(m_backupType));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", m_engine);

  }

  if(m_engineModelHasBeenSet)
  {
   payload.WithString("EngineModel", m_engineModel);

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

  if(m_preferredBackupWindowHasBeenSet)
  {
   payload.WithString("PreferredBackupWindow", m_preferredBackupWindow);

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("PreferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_s3LogUrlHasBeenSet)
  {
   payload.WithString("S3LogUrl", m_s3LogUrl);

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

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_serviceRoleArnHasBeenSet)
  {
   payload.WithString("ServiceRoleArn", m_serviceRoleArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", BackupStatusMapper::GetNameForBackupStatus(m_status));
  }

  if(m_statusDescriptionHasBeenSet)
  {
   payload.WithString("StatusDescription", m_statusDescription);

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

  if(m_toolsVersionHasBeenSet)
  {
   payload.WithString("ToolsVersion", m_toolsVersion);

  }

  if(m_userArnHasBeenSet)
  {
   payload.WithString("UserArn", m_userArn);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws