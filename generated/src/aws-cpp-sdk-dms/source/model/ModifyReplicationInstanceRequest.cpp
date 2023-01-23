/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ModifyReplicationInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyReplicationInstanceRequest::ModifyReplicationInstanceRequest() : 
    m_replicationInstanceArnHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_applyImmediately(false),
    m_applyImmediatelyHasBeenSet(false),
    m_replicationInstanceClassHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_allowMajorVersionUpgrade(false),
    m_allowMajorVersionUpgradeHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_replicationInstanceIdentifierHasBeenSet(false),
    m_networkTypeHasBeenSet(false)
{
}

Aws::String ModifyReplicationInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationInstanceArnHasBeenSet)
  {
   payload.WithString("ReplicationInstanceArn", m_replicationInstanceArn);

  }

  if(m_allocatedStorageHasBeenSet)
  {
   payload.WithInteger("AllocatedStorage", m_allocatedStorage);

  }

  if(m_applyImmediatelyHasBeenSet)
  {
   payload.WithBool("ApplyImmediately", m_applyImmediately);

  }

  if(m_replicationInstanceClassHasBeenSet)
  {
   payload.WithString("ReplicationInstanceClass", m_replicationInstanceClass);

  }

  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcSecurityGroupIdsJsonList(m_vpcSecurityGroupIds.size());
   for(unsigned vpcSecurityGroupIdsIndex = 0; vpcSecurityGroupIdsIndex < vpcSecurityGroupIdsJsonList.GetLength(); ++vpcSecurityGroupIdsIndex)
   {
     vpcSecurityGroupIdsJsonList[vpcSecurityGroupIdsIndex].AsString(m_vpcSecurityGroupIds[vpcSecurityGroupIdsIndex]);
   }
   payload.WithArray("VpcSecurityGroupIds", std::move(vpcSecurityGroupIdsJsonList));

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("PreferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_multiAZHasBeenSet)
  {
   payload.WithBool("MultiAZ", m_multiAZ);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_allowMajorVersionUpgradeHasBeenSet)
  {
   payload.WithBool("AllowMajorVersionUpgrade", m_allowMajorVersionUpgrade);

  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
   payload.WithBool("AutoMinorVersionUpgrade", m_autoMinorVersionUpgrade);

  }

  if(m_replicationInstanceIdentifierHasBeenSet)
  {
   payload.WithString("ReplicationInstanceIdentifier", m_replicationInstanceIdentifier);

  }

  if(m_networkTypeHasBeenSet)
  {
   payload.WithString("NetworkType", m_networkType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyReplicationInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ModifyReplicationInstance"));
  return headers;

}




