/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/securityhub/model/AwsRdsDbInstanceDetails.h>
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

AwsRdsDbInstanceDetails::AwsRdsDbInstanceDetails() : 
    m_associatedRolesHasBeenSet(false),
    m_cACertificateIdentifierHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_dBInstanceIdentifierHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_dbInstancePort(0),
    m_dbInstancePortHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_tdeCredentialArnHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false)
{
}

AwsRdsDbInstanceDetails::AwsRdsDbInstanceDetails(JsonView jsonValue) : 
    m_associatedRolesHasBeenSet(false),
    m_cACertificateIdentifierHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_dBInstanceIdentifierHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_dbInstancePort(0),
    m_dbInstancePortHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_tdeCredentialArnHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbInstanceDetails& AwsRdsDbInstanceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociatedRoles"))
  {
    Array<JsonView> associatedRolesJsonList = jsonValue.GetArray("AssociatedRoles");
    for(unsigned associatedRolesIndex = 0; associatedRolesIndex < associatedRolesJsonList.GetLength(); ++associatedRolesIndex)
    {
      m_associatedRoles.push_back(associatedRolesJsonList[associatedRolesIndex].AsObject());
    }
    m_associatedRolesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CACertificateIdentifier"))
  {
    m_cACertificateIdentifier = jsonValue.GetString("CACertificateIdentifier");

    m_cACertificateIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DBClusterIdentifier"))
  {
    m_dBClusterIdentifier = jsonValue.GetString("DBClusterIdentifier");

    m_dBClusterIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DBInstanceIdentifier"))
  {
    m_dBInstanceIdentifier = jsonValue.GetString("DBInstanceIdentifier");

    m_dBInstanceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DBInstanceClass"))
  {
    m_dBInstanceClass = jsonValue.GetString("DBInstanceClass");

    m_dBInstanceClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbInstancePort"))
  {
    m_dbInstancePort = jsonValue.GetInteger("DbInstancePort");

    m_dbInstancePortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbiResourceId"))
  {
    m_dbiResourceId = jsonValue.GetString("DbiResourceId");

    m_dbiResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DBName"))
  {
    m_dBName = jsonValue.GetString("DBName");

    m_dBNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletionProtection"))
  {
    m_deletionProtection = jsonValue.GetBool("DeletionProtection");

    m_deletionProtectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetObject("Endpoint");

    m_endpointHasBeenSet = true;
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

  if(jsonValue.ValueExists("IAMDatabaseAuthenticationEnabled"))
  {
    m_iAMDatabaseAuthenticationEnabled = jsonValue.GetBool("IAMDatabaseAuthenticationEnabled");

    m_iAMDatabaseAuthenticationEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCreateTime"))
  {
    m_instanceCreateTime = jsonValue.GetString("InstanceCreateTime");

    m_instanceCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PubliclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("PubliclyAccessible");

    m_publiclyAccessibleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageEncrypted"))
  {
    m_storageEncrypted = jsonValue.GetBool("StorageEncrypted");

    m_storageEncryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TdeCredentialArn"))
  {
    m_tdeCredentialArn = jsonValue.GetString("TdeCredentialArn");

    m_tdeCredentialArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcSecurityGroups"))
  {
    Array<JsonView> vpcSecurityGroupsJsonList = jsonValue.GetArray("VpcSecurityGroups");
    for(unsigned vpcSecurityGroupsIndex = 0; vpcSecurityGroupsIndex < vpcSecurityGroupsJsonList.GetLength(); ++vpcSecurityGroupsIndex)
    {
      m_vpcSecurityGroups.push_back(vpcSecurityGroupsJsonList[vpcSecurityGroupsIndex].AsObject());
    }
    m_vpcSecurityGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbInstanceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_associatedRolesHasBeenSet)
  {
   Array<JsonValue> associatedRolesJsonList(m_associatedRoles.size());
   for(unsigned associatedRolesIndex = 0; associatedRolesIndex < associatedRolesJsonList.GetLength(); ++associatedRolesIndex)
   {
     associatedRolesJsonList[associatedRolesIndex].AsObject(m_associatedRoles[associatedRolesIndex].Jsonize());
   }
   payload.WithArray("AssociatedRoles", std::move(associatedRolesJsonList));

  }

  if(m_cACertificateIdentifierHasBeenSet)
  {
   payload.WithString("CACertificateIdentifier", m_cACertificateIdentifier);

  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
   payload.WithString("DBClusterIdentifier", m_dBClusterIdentifier);

  }

  if(m_dBInstanceIdentifierHasBeenSet)
  {
   payload.WithString("DBInstanceIdentifier", m_dBInstanceIdentifier);

  }

  if(m_dBInstanceClassHasBeenSet)
  {
   payload.WithString("DBInstanceClass", m_dBInstanceClass);

  }

  if(m_dbInstancePortHasBeenSet)
  {
   payload.WithInteger("DbInstancePort", m_dbInstancePort);

  }

  if(m_dbiResourceIdHasBeenSet)
  {
   payload.WithString("DbiResourceId", m_dbiResourceId);

  }

  if(m_dBNameHasBeenSet)
  {
   payload.WithString("DBName", m_dBName);

  }

  if(m_deletionProtectionHasBeenSet)
  {
   payload.WithBool("DeletionProtection", m_deletionProtection);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithObject("Endpoint", m_endpoint.Jsonize());

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", m_engine);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_iAMDatabaseAuthenticationEnabledHasBeenSet)
  {
   payload.WithBool("IAMDatabaseAuthenticationEnabled", m_iAMDatabaseAuthenticationEnabled);

  }

  if(m_instanceCreateTimeHasBeenSet)
  {
   payload.WithString("InstanceCreateTime", m_instanceCreateTime);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("PubliclyAccessible", m_publiclyAccessible);

  }

  if(m_storageEncryptedHasBeenSet)
  {
   payload.WithBool("StorageEncrypted", m_storageEncrypted);

  }

  if(m_tdeCredentialArnHasBeenSet)
  {
   payload.WithString("TdeCredentialArn", m_tdeCredentialArn);

  }

  if(m_vpcSecurityGroupsHasBeenSet)
  {
   Array<JsonValue> vpcSecurityGroupsJsonList(m_vpcSecurityGroups.size());
   for(unsigned vpcSecurityGroupsIndex = 0; vpcSecurityGroupsIndex < vpcSecurityGroupsJsonList.GetLength(); ++vpcSecurityGroupsIndex)
   {
     vpcSecurityGroupsJsonList[vpcSecurityGroupsIndex].AsObject(m_vpcSecurityGroups[vpcSecurityGroupsIndex].Jsonize());
   }
   payload.WithArray("VpcSecurityGroups", std::move(vpcSecurityGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
