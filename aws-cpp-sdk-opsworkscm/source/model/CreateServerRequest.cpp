/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/CreateServerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorksCM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateServerRequest::CreateServerRequest() : 
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_customDomainHasBeenSet(false),
    m_customCertificateHasBeenSet(false),
    m_customPrivateKeyHasBeenSet(false),
    m_disableAutomatedBackup(false),
    m_disableAutomatedBackupHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineModelHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_engineAttributesHasBeenSet(false),
    m_backupRetentionCount(0),
    m_backupRetentionCountHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_instanceProfileArnHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_keyPairHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_backupIdHasBeenSet(false)
{
}

Aws::String CreateServerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_associatePublicIpAddressHasBeenSet)
  {
   payload.WithBool("AssociatePublicIpAddress", m_associatePublicIpAddress);

  }

  if(m_customDomainHasBeenSet)
  {
   payload.WithString("CustomDomain", m_customDomain);

  }

  if(m_customCertificateHasBeenSet)
  {
   payload.WithString("CustomCertificate", m_customCertificate);

  }

  if(m_customPrivateKeyHasBeenSet)
  {
   payload.WithString("CustomPrivateKey", m_customPrivateKey);

  }

  if(m_disableAutomatedBackupHasBeenSet)
  {
   payload.WithBool("DisableAutomatedBackup", m_disableAutomatedBackup);

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

  if(m_engineAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> engineAttributesJsonList(m_engineAttributes.size());
   for(unsigned engineAttributesIndex = 0; engineAttributesIndex < engineAttributesJsonList.GetLength(); ++engineAttributesIndex)
   {
     engineAttributesJsonList[engineAttributesIndex].AsObject(m_engineAttributes[engineAttributesIndex].Jsonize());
   }
   payload.WithArray("EngineAttributes", std::move(engineAttributesJsonList));

  }

  if(m_backupRetentionCountHasBeenSet)
  {
   payload.WithInteger("BackupRetentionCount", m_backupRetentionCount);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

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
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
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

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_backupIdHasBeenSet)
  {
   payload.WithString("BackupId", m_backupId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateServerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorksCM_V2016_11_01.CreateServer"));
  return headers;

}




