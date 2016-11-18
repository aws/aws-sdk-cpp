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
    m_associatedRolesHasBeenSet(false)
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
    m_associatedRolesHasBeenSet(false)
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
        m_availabilityZones.push_back(StringUtils::Trim(availabilityZonesMember.GetText().c_str()));
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
      m_characterSetName = StringUtils::Trim(characterSetNameNode.GetText().c_str());
      m_characterSetNameHasBeenSet = true;
    }
    XmlNode databaseNameNode = resultNode.FirstChild("DatabaseName");
    if(!databaseNameNode.IsNull())
    {
      m_databaseName = StringUtils::Trim(databaseNameNode.GetText().c_str());
      m_databaseNameHasBeenSet = true;
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = StringUtils::Trim(dBClusterIdentifierNode.GetText().c_str());
      m_dBClusterIdentifierHasBeenSet = true;
    }
    XmlNode dBClusterParameterGroupNode = resultNode.FirstChild("DBClusterParameterGroup");
    if(!dBClusterParameterGroupNode.IsNull())
    {
      m_dBClusterParameterGroup = StringUtils::Trim(dBClusterParameterGroupNode.GetText().c_str());
      m_dBClusterParameterGroupHasBeenSet = true;
    }
    XmlNode dBSubnetGroupNode = resultNode.FirstChild("DBSubnetGroup");
    if(!dBSubnetGroupNode.IsNull())
    {
      m_dBSubnetGroup = StringUtils::Trim(dBSubnetGroupNode.GetText().c_str());
      m_dBSubnetGroupHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StringUtils::Trim(statusNode.GetText().c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode percentProgressNode = resultNode.FirstChild("PercentProgress");
    if(!percentProgressNode.IsNull())
    {
      m_percentProgress = StringUtils::Trim(percentProgressNode.GetText().c_str());
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
      m_endpoint = StringUtils::Trim(endpointNode.GetText().c_str());
      m_endpointHasBeenSet = true;
    }
    XmlNode readerEndpointNode = resultNode.FirstChild("ReaderEndpoint");
    if(!readerEndpointNode.IsNull())
    {
      m_readerEndpoint = StringUtils::Trim(readerEndpointNode.GetText().c_str());
      m_readerEndpointHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = StringUtils::Trim(engineNode.GetText().c_str());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = StringUtils::Trim(engineVersionNode.GetText().c_str());
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
      m_masterUsername = StringUtils::Trim(masterUsernameNode.GetText().c_str());
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
      m_preferredBackupWindow = StringUtils::Trim(preferredBackupWindowNode.GetText().c_str());
      m_preferredBackupWindowHasBeenSet = true;
    }
    XmlNode preferredMaintenanceWindowNode = resultNode.FirstChild("PreferredMaintenanceWindow");
    if(!preferredMaintenanceWindowNode.IsNull())
    {
      m_preferredMaintenanceWindow = StringUtils::Trim(preferredMaintenanceWindowNode.GetText().c_str());
      m_preferredMaintenanceWindowHasBeenSet = true;
    }
    XmlNode replicationSourceIdentifierNode = resultNode.FirstChild("ReplicationSourceIdentifier");
    if(!replicationSourceIdentifierNode.IsNull())
    {
      m_replicationSourceIdentifier = StringUtils::Trim(replicationSourceIdentifierNode.GetText().c_str());
      m_replicationSourceIdentifierHasBeenSet = true;
    }
    XmlNode readReplicaIdentifiersNode = resultNode.FirstChild("ReadReplicaIdentifiers");
    if(!readReplicaIdentifiersNode.IsNull())
    {
      XmlNode readReplicaIdentifiersMember = readReplicaIdentifiersNode.FirstChild("ReadReplicaIdentifier");
      while(!readReplicaIdentifiersMember.IsNull())
      {
        m_readReplicaIdentifiers.push_back(StringUtils::Trim(readReplicaIdentifiersMember.GetText().c_str()));
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
      m_hostedZoneId = StringUtils::Trim(hostedZoneIdNode.GetText().c_str());
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
      m_kmsKeyId = StringUtils::Trim(kmsKeyIdNode.GetText().c_str());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode dbClusterResourceIdNode = resultNode.FirstChild("DbClusterResourceId");
    if(!dbClusterResourceIdNode.IsNull())
    {
      m_dbClusterResourceId = StringUtils::Trim(dbClusterResourceIdNode.GetText().c_str());
      m_dbClusterResourceIdHasBeenSet = true;
    }
    XmlNode dBClusterArnNode = resultNode.FirstChild("DBClusterArn");
    if(!dBClusterArnNode.IsNull())
    {
      m_dBClusterArn = StringUtils::Trim(dBClusterArnNode.GetText().c_str());
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
      oStream << location << index << locationValue << ".StorageEncrypted=" << m_storageEncrypted << "&";
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
      oStream << location << ".StorageEncrypted=" << m_storageEncrypted << "&";
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
}

} // namespace Model
} // namespace RDS
} // namespace Aws
