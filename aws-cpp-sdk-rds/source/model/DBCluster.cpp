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

#include <aws/rds/model/DBCluster.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

DBCluster::DBCluster() : 
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_dBClusterParameterGroupHasBeenSet(false),
    m_dBSubnetGroupHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_percentProgressHasBeenSet(false),
    m_earliestRestorableTimeHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_readerEndpointHasBeenSet(false),
    m_customEndpointsHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_latestRestorableTimeHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_dBClusterOptionGroupMembershipsHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_replicationSourceIdentifierHasBeenSet(false),
    m_readReplicaIdentifiersHasBeenSet(false),
    m_dBClusterMembersHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dbClusterResourceIdHasBeenSet(false),
    m_dBClusterArnHasBeenSet(false),
    m_associatedRolesHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_cloneGroupIdHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_earliestBacktrackTimeHasBeenSet(false),
    m_backtrackWindow(0),
    m_backtrackWindowHasBeenSet(false),
    m_backtrackConsumedChangeRecords(0),
    m_backtrackConsumedChangeRecordsHasBeenSet(false),
    m_enabledCloudwatchLogsExportsHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_engineModeHasBeenSet(false),
    m_scalingConfigurationInfoHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_httpEndpointEnabled(false),
    m_httpEndpointEnabledHasBeenSet(false),
    m_activityStreamMode(ActivityStreamMode::NOT_SET),
    m_activityStreamModeHasBeenSet(false),
    m_activityStreamStatus(ActivityStreamStatus::NOT_SET),
    m_activityStreamStatusHasBeenSet(false),
    m_activityStreamKmsKeyIdHasBeenSet(false),
    m_activityStreamKinesisStreamNameHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_crossAccountClone(false),
    m_crossAccountCloneHasBeenSet(false)
{
}

DBCluster::DBCluster(const XmlNode& xmlNode) : 
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_dBClusterParameterGroupHasBeenSet(false),
    m_dBSubnetGroupHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_percentProgressHasBeenSet(false),
    m_earliestRestorableTimeHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_readerEndpointHasBeenSet(false),
    m_customEndpointsHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_latestRestorableTimeHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_dBClusterOptionGroupMembershipsHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_replicationSourceIdentifierHasBeenSet(false),
    m_readReplicaIdentifiersHasBeenSet(false),
    m_dBClusterMembersHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dbClusterResourceIdHasBeenSet(false),
    m_dBClusterArnHasBeenSet(false),
    m_associatedRolesHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_cloneGroupIdHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_earliestBacktrackTimeHasBeenSet(false),
    m_backtrackWindow(0),
    m_backtrackWindowHasBeenSet(false),
    m_backtrackConsumedChangeRecords(0),
    m_backtrackConsumedChangeRecordsHasBeenSet(false),
    m_enabledCloudwatchLogsExportsHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_engineModeHasBeenSet(false),
    m_scalingConfigurationInfoHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_httpEndpointEnabled(false),
    m_httpEndpointEnabledHasBeenSet(false),
    m_activityStreamMode(ActivityStreamMode::NOT_SET),
    m_activityStreamModeHasBeenSet(false),
    m_activityStreamStatus(ActivityStreamStatus::NOT_SET),
    m_activityStreamStatusHasBeenSet(false),
    m_activityStreamKmsKeyIdHasBeenSet(false),
    m_activityStreamKinesisStreamNameHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_crossAccountClone(false),
    m_crossAccountCloneHasBeenSet(false)
{
  *this = xmlNode;
}

DBCluster& DBCluster::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allocatedStorageNode = resultNode.FirstChild("AllocatedStorage");
    if(!allocatedStorageNode.IsNull())
    {
      m_allocatedStorage = StringUtils::ConvertToInt32(StringUtils::Trim(allocatedStorageNode.GetText().c_str()).c_str());
      m_allocatedStorageHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    if(!availabilityZonesNode.IsNull())
    {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("AvailabilityZone");
      while(!availabilityZonesMember.IsNull())
      {
        m_availabilityZones.push_back(availabilityZonesMember.GetText());
        availabilityZonesMember = availabilityZonesMember.NextNode("AvailabilityZone");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode backupRetentionPeriodNode = resultNode.FirstChild("BackupRetentionPeriod");
    if(!backupRetentionPeriodNode.IsNull())
    {
      m_backupRetentionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(backupRetentionPeriodNode.GetText().c_str()).c_str());
      m_backupRetentionPeriodHasBeenSet = true;
    }
    XmlNode characterSetNameNode = resultNode.FirstChild("CharacterSetName");
    if(!characterSetNameNode.IsNull())
    {
      m_characterSetName = characterSetNameNode.GetText();
      m_characterSetNameHasBeenSet = true;
    }
    XmlNode databaseNameNode = resultNode.FirstChild("DatabaseName");
    if(!databaseNameNode.IsNull())
    {
      m_databaseName = databaseNameNode.GetText();
      m_databaseNameHasBeenSet = true;
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = dBClusterIdentifierNode.GetText();
      m_dBClusterIdentifierHasBeenSet = true;
    }
    XmlNode dBClusterParameterGroupNode = resultNode.FirstChild("DBClusterParameterGroup");
    if(!dBClusterParameterGroupNode.IsNull())
    {
      m_dBClusterParameterGroup = dBClusterParameterGroupNode.GetText();
      m_dBClusterParameterGroupHasBeenSet = true;
    }
    XmlNode dBSubnetGroupNode = resultNode.FirstChild("DBSubnetGroup");
    if(!dBSubnetGroupNode.IsNull())
    {
      m_dBSubnetGroup = dBSubnetGroupNode.GetText();
      m_dBSubnetGroupHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
    }
    XmlNode percentProgressNode = resultNode.FirstChild("PercentProgress");
    if(!percentProgressNode.IsNull())
    {
      m_percentProgress = percentProgressNode.GetText();
      m_percentProgressHasBeenSet = true;
    }
    XmlNode earliestRestorableTimeNode = resultNode.FirstChild("EarliestRestorableTime");
    if(!earliestRestorableTimeNode.IsNull())
    {
      m_earliestRestorableTime = DateTime(StringUtils::Trim(earliestRestorableTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_earliestRestorableTimeHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = endpointNode.GetText();
      m_endpointHasBeenSet = true;
    }
    XmlNode readerEndpointNode = resultNode.FirstChild("ReaderEndpoint");
    if(!readerEndpointNode.IsNull())
    {
      m_readerEndpoint = readerEndpointNode.GetText();
      m_readerEndpointHasBeenSet = true;
    }
    XmlNode customEndpointsNode = resultNode.FirstChild("CustomEndpoints");
    if(!customEndpointsNode.IsNull())
    {
      XmlNode customEndpointsMember = customEndpointsNode.FirstChild("member");
      while(!customEndpointsMember.IsNull())
      {
        m_customEndpoints.push_back(customEndpointsMember.GetText());
        customEndpointsMember = customEndpointsMember.NextNode("member");
      }

      m_customEndpointsHasBeenSet = true;
    }
    XmlNode multiAZNode = resultNode.FirstChild("MultiAZ");
    if(!multiAZNode.IsNull())
    {
      m_multiAZ = StringUtils::ConvertToBool(StringUtils::Trim(multiAZNode.GetText().c_str()).c_str());
      m_multiAZHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = engineNode.GetText();
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = engineVersionNode.GetText();
      m_engineVersionHasBeenSet = true;
    }
    XmlNode latestRestorableTimeNode = resultNode.FirstChild("LatestRestorableTime");
    if(!latestRestorableTimeNode.IsNull())
    {
      m_latestRestorableTime = DateTime(StringUtils::Trim(latestRestorableTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_latestRestorableTimeHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(portNode.GetText().c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode masterUsernameNode = resultNode.FirstChild("MasterUsername");
    if(!masterUsernameNode.IsNull())
    {
      m_masterUsername = masterUsernameNode.GetText();
      m_masterUsernameHasBeenSet = true;
    }
    XmlNode dBClusterOptionGroupMembershipsNode = resultNode.FirstChild("DBClusterOptionGroupMemberships");
    if(!dBClusterOptionGroupMembershipsNode.IsNull())
    {
      XmlNode dBClusterOptionGroupMembershipsMember = dBClusterOptionGroupMembershipsNode.FirstChild("DBClusterOptionGroup");
      while(!dBClusterOptionGroupMembershipsMember.IsNull())
      {
        m_dBClusterOptionGroupMemberships.push_back(dBClusterOptionGroupMembershipsMember);
        dBClusterOptionGroupMembershipsMember = dBClusterOptionGroupMembershipsMember.NextNode("DBClusterOptionGroup");
      }

      m_dBClusterOptionGroupMembershipsHasBeenSet = true;
    }
    XmlNode preferredBackupWindowNode = resultNode.FirstChild("PreferredBackupWindow");
    if(!preferredBackupWindowNode.IsNull())
    {
      m_preferredBackupWindow = preferredBackupWindowNode.GetText();
      m_preferredBackupWindowHasBeenSet = true;
    }
    XmlNode preferredMaintenanceWindowNode = resultNode.FirstChild("PreferredMaintenanceWindow");
    if(!preferredMaintenanceWindowNode.IsNull())
    {
      m_preferredMaintenanceWindow = preferredMaintenanceWindowNode.GetText();
      m_preferredMaintenanceWindowHasBeenSet = true;
    }
    XmlNode replicationSourceIdentifierNode = resultNode.FirstChild("ReplicationSourceIdentifier");
    if(!replicationSourceIdentifierNode.IsNull())
    {
      m_replicationSourceIdentifier = replicationSourceIdentifierNode.GetText();
      m_replicationSourceIdentifierHasBeenSet = true;
    }
    XmlNode readReplicaIdentifiersNode = resultNode.FirstChild("ReadReplicaIdentifiers");
    if(!readReplicaIdentifiersNode.IsNull())
    {
      XmlNode readReplicaIdentifiersMember = readReplicaIdentifiersNode.FirstChild("ReadReplicaIdentifier");
      while(!readReplicaIdentifiersMember.IsNull())
      {
        m_readReplicaIdentifiers.push_back(readReplicaIdentifiersMember.GetText());
        readReplicaIdentifiersMember = readReplicaIdentifiersMember.NextNode("ReadReplicaIdentifier");
      }

      m_readReplicaIdentifiersHasBeenSet = true;
    }
    XmlNode dBClusterMembersNode = resultNode.FirstChild("DBClusterMembers");
    if(!dBClusterMembersNode.IsNull())
    {
      XmlNode dBClusterMembersMember = dBClusterMembersNode.FirstChild("DBClusterMember");
      while(!dBClusterMembersMember.IsNull())
      {
        m_dBClusterMembers.push_back(dBClusterMembersMember);
        dBClusterMembersMember = dBClusterMembersMember.NextNode("DBClusterMember");
      }

      m_dBClusterMembersHasBeenSet = true;
    }
    XmlNode vpcSecurityGroupsNode = resultNode.FirstChild("VpcSecurityGroups");
    if(!vpcSecurityGroupsNode.IsNull())
    {
      XmlNode vpcSecurityGroupsMember = vpcSecurityGroupsNode.FirstChild("VpcSecurityGroupMembership");
      while(!vpcSecurityGroupsMember.IsNull())
      {
        m_vpcSecurityGroups.push_back(vpcSecurityGroupsMember);
        vpcSecurityGroupsMember = vpcSecurityGroupsMember.NextNode("VpcSecurityGroupMembership");
      }

      m_vpcSecurityGroupsHasBeenSet = true;
    }
    XmlNode hostedZoneIdNode = resultNode.FirstChild("HostedZoneId");
    if(!hostedZoneIdNode.IsNull())
    {
      m_hostedZoneId = hostedZoneIdNode.GetText();
      m_hostedZoneIdHasBeenSet = true;
    }
    XmlNode storageEncryptedNode = resultNode.FirstChild("StorageEncrypted");
    if(!storageEncryptedNode.IsNull())
    {
      m_storageEncrypted = StringUtils::ConvertToBool(StringUtils::Trim(storageEncryptedNode.GetText().c_str()).c_str());
      m_storageEncryptedHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = kmsKeyIdNode.GetText();
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode dbClusterResourceIdNode = resultNode.FirstChild("DbClusterResourceId");
    if(!dbClusterResourceIdNode.IsNull())
    {
      m_dbClusterResourceId = dbClusterResourceIdNode.GetText();
      m_dbClusterResourceIdHasBeenSet = true;
    }
    XmlNode dBClusterArnNode = resultNode.FirstChild("DBClusterArn");
    if(!dBClusterArnNode.IsNull())
    {
      m_dBClusterArn = dBClusterArnNode.GetText();
      m_dBClusterArnHasBeenSet = true;
    }
    XmlNode associatedRolesNode = resultNode.FirstChild("AssociatedRoles");
    if(!associatedRolesNode.IsNull())
    {
      XmlNode associatedRolesMember = associatedRolesNode.FirstChild("DBClusterRole");
      while(!associatedRolesMember.IsNull())
      {
        m_associatedRoles.push_back(associatedRolesMember);
        associatedRolesMember = associatedRolesMember.NextNode("DBClusterRole");
      }

      m_associatedRolesHasBeenSet = true;
    }
    XmlNode iAMDatabaseAuthenticationEnabledNode = resultNode.FirstChild("IAMDatabaseAuthenticationEnabled");
    if(!iAMDatabaseAuthenticationEnabledNode.IsNull())
    {
      m_iAMDatabaseAuthenticationEnabled = StringUtils::ConvertToBool(StringUtils::Trim(iAMDatabaseAuthenticationEnabledNode.GetText().c_str()).c_str());
      m_iAMDatabaseAuthenticationEnabledHasBeenSet = true;
    }
    XmlNode cloneGroupIdNode = resultNode.FirstChild("CloneGroupId");
    if(!cloneGroupIdNode.IsNull())
    {
      m_cloneGroupId = cloneGroupIdNode.GetText();
      m_cloneGroupIdHasBeenSet = true;
    }
    XmlNode clusterCreateTimeNode = resultNode.FirstChild("ClusterCreateTime");
    if(!clusterCreateTimeNode.IsNull())
    {
      m_clusterCreateTime = DateTime(StringUtils::Trim(clusterCreateTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_clusterCreateTimeHasBeenSet = true;
    }
    XmlNode earliestBacktrackTimeNode = resultNode.FirstChild("EarliestBacktrackTime");
    if(!earliestBacktrackTimeNode.IsNull())
    {
      m_earliestBacktrackTime = DateTime(StringUtils::Trim(earliestBacktrackTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_earliestBacktrackTimeHasBeenSet = true;
    }
    XmlNode backtrackWindowNode = resultNode.FirstChild("BacktrackWindow");
    if(!backtrackWindowNode.IsNull())
    {
      m_backtrackWindow = StringUtils::ConvertToInt64(StringUtils::Trim(backtrackWindowNode.GetText().c_str()).c_str());
      m_backtrackWindowHasBeenSet = true;
    }
    XmlNode backtrackConsumedChangeRecordsNode = resultNode.FirstChild("BacktrackConsumedChangeRecords");
    if(!backtrackConsumedChangeRecordsNode.IsNull())
    {
      m_backtrackConsumedChangeRecords = StringUtils::ConvertToInt64(StringUtils::Trim(backtrackConsumedChangeRecordsNode.GetText().c_str()).c_str());
      m_backtrackConsumedChangeRecordsHasBeenSet = true;
    }
    XmlNode enabledCloudwatchLogsExportsNode = resultNode.FirstChild("EnabledCloudwatchLogsExports");
    if(!enabledCloudwatchLogsExportsNode.IsNull())
    {
      XmlNode enabledCloudwatchLogsExportsMember = enabledCloudwatchLogsExportsNode.FirstChild("member");
      while(!enabledCloudwatchLogsExportsMember.IsNull())
      {
        m_enabledCloudwatchLogsExports.push_back(enabledCloudwatchLogsExportsMember.GetText());
        enabledCloudwatchLogsExportsMember = enabledCloudwatchLogsExportsMember.NextNode("member");
      }

      m_enabledCloudwatchLogsExportsHasBeenSet = true;
    }
    XmlNode capacityNode = resultNode.FirstChild("Capacity");
    if(!capacityNode.IsNull())
    {
      m_capacity = StringUtils::ConvertToInt32(StringUtils::Trim(capacityNode.GetText().c_str()).c_str());
      m_capacityHasBeenSet = true;
    }
    XmlNode engineModeNode = resultNode.FirstChild("EngineMode");
    if(!engineModeNode.IsNull())
    {
      m_engineMode = engineModeNode.GetText();
      m_engineModeHasBeenSet = true;
    }
    XmlNode scalingConfigurationInfoNode = resultNode.FirstChild("ScalingConfigurationInfo");
    if(!scalingConfigurationInfoNode.IsNull())
    {
      m_scalingConfigurationInfo = scalingConfigurationInfoNode;
      m_scalingConfigurationInfoHasBeenSet = true;
    }
    XmlNode deletionProtectionNode = resultNode.FirstChild("DeletionProtection");
    if(!deletionProtectionNode.IsNull())
    {
      m_deletionProtection = StringUtils::ConvertToBool(StringUtils::Trim(deletionProtectionNode.GetText().c_str()).c_str());
      m_deletionProtectionHasBeenSet = true;
    }
    XmlNode httpEndpointEnabledNode = resultNode.FirstChild("HttpEndpointEnabled");
    if(!httpEndpointEnabledNode.IsNull())
    {
      m_httpEndpointEnabled = StringUtils::ConvertToBool(StringUtils::Trim(httpEndpointEnabledNode.GetText().c_str()).c_str());
      m_httpEndpointEnabledHasBeenSet = true;
    }
    XmlNode activityStreamModeNode = resultNode.FirstChild("ActivityStreamMode");
    if(!activityStreamModeNode.IsNull())
    {
      m_activityStreamMode = ActivityStreamModeMapper::GetActivityStreamModeForName(StringUtils::Trim(activityStreamModeNode.GetText().c_str()).c_str());
      m_activityStreamModeHasBeenSet = true;
    }
    XmlNode activityStreamStatusNode = resultNode.FirstChild("ActivityStreamStatus");
    if(!activityStreamStatusNode.IsNull())
    {
      m_activityStreamStatus = ActivityStreamStatusMapper::GetActivityStreamStatusForName(StringUtils::Trim(activityStreamStatusNode.GetText().c_str()).c_str());
      m_activityStreamStatusHasBeenSet = true;
    }
    XmlNode activityStreamKmsKeyIdNode = resultNode.FirstChild("ActivityStreamKmsKeyId");
    if(!activityStreamKmsKeyIdNode.IsNull())
    {
      m_activityStreamKmsKeyId = activityStreamKmsKeyIdNode.GetText();
      m_activityStreamKmsKeyIdHasBeenSet = true;
    }
    XmlNode activityStreamKinesisStreamNameNode = resultNode.FirstChild("ActivityStreamKinesisStreamName");
    if(!activityStreamKinesisStreamNameNode.IsNull())
    {
      m_activityStreamKinesisStreamName = activityStreamKinesisStreamNameNode.GetText();
      m_activityStreamKinesisStreamNameHasBeenSet = true;
    }
    XmlNode copyTagsToSnapshotNode = resultNode.FirstChild("CopyTagsToSnapshot");
    if(!copyTagsToSnapshotNode.IsNull())
    {
      m_copyTagsToSnapshot = StringUtils::ConvertToBool(StringUtils::Trim(copyTagsToSnapshotNode.GetText().c_str()).c_str());
      m_copyTagsToSnapshotHasBeenSet = true;
    }
    XmlNode crossAccountCloneNode = resultNode.FirstChild("CrossAccountClone");
    if(!crossAccountCloneNode.IsNull())
    {
      m_crossAccountClone = StringUtils::ConvertToBool(StringUtils::Trim(crossAccountCloneNode.GetText().c_str()).c_str());
      m_crossAccountCloneHasBeenSet = true;
    }
  }

  return *this;
}

void DBCluster::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }

  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << index << locationValue << ".AvailabilityZone." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_backupRetentionPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }

  if(m_characterSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }

  if(m_databaseNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_dBClusterParameterGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterParameterGroup=" << StringUtils::URLEncode(m_dBClusterParameterGroup.c_str()) << "&";
  }

  if(m_dBSubnetGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSubnetGroup=" << StringUtils::URLEncode(m_dBSubnetGroup.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_percentProgressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PercentProgress=" << StringUtils::URLEncode(m_percentProgress.c_str()) << "&";
  }

  if(m_earliestRestorableTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EarliestRestorableTime=" << StringUtils::URLEncode(m_earliestRestorableTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if(m_readerEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReaderEndpoint=" << StringUtils::URLEncode(m_readerEndpoint.c_str()) << "&";
  }

  if(m_customEndpointsHasBeenSet)
  {
      unsigned customEndpointsIdx = 1;
      for(auto& item : m_customEndpoints)
      {
        oStream << location << index << locationValue << ".CustomEndpoints.member." << customEndpointsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_multiAZHasBeenSet)
  {
      oStream << location << index << locationValue << ".MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_latestRestorableTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LatestRestorableTime=" << StringUtils::URLEncode(m_latestRestorableTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if(m_dBClusterOptionGroupMembershipsHasBeenSet)
  {
      unsigned dBClusterOptionGroupMembershipsIdx = 1;
      for(auto& item : m_dBClusterOptionGroupMemberships)
      {
        Aws::StringStream dBClusterOptionGroupMembershipsSs;
        dBClusterOptionGroupMembershipsSs << location << index << locationValue << ".DBClusterOptionGroup." << dBClusterOptionGroupMembershipsIdx++;
        item.OutputToStream(oStream, dBClusterOptionGroupMembershipsSs.str().c_str());
      }
  }

  if(m_preferredBackupWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }

  if(m_replicationSourceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicationSourceIdentifier=" << StringUtils::URLEncode(m_replicationSourceIdentifier.c_str()) << "&";
  }

  if(m_readReplicaIdentifiersHasBeenSet)
  {
      unsigned readReplicaIdentifiersIdx = 1;
      for(auto& item : m_readReplicaIdentifiers)
      {
        oStream << location << index << locationValue << ".ReadReplicaIdentifier." << readReplicaIdentifiersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_dBClusterMembersHasBeenSet)
  {
      unsigned dBClusterMembersIdx = 1;
      for(auto& item : m_dBClusterMembers)
      {
        Aws::StringStream dBClusterMembersSs;
        dBClusterMembersSs << location << index << locationValue << ".DBClusterMember." << dBClusterMembersIdx++;
        item.OutputToStream(oStream, dBClusterMembersSs.str().c_str());
      }
  }

  if(m_vpcSecurityGroupsHasBeenSet)
  {
      unsigned vpcSecurityGroupsIdx = 1;
      for(auto& item : m_vpcSecurityGroups)
      {
        Aws::StringStream vpcSecurityGroupsSs;
        vpcSecurityGroupsSs << location << index << locationValue << ".VpcSecurityGroupMembership." << vpcSecurityGroupsIdx++;
        item.OutputToStream(oStream, vpcSecurityGroupsSs.str().c_str());
      }
  }

  if(m_hostedZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostedZoneId=" << StringUtils::URLEncode(m_hostedZoneId.c_str()) << "&";
  }

  if(m_storageEncryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_dbClusterResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DbClusterResourceId=" << StringUtils::URLEncode(m_dbClusterResourceId.c_str()) << "&";
  }

  if(m_dBClusterArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterArn=" << StringUtils::URLEncode(m_dBClusterArn.c_str()) << "&";
  }

  if(m_associatedRolesHasBeenSet)
  {
      unsigned associatedRolesIdx = 1;
      for(auto& item : m_associatedRoles)
      {
        Aws::StringStream associatedRolesSs;
        associatedRolesSs << location << index << locationValue << ".DBClusterRole." << associatedRolesIdx++;
        item.OutputToStream(oStream, associatedRolesSs.str().c_str());
      }
  }

  if(m_iAMDatabaseAuthenticationEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha << m_iAMDatabaseAuthenticationEnabled << "&";
  }

  if(m_cloneGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CloneGroupId=" << StringUtils::URLEncode(m_cloneGroupId.c_str()) << "&";
  }

  if(m_clusterCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterCreateTime=" << StringUtils::URLEncode(m_clusterCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_earliestBacktrackTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EarliestBacktrackTime=" << StringUtils::URLEncode(m_earliestBacktrackTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_backtrackWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".BacktrackWindow=" << m_backtrackWindow << "&";
  }

  if(m_backtrackConsumedChangeRecordsHasBeenSet)
  {
      oStream << location << index << locationValue << ".BacktrackConsumedChangeRecords=" << m_backtrackConsumedChangeRecords << "&";
  }

  if(m_enabledCloudwatchLogsExportsHasBeenSet)
  {
      unsigned enabledCloudwatchLogsExportsIdx = 1;
      for(auto& item : m_enabledCloudwatchLogsExports)
      {
        oStream << location << index << locationValue << ".EnabledCloudwatchLogsExports.member." << enabledCloudwatchLogsExportsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_capacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Capacity=" << m_capacity << "&";
  }

  if(m_engineModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineMode=" << StringUtils::URLEncode(m_engineMode.c_str()) << "&";
  }

  if(m_scalingConfigurationInfoHasBeenSet)
  {
      Aws::StringStream scalingConfigurationInfoLocationAndMemberSs;
      scalingConfigurationInfoLocationAndMemberSs << location << index << locationValue << ".ScalingConfigurationInfo";
      m_scalingConfigurationInfo.OutputToStream(oStream, scalingConfigurationInfoLocationAndMemberSs.str().c_str());
  }

  if(m_deletionProtectionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }

  if(m_httpEndpointEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpEndpointEnabled=" << std::boolalpha << m_httpEndpointEnabled << "&";
  }

  if(m_activityStreamModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActivityStreamMode=" << ActivityStreamModeMapper::GetNameForActivityStreamMode(m_activityStreamMode) << "&";
  }

  if(m_activityStreamStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActivityStreamStatus=" << ActivityStreamStatusMapper::GetNameForActivityStreamStatus(m_activityStreamStatus) << "&";
  }

  if(m_activityStreamKmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActivityStreamKmsKeyId=" << StringUtils::URLEncode(m_activityStreamKmsKeyId.c_str()) << "&";
  }

  if(m_activityStreamKinesisStreamNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActivityStreamKinesisStreamName=" << StringUtils::URLEncode(m_activityStreamKinesisStreamName.c_str()) << "&";
  }

  if(m_copyTagsToSnapshotHasBeenSet)
  {
      oStream << location << index << locationValue << ".CopyTagsToSnapshot=" << std::boolalpha << m_copyTagsToSnapshot << "&";
  }

  if(m_crossAccountCloneHasBeenSet)
  {
      oStream << location << index << locationValue << ".CrossAccountClone=" << std::boolalpha << m_crossAccountClone << "&";
  }

}

void DBCluster::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << ".AvailabilityZone." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_backupRetentionPeriodHasBeenSet)
  {
      oStream << location << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }
  if(m_characterSetNameHasBeenSet)
  {
      oStream << location << ".CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }
  if(m_databaseNameHasBeenSet)
  {
      oStream << location << ".DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }
  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if(m_dBClusterParameterGroupHasBeenSet)
  {
      oStream << location << ".DBClusterParameterGroup=" << StringUtils::URLEncode(m_dBClusterParameterGroup.c_str()) << "&";
  }
  if(m_dBSubnetGroupHasBeenSet)
  {
      oStream << location << ".DBSubnetGroup=" << StringUtils::URLEncode(m_dBSubnetGroup.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_percentProgressHasBeenSet)
  {
      oStream << location << ".PercentProgress=" << StringUtils::URLEncode(m_percentProgress.c_str()) << "&";
  }
  if(m_earliestRestorableTimeHasBeenSet)
  {
      oStream << location << ".EarliestRestorableTime=" << StringUtils::URLEncode(m_earliestRestorableTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_readerEndpointHasBeenSet)
  {
      oStream << location << ".ReaderEndpoint=" << StringUtils::URLEncode(m_readerEndpoint.c_str()) << "&";
  }
  if(m_customEndpointsHasBeenSet)
  {
      unsigned customEndpointsIdx = 1;
      for(auto& item : m_customEndpoints)
      {
        oStream << location << ".CustomEndpoints.member." << customEndpointsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_multiAZHasBeenSet)
  {
      oStream << location << ".MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_latestRestorableTimeHasBeenSet)
  {
      oStream << location << ".LatestRestorableTime=" << StringUtils::URLEncode(m_latestRestorableTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }
  if(m_dBClusterOptionGroupMembershipsHasBeenSet)
  {
      unsigned dBClusterOptionGroupMembershipsIdx = 1;
      for(auto& item : m_dBClusterOptionGroupMemberships)
      {
        Aws::StringStream dBClusterOptionGroupMembershipsSs;
        dBClusterOptionGroupMembershipsSs << location <<  ".DBClusterOptionGroup." << dBClusterOptionGroupMembershipsIdx++;
        item.OutputToStream(oStream, dBClusterOptionGroupMembershipsSs.str().c_str());
      }
  }
  if(m_preferredBackupWindowHasBeenSet)
  {
      oStream << location << ".PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }
  if(m_preferredMaintenanceWindowHasBeenSet)
  {
      oStream << location << ".PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }
  if(m_replicationSourceIdentifierHasBeenSet)
  {
      oStream << location << ".ReplicationSourceIdentifier=" << StringUtils::URLEncode(m_replicationSourceIdentifier.c_str()) << "&";
  }
  if(m_readReplicaIdentifiersHasBeenSet)
  {
      unsigned readReplicaIdentifiersIdx = 1;
      for(auto& item : m_readReplicaIdentifiers)
      {
        oStream << location << ".ReadReplicaIdentifier." << readReplicaIdentifiersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_dBClusterMembersHasBeenSet)
  {
      unsigned dBClusterMembersIdx = 1;
      for(auto& item : m_dBClusterMembers)
      {
        Aws::StringStream dBClusterMembersSs;
        dBClusterMembersSs << location <<  ".DBClusterMember." << dBClusterMembersIdx++;
        item.OutputToStream(oStream, dBClusterMembersSs.str().c_str());
      }
  }
  if(m_vpcSecurityGroupsHasBeenSet)
  {
      unsigned vpcSecurityGroupsIdx = 1;
      for(auto& item : m_vpcSecurityGroups)
      {
        Aws::StringStream vpcSecurityGroupsSs;
        vpcSecurityGroupsSs << location <<  ".VpcSecurityGroupMembership." << vpcSecurityGroupsIdx++;
        item.OutputToStream(oStream, vpcSecurityGroupsSs.str().c_str());
      }
  }
  if(m_hostedZoneIdHasBeenSet)
  {
      oStream << location << ".HostedZoneId=" << StringUtils::URLEncode(m_hostedZoneId.c_str()) << "&";
  }
  if(m_storageEncryptedHasBeenSet)
  {
      oStream << location << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_dbClusterResourceIdHasBeenSet)
  {
      oStream << location << ".DbClusterResourceId=" << StringUtils::URLEncode(m_dbClusterResourceId.c_str()) << "&";
  }
  if(m_dBClusterArnHasBeenSet)
  {
      oStream << location << ".DBClusterArn=" << StringUtils::URLEncode(m_dBClusterArn.c_str()) << "&";
  }
  if(m_associatedRolesHasBeenSet)
  {
      unsigned associatedRolesIdx = 1;
      for(auto& item : m_associatedRoles)
      {
        Aws::StringStream associatedRolesSs;
        associatedRolesSs << location <<  ".DBClusterRole." << associatedRolesIdx++;
        item.OutputToStream(oStream, associatedRolesSs.str().c_str());
      }
  }
  if(m_iAMDatabaseAuthenticationEnabledHasBeenSet)
  {
      oStream << location << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha << m_iAMDatabaseAuthenticationEnabled << "&";
  }
  if(m_cloneGroupIdHasBeenSet)
  {
      oStream << location << ".CloneGroupId=" << StringUtils::URLEncode(m_cloneGroupId.c_str()) << "&";
  }
  if(m_clusterCreateTimeHasBeenSet)
  {
      oStream << location << ".ClusterCreateTime=" << StringUtils::URLEncode(m_clusterCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_earliestBacktrackTimeHasBeenSet)
  {
      oStream << location << ".EarliestBacktrackTime=" << StringUtils::URLEncode(m_earliestBacktrackTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_backtrackWindowHasBeenSet)
  {
      oStream << location << ".BacktrackWindow=" << m_backtrackWindow << "&";
  }
  if(m_backtrackConsumedChangeRecordsHasBeenSet)
  {
      oStream << location << ".BacktrackConsumedChangeRecords=" << m_backtrackConsumedChangeRecords << "&";
  }
  if(m_enabledCloudwatchLogsExportsHasBeenSet)
  {
      unsigned enabledCloudwatchLogsExportsIdx = 1;
      for(auto& item : m_enabledCloudwatchLogsExports)
      {
        oStream << location << ".EnabledCloudwatchLogsExports.member." << enabledCloudwatchLogsExportsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_capacityHasBeenSet)
  {
      oStream << location << ".Capacity=" << m_capacity << "&";
  }
  if(m_engineModeHasBeenSet)
  {
      oStream << location << ".EngineMode=" << StringUtils::URLEncode(m_engineMode.c_str()) << "&";
  }
  if(m_scalingConfigurationInfoHasBeenSet)
  {
      Aws::String scalingConfigurationInfoLocationAndMember(location);
      scalingConfigurationInfoLocationAndMember += ".ScalingConfigurationInfo";
      m_scalingConfigurationInfo.OutputToStream(oStream, scalingConfigurationInfoLocationAndMember.c_str());
  }
  if(m_deletionProtectionHasBeenSet)
  {
      oStream << location << ".DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }
  if(m_httpEndpointEnabledHasBeenSet)
  {
      oStream << location << ".HttpEndpointEnabled=" << std::boolalpha << m_httpEndpointEnabled << "&";
  }
  if(m_activityStreamModeHasBeenSet)
  {
      oStream << location << ".ActivityStreamMode=" << ActivityStreamModeMapper::GetNameForActivityStreamMode(m_activityStreamMode) << "&";
  }
  if(m_activityStreamStatusHasBeenSet)
  {
      oStream << location << ".ActivityStreamStatus=" << ActivityStreamStatusMapper::GetNameForActivityStreamStatus(m_activityStreamStatus) << "&";
  }
  if(m_activityStreamKmsKeyIdHasBeenSet)
  {
      oStream << location << ".ActivityStreamKmsKeyId=" << StringUtils::URLEncode(m_activityStreamKmsKeyId.c_str()) << "&";
  }
  if(m_activityStreamKinesisStreamNameHasBeenSet)
  {
      oStream << location << ".ActivityStreamKinesisStreamName=" << StringUtils::URLEncode(m_activityStreamKinesisStreamName.c_str()) << "&";
  }
  if(m_copyTagsToSnapshotHasBeenSet)
  {
      oStream << location << ".CopyTagsToSnapshot=" << std::boolalpha << m_copyTagsToSnapshot << "&";
  }
  if(m_crossAccountCloneHasBeenSet)
  {
      oStream << location << ".CrossAccountClone=" << std::boolalpha << m_crossAccountClone << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
