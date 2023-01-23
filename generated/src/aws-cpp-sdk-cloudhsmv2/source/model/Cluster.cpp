/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/Cluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

Cluster::Cluster() : 
    m_backupPolicy(BackupPolicy::NOT_SET),
    m_backupPolicyHasBeenSet(false),
    m_backupRetentionPolicyHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_hsmsHasBeenSet(false),
    m_hsmTypeHasBeenSet(false),
    m_preCoPasswordHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_sourceBackupIdHasBeenSet(false),
    m_state(ClusterState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateMessageHasBeenSet(false),
    m_subnetMappingHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_certificatesHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

Cluster::Cluster(JsonView jsonValue) : 
    m_backupPolicy(BackupPolicy::NOT_SET),
    m_backupPolicyHasBeenSet(false),
    m_backupRetentionPolicyHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_hsmsHasBeenSet(false),
    m_hsmTypeHasBeenSet(false),
    m_preCoPasswordHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_sourceBackupIdHasBeenSet(false),
    m_state(ClusterState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateMessageHasBeenSet(false),
    m_subnetMappingHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_certificatesHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
  *this = jsonValue;
}

Cluster& Cluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupPolicy"))
  {
    m_backupPolicy = BackupPolicyMapper::GetBackupPolicyForName(jsonValue.GetString("BackupPolicy"));

    m_backupPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupRetentionPolicy"))
  {
    m_backupRetentionPolicy = jsonValue.GetObject("BackupRetentionPolicy");

    m_backupRetentionPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterId"))
  {
    m_clusterId = jsonValue.GetString("ClusterId");

    m_clusterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateTimestamp"))
  {
    m_createTimestamp = jsonValue.GetDouble("CreateTimestamp");

    m_createTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Hsms"))
  {
    Aws::Utils::Array<JsonView> hsmsJsonList = jsonValue.GetArray("Hsms");
    for(unsigned hsmsIndex = 0; hsmsIndex < hsmsJsonList.GetLength(); ++hsmsIndex)
    {
      m_hsms.push_back(hsmsJsonList[hsmsIndex].AsObject());
    }
    m_hsmsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HsmType"))
  {
    m_hsmType = jsonValue.GetString("HsmType");

    m_hsmTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreCoPassword"))
  {
    m_preCoPassword = jsonValue.GetString("PreCoPassword");

    m_preCoPasswordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroup"))
  {
    m_securityGroup = jsonValue.GetString("SecurityGroup");

    m_securityGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceBackupId"))
  {
    m_sourceBackupId = jsonValue.GetString("SourceBackupId");

    m_sourceBackupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ClusterStateMapper::GetClusterStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateMessage"))
  {
    m_stateMessage = jsonValue.GetString("StateMessage");

    m_stateMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetMapping"))
  {
    Aws::Map<Aws::String, JsonView> subnetMappingJsonMap = jsonValue.GetObject("SubnetMapping").GetAllObjects();
    for(auto& subnetMappingItem : subnetMappingJsonMap)
    {
      m_subnetMapping[subnetMappingItem.first] = subnetMappingItem.second.AsString();
    }
    m_subnetMappingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Certificates"))
  {
    m_certificates = jsonValue.GetObject("Certificates");

    m_certificatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagList"))
  {
    Aws::Utils::Array<JsonView> tagListJsonList = jsonValue.GetArray("TagList");
    for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
    {
      m_tagList.push_back(tagListJsonList[tagListIndex].AsObject());
    }
    m_tagListHasBeenSet = true;
  }

  return *this;
}

JsonValue Cluster::Jsonize() const
{
  JsonValue payload;

  if(m_backupPolicyHasBeenSet)
  {
   payload.WithString("BackupPolicy", BackupPolicyMapper::GetNameForBackupPolicy(m_backupPolicy));
  }

  if(m_backupRetentionPolicyHasBeenSet)
  {
   payload.WithObject("BackupRetentionPolicy", m_backupRetentionPolicy.Jsonize());

  }

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_createTimestampHasBeenSet)
  {
   payload.WithDouble("CreateTimestamp", m_createTimestamp.SecondsWithMSPrecision());
  }

  if(m_hsmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hsmsJsonList(m_hsms.size());
   for(unsigned hsmsIndex = 0; hsmsIndex < hsmsJsonList.GetLength(); ++hsmsIndex)
   {
     hsmsJsonList[hsmsIndex].AsObject(m_hsms[hsmsIndex].Jsonize());
   }
   payload.WithArray("Hsms", std::move(hsmsJsonList));

  }

  if(m_hsmTypeHasBeenSet)
  {
   payload.WithString("HsmType", m_hsmType);

  }

  if(m_preCoPasswordHasBeenSet)
  {
   payload.WithString("PreCoPassword", m_preCoPassword);

  }

  if(m_securityGroupHasBeenSet)
  {
   payload.WithString("SecurityGroup", m_securityGroup);

  }

  if(m_sourceBackupIdHasBeenSet)
  {
   payload.WithString("SourceBackupId", m_sourceBackupId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ClusterStateMapper::GetNameForClusterState(m_state));
  }

  if(m_stateMessageHasBeenSet)
  {
   payload.WithString("StateMessage", m_stateMessage);

  }

  if(m_subnetMappingHasBeenSet)
  {
   JsonValue subnetMappingJsonMap;
   for(auto& subnetMappingItem : m_subnetMapping)
   {
     subnetMappingJsonMap.WithString(subnetMappingItem.first, subnetMappingItem.second);
   }
   payload.WithObject("SubnetMapping", std::move(subnetMappingJsonMap));

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_certificatesHasBeenSet)
  {
   payload.WithObject("Certificates", m_certificates.Jsonize());

  }

  if(m_tagListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagListJsonList(m_tagList.size());
   for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
   {
     tagListJsonList[tagListIndex].AsObject(m_tagList[tagListIndex].Jsonize());
   }
   payload.WithArray("TagList", std::move(tagListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
