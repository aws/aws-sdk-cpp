/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/UpdateReplicationConfigurationTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateReplicationConfigurationTemplateRequest::UpdateReplicationConfigurationTemplateRequest() : 
    m_arnHasBeenSet(false),
    m_associateDefaultSecurityGroup(false),
    m_associateDefaultSecurityGroupHasBeenSet(false),
    m_bandwidthThrottling(0),
    m_bandwidthThrottlingHasBeenSet(false),
    m_createPublicIP(false),
    m_createPublicIPHasBeenSet(false),
    m_dataPlaneRouting(ReplicationConfigurationDataPlaneRouting::NOT_SET),
    m_dataPlaneRoutingHasBeenSet(false),
    m_defaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType::NOT_SET),
    m_defaultLargeStagingDiskTypeHasBeenSet(false),
    m_ebsEncryption(ReplicationConfigurationEbsEncryption::NOT_SET),
    m_ebsEncryptionHasBeenSet(false),
    m_ebsEncryptionKeyArnHasBeenSet(false),
    m_pitPolicyHasBeenSet(false),
    m_replicationConfigurationTemplateIDHasBeenSet(false),
    m_replicationServerInstanceTypeHasBeenSet(false),
    m_replicationServersSecurityGroupsIDsHasBeenSet(false),
    m_stagingAreaSubnetIdHasBeenSet(false),
    m_stagingAreaTagsHasBeenSet(false),
    m_useDedicatedReplicationServer(false),
    m_useDedicatedReplicationServerHasBeenSet(false)
{
}

Aws::String UpdateReplicationConfigurationTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_associateDefaultSecurityGroupHasBeenSet)
  {
   payload.WithBool("associateDefaultSecurityGroup", m_associateDefaultSecurityGroup);

  }

  if(m_bandwidthThrottlingHasBeenSet)
  {
   payload.WithInt64("bandwidthThrottling", m_bandwidthThrottling);

  }

  if(m_createPublicIPHasBeenSet)
  {
   payload.WithBool("createPublicIP", m_createPublicIP);

  }

  if(m_dataPlaneRoutingHasBeenSet)
  {
   payload.WithString("dataPlaneRouting", ReplicationConfigurationDataPlaneRoutingMapper::GetNameForReplicationConfigurationDataPlaneRouting(m_dataPlaneRouting));
  }

  if(m_defaultLargeStagingDiskTypeHasBeenSet)
  {
   payload.WithString("defaultLargeStagingDiskType", ReplicationConfigurationDefaultLargeStagingDiskTypeMapper::GetNameForReplicationConfigurationDefaultLargeStagingDiskType(m_defaultLargeStagingDiskType));
  }

  if(m_ebsEncryptionHasBeenSet)
  {
   payload.WithString("ebsEncryption", ReplicationConfigurationEbsEncryptionMapper::GetNameForReplicationConfigurationEbsEncryption(m_ebsEncryption));
  }

  if(m_ebsEncryptionKeyArnHasBeenSet)
  {
   payload.WithString("ebsEncryptionKeyArn", m_ebsEncryptionKeyArn);

  }

  if(m_pitPolicyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pitPolicyJsonList(m_pitPolicy.size());
   for(unsigned pitPolicyIndex = 0; pitPolicyIndex < pitPolicyJsonList.GetLength(); ++pitPolicyIndex)
   {
     pitPolicyJsonList[pitPolicyIndex].AsObject(m_pitPolicy[pitPolicyIndex].Jsonize());
   }
   payload.WithArray("pitPolicy", std::move(pitPolicyJsonList));

  }

  if(m_replicationConfigurationTemplateIDHasBeenSet)
  {
   payload.WithString("replicationConfigurationTemplateID", m_replicationConfigurationTemplateID);

  }

  if(m_replicationServerInstanceTypeHasBeenSet)
  {
   payload.WithString("replicationServerInstanceType", m_replicationServerInstanceType);

  }

  if(m_replicationServersSecurityGroupsIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicationServersSecurityGroupsIDsJsonList(m_replicationServersSecurityGroupsIDs.size());
   for(unsigned replicationServersSecurityGroupsIDsIndex = 0; replicationServersSecurityGroupsIDsIndex < replicationServersSecurityGroupsIDsJsonList.GetLength(); ++replicationServersSecurityGroupsIDsIndex)
   {
     replicationServersSecurityGroupsIDsJsonList[replicationServersSecurityGroupsIDsIndex].AsString(m_replicationServersSecurityGroupsIDs[replicationServersSecurityGroupsIDsIndex]);
   }
   payload.WithArray("replicationServersSecurityGroupsIDs", std::move(replicationServersSecurityGroupsIDsJsonList));

  }

  if(m_stagingAreaSubnetIdHasBeenSet)
  {
   payload.WithString("stagingAreaSubnetId", m_stagingAreaSubnetId);

  }

  if(m_stagingAreaTagsHasBeenSet)
  {
   JsonValue stagingAreaTagsJsonMap;
   for(auto& stagingAreaTagsItem : m_stagingAreaTags)
   {
     stagingAreaTagsJsonMap.WithString(stagingAreaTagsItem.first, stagingAreaTagsItem.second);
   }
   payload.WithObject("stagingAreaTags", std::move(stagingAreaTagsJsonMap));

  }

  if(m_useDedicatedReplicationServerHasBeenSet)
  {
   payload.WithBool("useDedicatedReplicationServer", m_useDedicatedReplicationServer);

  }

  return payload.View().WriteReadable();
}




