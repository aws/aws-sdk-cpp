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

#include <aws/redshift/model/Cluster.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

Cluster::Cluster() : 
    m_clusterIdentifierHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_clusterAvailabilityStatusHasBeenSet(false),
    m_modifyStatusHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_automatedSnapshotRetentionPeriod(0),
    m_automatedSnapshotRetentionPeriodHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false),
    m_clusterSecurityGroupsHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_clusterParameterGroupsHasBeenSet(false),
    m_clusterSubnetGroupNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_allowVersionUpgrade(false),
    m_allowVersionUpgradeHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_restoreStatusHasBeenSet(false),
    m_dataTransferProgressHasBeenSet(false),
    m_hsmStatusHasBeenSet(false),
    m_clusterSnapshotCopyStatusHasBeenSet(false),
    m_clusterPublicKeyHasBeenSet(false),
    m_clusterNodesHasBeenSet(false),
    m_elasticIpStatusHasBeenSet(false),
    m_clusterRevisionNumberHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_enhancedVpcRouting(false),
    m_enhancedVpcRoutingHasBeenSet(false),
    m_iamRolesHasBeenSet(false),
    m_pendingActionsHasBeenSet(false),
    m_maintenanceTrackNameHasBeenSet(false),
    m_elasticResizeNumberOfNodeOptionsHasBeenSet(false),
    m_deferredMaintenanceWindowsHasBeenSet(false),
    m_snapshotScheduleIdentifierHasBeenSet(false),
    m_snapshotScheduleState(ScheduleState::NOT_SET),
    m_snapshotScheduleStateHasBeenSet(false),
    m_resizeInfoHasBeenSet(false)
{
}

Cluster::Cluster(const XmlNode& xmlNode) : 
    m_clusterIdentifierHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_clusterAvailabilityStatusHasBeenSet(false),
    m_modifyStatusHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_automatedSnapshotRetentionPeriod(0),
    m_automatedSnapshotRetentionPeriodHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false),
    m_clusterSecurityGroupsHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_clusterParameterGroupsHasBeenSet(false),
    m_clusterSubnetGroupNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_allowVersionUpgrade(false),
    m_allowVersionUpgradeHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_restoreStatusHasBeenSet(false),
    m_dataTransferProgressHasBeenSet(false),
    m_hsmStatusHasBeenSet(false),
    m_clusterSnapshotCopyStatusHasBeenSet(false),
    m_clusterPublicKeyHasBeenSet(false),
    m_clusterNodesHasBeenSet(false),
    m_elasticIpStatusHasBeenSet(false),
    m_clusterRevisionNumberHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_enhancedVpcRouting(false),
    m_enhancedVpcRoutingHasBeenSet(false),
    m_iamRolesHasBeenSet(false),
    m_pendingActionsHasBeenSet(false),
    m_maintenanceTrackNameHasBeenSet(false),
    m_elasticResizeNumberOfNodeOptionsHasBeenSet(false),
    m_deferredMaintenanceWindowsHasBeenSet(false),
    m_snapshotScheduleIdentifierHasBeenSet(false),
    m_snapshotScheduleState(ScheduleState::NOT_SET),
    m_snapshotScheduleStateHasBeenSet(false),
    m_resizeInfoHasBeenSet(false)
{
  *this = xmlNode;
}

Cluster& Cluster::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = clusterIdentifierNode.GetText();
      m_clusterIdentifierHasBeenSet = true;
    }
    XmlNode nodeTypeNode = resultNode.FirstChild("NodeType");
    if(!nodeTypeNode.IsNull())
    {
      m_nodeType = nodeTypeNode.GetText();
      m_nodeTypeHasBeenSet = true;
    }
    XmlNode clusterStatusNode = resultNode.FirstChild("ClusterStatus");
    if(!clusterStatusNode.IsNull())
    {
      m_clusterStatus = clusterStatusNode.GetText();
      m_clusterStatusHasBeenSet = true;
    }
    XmlNode clusterAvailabilityStatusNode = resultNode.FirstChild("ClusterAvailabilityStatus");
    if(!clusterAvailabilityStatusNode.IsNull())
    {
      m_clusterAvailabilityStatus = clusterAvailabilityStatusNode.GetText();
      m_clusterAvailabilityStatusHasBeenSet = true;
    }
    XmlNode modifyStatusNode = resultNode.FirstChild("ModifyStatus");
    if(!modifyStatusNode.IsNull())
    {
      m_modifyStatus = modifyStatusNode.GetText();
      m_modifyStatusHasBeenSet = true;
    }
    XmlNode masterUsernameNode = resultNode.FirstChild("MasterUsername");
    if(!masterUsernameNode.IsNull())
    {
      m_masterUsername = masterUsernameNode.GetText();
      m_masterUsernameHasBeenSet = true;
    }
    XmlNode dBNameNode = resultNode.FirstChild("DBName");
    if(!dBNameNode.IsNull())
    {
      m_dBName = dBNameNode.GetText();
      m_dBNameHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = endpointNode;
      m_endpointHasBeenSet = true;
    }
    XmlNode clusterCreateTimeNode = resultNode.FirstChild("ClusterCreateTime");
    if(!clusterCreateTimeNode.IsNull())
    {
      m_clusterCreateTime = DateTime(StringUtils::Trim(clusterCreateTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_clusterCreateTimeHasBeenSet = true;
    }
    XmlNode automatedSnapshotRetentionPeriodNode = resultNode.FirstChild("AutomatedSnapshotRetentionPeriod");
    if(!automatedSnapshotRetentionPeriodNode.IsNull())
    {
      m_automatedSnapshotRetentionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(automatedSnapshotRetentionPeriodNode.GetText().c_str()).c_str());
      m_automatedSnapshotRetentionPeriodHasBeenSet = true;
    }
    XmlNode manualSnapshotRetentionPeriodNode = resultNode.FirstChild("ManualSnapshotRetentionPeriod");
    if(!manualSnapshotRetentionPeriodNode.IsNull())
    {
      m_manualSnapshotRetentionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(manualSnapshotRetentionPeriodNode.GetText().c_str()).c_str());
      m_manualSnapshotRetentionPeriodHasBeenSet = true;
    }
    XmlNode clusterSecurityGroupsNode = resultNode.FirstChild("ClusterSecurityGroups");
    if(!clusterSecurityGroupsNode.IsNull())
    {
      XmlNode clusterSecurityGroupsMember = clusterSecurityGroupsNode.FirstChild("ClusterSecurityGroup");
      while(!clusterSecurityGroupsMember.IsNull())
      {
        m_clusterSecurityGroups.push_back(clusterSecurityGroupsMember);
        clusterSecurityGroupsMember = clusterSecurityGroupsMember.NextNode("ClusterSecurityGroup");
      }

      m_clusterSecurityGroupsHasBeenSet = true;
    }
    XmlNode vpcSecurityGroupsNode = resultNode.FirstChild("VpcSecurityGroups");
    if(!vpcSecurityGroupsNode.IsNull())
    {
      XmlNode vpcSecurityGroupsMember = vpcSecurityGroupsNode.FirstChild("VpcSecurityGroup");
      while(!vpcSecurityGroupsMember.IsNull())
      {
        m_vpcSecurityGroups.push_back(vpcSecurityGroupsMember);
        vpcSecurityGroupsMember = vpcSecurityGroupsMember.NextNode("VpcSecurityGroup");
      }

      m_vpcSecurityGroupsHasBeenSet = true;
    }
    XmlNode clusterParameterGroupsNode = resultNode.FirstChild("ClusterParameterGroups");
    if(!clusterParameterGroupsNode.IsNull())
    {
      XmlNode clusterParameterGroupsMember = clusterParameterGroupsNode.FirstChild("ClusterParameterGroup");
      while(!clusterParameterGroupsMember.IsNull())
      {
        m_clusterParameterGroups.push_back(clusterParameterGroupsMember);
        clusterParameterGroupsMember = clusterParameterGroupsMember.NextNode("ClusterParameterGroup");
      }

      m_clusterParameterGroupsHasBeenSet = true;
    }
    XmlNode clusterSubnetGroupNameNode = resultNode.FirstChild("ClusterSubnetGroupName");
    if(!clusterSubnetGroupNameNode.IsNull())
    {
      m_clusterSubnetGroupName = clusterSubnetGroupNameNode.GetText();
      m_clusterSubnetGroupNameHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = availabilityZoneNode.GetText();
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode preferredMaintenanceWindowNode = resultNode.FirstChild("PreferredMaintenanceWindow");
    if(!preferredMaintenanceWindowNode.IsNull())
    {
      m_preferredMaintenanceWindow = preferredMaintenanceWindowNode.GetText();
      m_preferredMaintenanceWindowHasBeenSet = true;
    }
    XmlNode pendingModifiedValuesNode = resultNode.FirstChild("PendingModifiedValues");
    if(!pendingModifiedValuesNode.IsNull())
    {
      m_pendingModifiedValues = pendingModifiedValuesNode;
      m_pendingModifiedValuesHasBeenSet = true;
    }
    XmlNode clusterVersionNode = resultNode.FirstChild("ClusterVersion");
    if(!clusterVersionNode.IsNull())
    {
      m_clusterVersion = clusterVersionNode.GetText();
      m_clusterVersionHasBeenSet = true;
    }
    XmlNode allowVersionUpgradeNode = resultNode.FirstChild("AllowVersionUpgrade");
    if(!allowVersionUpgradeNode.IsNull())
    {
      m_allowVersionUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(allowVersionUpgradeNode.GetText().c_str()).c_str());
      m_allowVersionUpgradeHasBeenSet = true;
    }
    XmlNode numberOfNodesNode = resultNode.FirstChild("NumberOfNodes");
    if(!numberOfNodesNode.IsNull())
    {
      m_numberOfNodes = StringUtils::ConvertToInt32(StringUtils::Trim(numberOfNodesNode.GetText().c_str()).c_str());
      m_numberOfNodesHasBeenSet = true;
    }
    XmlNode publiclyAccessibleNode = resultNode.FirstChild("PubliclyAccessible");
    if(!publiclyAccessibleNode.IsNull())
    {
      m_publiclyAccessible = StringUtils::ConvertToBool(StringUtils::Trim(publiclyAccessibleNode.GetText().c_str()).c_str());
      m_publiclyAccessibleHasBeenSet = true;
    }
    XmlNode encryptedNode = resultNode.FirstChild("Encrypted");
    if(!encryptedNode.IsNull())
    {
      m_encrypted = StringUtils::ConvertToBool(StringUtils::Trim(encryptedNode.GetText().c_str()).c_str());
      m_encryptedHasBeenSet = true;
    }
    XmlNode restoreStatusNode = resultNode.FirstChild("RestoreStatus");
    if(!restoreStatusNode.IsNull())
    {
      m_restoreStatus = restoreStatusNode;
      m_restoreStatusHasBeenSet = true;
    }
    XmlNode dataTransferProgressNode = resultNode.FirstChild("DataTransferProgress");
    if(!dataTransferProgressNode.IsNull())
    {
      m_dataTransferProgress = dataTransferProgressNode;
      m_dataTransferProgressHasBeenSet = true;
    }
    XmlNode hsmStatusNode = resultNode.FirstChild("HsmStatus");
    if(!hsmStatusNode.IsNull())
    {
      m_hsmStatus = hsmStatusNode;
      m_hsmStatusHasBeenSet = true;
    }
    XmlNode clusterSnapshotCopyStatusNode = resultNode.FirstChild("ClusterSnapshotCopyStatus");
    if(!clusterSnapshotCopyStatusNode.IsNull())
    {
      m_clusterSnapshotCopyStatus = clusterSnapshotCopyStatusNode;
      m_clusterSnapshotCopyStatusHasBeenSet = true;
    }
    XmlNode clusterPublicKeyNode = resultNode.FirstChild("ClusterPublicKey");
    if(!clusterPublicKeyNode.IsNull())
    {
      m_clusterPublicKey = clusterPublicKeyNode.GetText();
      m_clusterPublicKeyHasBeenSet = true;
    }
    XmlNode clusterNodesNode = resultNode.FirstChild("ClusterNodes");
    if(!clusterNodesNode.IsNull())
    {
      XmlNode clusterNodesMember = clusterNodesNode.FirstChild("member");
      while(!clusterNodesMember.IsNull())
      {
        m_clusterNodes.push_back(clusterNodesMember);
        clusterNodesMember = clusterNodesMember.NextNode("member");
      }

      m_clusterNodesHasBeenSet = true;
    }
    XmlNode elasticIpStatusNode = resultNode.FirstChild("ElasticIpStatus");
    if(!elasticIpStatusNode.IsNull())
    {
      m_elasticIpStatus = elasticIpStatusNode;
      m_elasticIpStatusHasBeenSet = true;
    }
    XmlNode clusterRevisionNumberNode = resultNode.FirstChild("ClusterRevisionNumber");
    if(!clusterRevisionNumberNode.IsNull())
    {
      m_clusterRevisionNumber = clusterRevisionNumberNode.GetText();
      m_clusterRevisionNumberHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = kmsKeyIdNode.GetText();
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode enhancedVpcRoutingNode = resultNode.FirstChild("EnhancedVpcRouting");
    if(!enhancedVpcRoutingNode.IsNull())
    {
      m_enhancedVpcRouting = StringUtils::ConvertToBool(StringUtils::Trim(enhancedVpcRoutingNode.GetText().c_str()).c_str());
      m_enhancedVpcRoutingHasBeenSet = true;
    }
    XmlNode iamRolesNode = resultNode.FirstChild("IamRoles");
    if(!iamRolesNode.IsNull())
    {
      XmlNode iamRolesMember = iamRolesNode.FirstChild("ClusterIamRole");
      while(!iamRolesMember.IsNull())
      {
        m_iamRoles.push_back(iamRolesMember);
        iamRolesMember = iamRolesMember.NextNode("ClusterIamRole");
      }

      m_iamRolesHasBeenSet = true;
    }
    XmlNode pendingActionsNode = resultNode.FirstChild("PendingActions");
    if(!pendingActionsNode.IsNull())
    {
      XmlNode pendingActionsMember = pendingActionsNode.FirstChild("member");
      while(!pendingActionsMember.IsNull())
      {
        m_pendingActions.push_back(pendingActionsMember.GetText());
        pendingActionsMember = pendingActionsMember.NextNode("member");
      }

      m_pendingActionsHasBeenSet = true;
    }
    XmlNode maintenanceTrackNameNode = resultNode.FirstChild("MaintenanceTrackName");
    if(!maintenanceTrackNameNode.IsNull())
    {
      m_maintenanceTrackName = maintenanceTrackNameNode.GetText();
      m_maintenanceTrackNameHasBeenSet = true;
    }
    XmlNode elasticResizeNumberOfNodeOptionsNode = resultNode.FirstChild("ElasticResizeNumberOfNodeOptions");
    if(!elasticResizeNumberOfNodeOptionsNode.IsNull())
    {
      m_elasticResizeNumberOfNodeOptions = elasticResizeNumberOfNodeOptionsNode.GetText();
      m_elasticResizeNumberOfNodeOptionsHasBeenSet = true;
    }
    XmlNode deferredMaintenanceWindowsNode = resultNode.FirstChild("DeferredMaintenanceWindows");
    if(!deferredMaintenanceWindowsNode.IsNull())
    {
      XmlNode deferredMaintenanceWindowsMember = deferredMaintenanceWindowsNode.FirstChild("DeferredMaintenanceWindow");
      while(!deferredMaintenanceWindowsMember.IsNull())
      {
        m_deferredMaintenanceWindows.push_back(deferredMaintenanceWindowsMember);
        deferredMaintenanceWindowsMember = deferredMaintenanceWindowsMember.NextNode("DeferredMaintenanceWindow");
      }

      m_deferredMaintenanceWindowsHasBeenSet = true;
    }
    XmlNode snapshotScheduleIdentifierNode = resultNode.FirstChild("SnapshotScheduleIdentifier");
    if(!snapshotScheduleIdentifierNode.IsNull())
    {
      m_snapshotScheduleIdentifier = snapshotScheduleIdentifierNode.GetText();
      m_snapshotScheduleIdentifierHasBeenSet = true;
    }
    XmlNode snapshotScheduleStateNode = resultNode.FirstChild("SnapshotScheduleState");
    if(!snapshotScheduleStateNode.IsNull())
    {
      m_snapshotScheduleState = ScheduleStateMapper::GetScheduleStateForName(StringUtils::Trim(snapshotScheduleStateNode.GetText().c_str()).c_str());
      m_snapshotScheduleStateHasBeenSet = true;
    }
    XmlNode resizeInfoNode = resultNode.FirstChild("ResizeInfo");
    if(!resizeInfoNode.IsNull())
    {
      m_resizeInfo = resizeInfoNode;
      m_resizeInfoHasBeenSet = true;
    }
  }

  return *this;
}

void Cluster::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_nodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeType=" << StringUtils::URLEncode(m_nodeType.c_str()) << "&";
  }

  if(m_clusterStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterStatus=" << StringUtils::URLEncode(m_clusterStatus.c_str()) << "&";
  }

  if(m_clusterAvailabilityStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterAvailabilityStatus=" << StringUtils::URLEncode(m_clusterAvailabilityStatus.c_str()) << "&";
  }

  if(m_modifyStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ModifyStatus=" << StringUtils::URLEncode(m_modifyStatus.c_str()) << "&";
  }

  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if(m_dBNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBName=" << StringUtils::URLEncode(m_dBName.c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
      Aws::StringStream endpointLocationAndMemberSs;
      endpointLocationAndMemberSs << location << index << locationValue << ".Endpoint";
      m_endpoint.OutputToStream(oStream, endpointLocationAndMemberSs.str().c_str());
  }

  if(m_clusterCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterCreateTime=" << StringUtils::URLEncode(m_clusterCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_automatedSnapshotRetentionPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutomatedSnapshotRetentionPeriod=" << m_automatedSnapshotRetentionPeriod << "&";
  }

  if(m_manualSnapshotRetentionPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".ManualSnapshotRetentionPeriod=" << m_manualSnapshotRetentionPeriod << "&";
  }

  if(m_clusterSecurityGroupsHasBeenSet)
  {
      unsigned clusterSecurityGroupsIdx = 1;
      for(auto& item : m_clusterSecurityGroups)
      {
        Aws::StringStream clusterSecurityGroupsSs;
        clusterSecurityGroupsSs << location << index << locationValue << ".ClusterSecurityGroup." << clusterSecurityGroupsIdx++;
        item.OutputToStream(oStream, clusterSecurityGroupsSs.str().c_str());
      }
  }

  if(m_vpcSecurityGroupsHasBeenSet)
  {
      unsigned vpcSecurityGroupsIdx = 1;
      for(auto& item : m_vpcSecurityGroups)
      {
        Aws::StringStream vpcSecurityGroupsSs;
        vpcSecurityGroupsSs << location << index << locationValue << ".VpcSecurityGroup." << vpcSecurityGroupsIdx++;
        item.OutputToStream(oStream, vpcSecurityGroupsSs.str().c_str());
      }
  }

  if(m_clusterParameterGroupsHasBeenSet)
  {
      unsigned clusterParameterGroupsIdx = 1;
      for(auto& item : m_clusterParameterGroups)
      {
        Aws::StringStream clusterParameterGroupsSs;
        clusterParameterGroupsSs << location << index << locationValue << ".ClusterParameterGroup." << clusterParameterGroupsIdx++;
        item.OutputToStream(oStream, clusterParameterGroupsSs.str().c_str());
      }
  }

  if(m_clusterSubnetGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterSubnetGroupName=" << StringUtils::URLEncode(m_clusterSubnetGroupName.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }

  if(m_pendingModifiedValuesHasBeenSet)
  {
      Aws::StringStream pendingModifiedValuesLocationAndMemberSs;
      pendingModifiedValuesLocationAndMemberSs << location << index << locationValue << ".PendingModifiedValues";
      m_pendingModifiedValues.OutputToStream(oStream, pendingModifiedValuesLocationAndMemberSs.str().c_str());
  }

  if(m_clusterVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterVersion=" << StringUtils::URLEncode(m_clusterVersion.c_str()) << "&";
  }

  if(m_allowVersionUpgradeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowVersionUpgrade=" << std::boolalpha << m_allowVersionUpgrade << "&";
  }

  if(m_numberOfNodesHasBeenSet)
  {
      oStream << location << index << locationValue << ".NumberOfNodes=" << m_numberOfNodes << "&";
  }

  if(m_publiclyAccessibleHasBeenSet)
  {
      oStream << location << index << locationValue << ".PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }

  if(m_encryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

  if(m_restoreStatusHasBeenSet)
  {
      Aws::StringStream restoreStatusLocationAndMemberSs;
      restoreStatusLocationAndMemberSs << location << index << locationValue << ".RestoreStatus";
      m_restoreStatus.OutputToStream(oStream, restoreStatusLocationAndMemberSs.str().c_str());
  }

  if(m_dataTransferProgressHasBeenSet)
  {
      Aws::StringStream dataTransferProgressLocationAndMemberSs;
      dataTransferProgressLocationAndMemberSs << location << index << locationValue << ".DataTransferProgress";
      m_dataTransferProgress.OutputToStream(oStream, dataTransferProgressLocationAndMemberSs.str().c_str());
  }

  if(m_hsmStatusHasBeenSet)
  {
      Aws::StringStream hsmStatusLocationAndMemberSs;
      hsmStatusLocationAndMemberSs << location << index << locationValue << ".HsmStatus";
      m_hsmStatus.OutputToStream(oStream, hsmStatusLocationAndMemberSs.str().c_str());
  }

  if(m_clusterSnapshotCopyStatusHasBeenSet)
  {
      Aws::StringStream clusterSnapshotCopyStatusLocationAndMemberSs;
      clusterSnapshotCopyStatusLocationAndMemberSs << location << index << locationValue << ".ClusterSnapshotCopyStatus";
      m_clusterSnapshotCopyStatus.OutputToStream(oStream, clusterSnapshotCopyStatusLocationAndMemberSs.str().c_str());
  }

  if(m_clusterPublicKeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterPublicKey=" << StringUtils::URLEncode(m_clusterPublicKey.c_str()) << "&";
  }

  if(m_clusterNodesHasBeenSet)
  {
      unsigned clusterNodesIdx = 1;
      for(auto& item : m_clusterNodes)
      {
        Aws::StringStream clusterNodesSs;
        clusterNodesSs << location << index << locationValue << ".ClusterNodes.member." << clusterNodesIdx++;
        item.OutputToStream(oStream, clusterNodesSs.str().c_str());
      }
  }

  if(m_elasticIpStatusHasBeenSet)
  {
      Aws::StringStream elasticIpStatusLocationAndMemberSs;
      elasticIpStatusLocationAndMemberSs << location << index << locationValue << ".ElasticIpStatus";
      m_elasticIpStatus.OutputToStream(oStream, elasticIpStatusLocationAndMemberSs.str().c_str());
  }

  if(m_clusterRevisionNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterRevisionNumber=" << StringUtils::URLEncode(m_clusterRevisionNumber.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_enhancedVpcRoutingHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnhancedVpcRouting=" << std::boolalpha << m_enhancedVpcRouting << "&";
  }

  if(m_iamRolesHasBeenSet)
  {
      unsigned iamRolesIdx = 1;
      for(auto& item : m_iamRoles)
      {
        Aws::StringStream iamRolesSs;
        iamRolesSs << location << index << locationValue << ".ClusterIamRole." << iamRolesIdx++;
        item.OutputToStream(oStream, iamRolesSs.str().c_str());
      }
  }

  if(m_pendingActionsHasBeenSet)
  {
      unsigned pendingActionsIdx = 1;
      for(auto& item : m_pendingActions)
      {
        oStream << location << index << locationValue << ".PendingActions.member." << pendingActionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_maintenanceTrackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaintenanceTrackName=" << StringUtils::URLEncode(m_maintenanceTrackName.c_str()) << "&";
  }

  if(m_elasticResizeNumberOfNodeOptionsHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElasticResizeNumberOfNodeOptions=" << StringUtils::URLEncode(m_elasticResizeNumberOfNodeOptions.c_str()) << "&";
  }

  if(m_deferredMaintenanceWindowsHasBeenSet)
  {
      unsigned deferredMaintenanceWindowsIdx = 1;
      for(auto& item : m_deferredMaintenanceWindows)
      {
        Aws::StringStream deferredMaintenanceWindowsSs;
        deferredMaintenanceWindowsSs << location << index << locationValue << ".DeferredMaintenanceWindow." << deferredMaintenanceWindowsIdx++;
        item.OutputToStream(oStream, deferredMaintenanceWindowsSs.str().c_str());
      }
  }

  if(m_snapshotScheduleIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotScheduleIdentifier=" << StringUtils::URLEncode(m_snapshotScheduleIdentifier.c_str()) << "&";
  }

  if(m_snapshotScheduleStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotScheduleState=" << ScheduleStateMapper::GetNameForScheduleState(m_snapshotScheduleState) << "&";
  }

  if(m_resizeInfoHasBeenSet)
  {
      Aws::StringStream resizeInfoLocationAndMemberSs;
      resizeInfoLocationAndMemberSs << location << index << locationValue << ".ResizeInfo";
      m_resizeInfo.OutputToStream(oStream, resizeInfoLocationAndMemberSs.str().c_str());
  }

}

void Cluster::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }
  if(m_nodeTypeHasBeenSet)
  {
      oStream << location << ".NodeType=" << StringUtils::URLEncode(m_nodeType.c_str()) << "&";
  }
  if(m_clusterStatusHasBeenSet)
  {
      oStream << location << ".ClusterStatus=" << StringUtils::URLEncode(m_clusterStatus.c_str()) << "&";
  }
  if(m_clusterAvailabilityStatusHasBeenSet)
  {
      oStream << location << ".ClusterAvailabilityStatus=" << StringUtils::URLEncode(m_clusterAvailabilityStatus.c_str()) << "&";
  }
  if(m_modifyStatusHasBeenSet)
  {
      oStream << location << ".ModifyStatus=" << StringUtils::URLEncode(m_modifyStatus.c_str()) << "&";
  }
  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }
  if(m_dBNameHasBeenSet)
  {
      oStream << location << ".DBName=" << StringUtils::URLEncode(m_dBName.c_str()) << "&";
  }
  if(m_endpointHasBeenSet)
  {
      Aws::String endpointLocationAndMember(location);
      endpointLocationAndMember += ".Endpoint";
      m_endpoint.OutputToStream(oStream, endpointLocationAndMember.c_str());
  }
  if(m_clusterCreateTimeHasBeenSet)
  {
      oStream << location << ".ClusterCreateTime=" << StringUtils::URLEncode(m_clusterCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_automatedSnapshotRetentionPeriodHasBeenSet)
  {
      oStream << location << ".AutomatedSnapshotRetentionPeriod=" << m_automatedSnapshotRetentionPeriod << "&";
  }
  if(m_manualSnapshotRetentionPeriodHasBeenSet)
  {
      oStream << location << ".ManualSnapshotRetentionPeriod=" << m_manualSnapshotRetentionPeriod << "&";
  }
  if(m_clusterSecurityGroupsHasBeenSet)
  {
      unsigned clusterSecurityGroupsIdx = 1;
      for(auto& item : m_clusterSecurityGroups)
      {
        Aws::StringStream clusterSecurityGroupsSs;
        clusterSecurityGroupsSs << location <<  ".ClusterSecurityGroup." << clusterSecurityGroupsIdx++;
        item.OutputToStream(oStream, clusterSecurityGroupsSs.str().c_str());
      }
  }
  if(m_vpcSecurityGroupsHasBeenSet)
  {
      unsigned vpcSecurityGroupsIdx = 1;
      for(auto& item : m_vpcSecurityGroups)
      {
        Aws::StringStream vpcSecurityGroupsSs;
        vpcSecurityGroupsSs << location <<  ".VpcSecurityGroup." << vpcSecurityGroupsIdx++;
        item.OutputToStream(oStream, vpcSecurityGroupsSs.str().c_str());
      }
  }
  if(m_clusterParameterGroupsHasBeenSet)
  {
      unsigned clusterParameterGroupsIdx = 1;
      for(auto& item : m_clusterParameterGroups)
      {
        Aws::StringStream clusterParameterGroupsSs;
        clusterParameterGroupsSs << location <<  ".ClusterParameterGroup." << clusterParameterGroupsIdx++;
        item.OutputToStream(oStream, clusterParameterGroupsSs.str().c_str());
      }
  }
  if(m_clusterSubnetGroupNameHasBeenSet)
  {
      oStream << location << ".ClusterSubnetGroupName=" << StringUtils::URLEncode(m_clusterSubnetGroupName.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_preferredMaintenanceWindowHasBeenSet)
  {
      oStream << location << ".PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }
  if(m_pendingModifiedValuesHasBeenSet)
  {
      Aws::String pendingModifiedValuesLocationAndMember(location);
      pendingModifiedValuesLocationAndMember += ".PendingModifiedValues";
      m_pendingModifiedValues.OutputToStream(oStream, pendingModifiedValuesLocationAndMember.c_str());
  }
  if(m_clusterVersionHasBeenSet)
  {
      oStream << location << ".ClusterVersion=" << StringUtils::URLEncode(m_clusterVersion.c_str()) << "&";
  }
  if(m_allowVersionUpgradeHasBeenSet)
  {
      oStream << location << ".AllowVersionUpgrade=" << std::boolalpha << m_allowVersionUpgrade << "&";
  }
  if(m_numberOfNodesHasBeenSet)
  {
      oStream << location << ".NumberOfNodes=" << m_numberOfNodes << "&";
  }
  if(m_publiclyAccessibleHasBeenSet)
  {
      oStream << location << ".PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }
  if(m_encryptedHasBeenSet)
  {
      oStream << location << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }
  if(m_restoreStatusHasBeenSet)
  {
      Aws::String restoreStatusLocationAndMember(location);
      restoreStatusLocationAndMember += ".RestoreStatus";
      m_restoreStatus.OutputToStream(oStream, restoreStatusLocationAndMember.c_str());
  }
  if(m_dataTransferProgressHasBeenSet)
  {
      Aws::String dataTransferProgressLocationAndMember(location);
      dataTransferProgressLocationAndMember += ".DataTransferProgress";
      m_dataTransferProgress.OutputToStream(oStream, dataTransferProgressLocationAndMember.c_str());
  }
  if(m_hsmStatusHasBeenSet)
  {
      Aws::String hsmStatusLocationAndMember(location);
      hsmStatusLocationAndMember += ".HsmStatus";
      m_hsmStatus.OutputToStream(oStream, hsmStatusLocationAndMember.c_str());
  }
  if(m_clusterSnapshotCopyStatusHasBeenSet)
  {
      Aws::String clusterSnapshotCopyStatusLocationAndMember(location);
      clusterSnapshotCopyStatusLocationAndMember += ".ClusterSnapshotCopyStatus";
      m_clusterSnapshotCopyStatus.OutputToStream(oStream, clusterSnapshotCopyStatusLocationAndMember.c_str());
  }
  if(m_clusterPublicKeyHasBeenSet)
  {
      oStream << location << ".ClusterPublicKey=" << StringUtils::URLEncode(m_clusterPublicKey.c_str()) << "&";
  }
  if(m_clusterNodesHasBeenSet)
  {
      unsigned clusterNodesIdx = 1;
      for(auto& item : m_clusterNodes)
      {
        Aws::StringStream clusterNodesSs;
        clusterNodesSs << location <<  ".ClusterNodes.member." << clusterNodesIdx++;
        item.OutputToStream(oStream, clusterNodesSs.str().c_str());
      }
  }
  if(m_elasticIpStatusHasBeenSet)
  {
      Aws::String elasticIpStatusLocationAndMember(location);
      elasticIpStatusLocationAndMember += ".ElasticIpStatus";
      m_elasticIpStatus.OutputToStream(oStream, elasticIpStatusLocationAndMember.c_str());
  }
  if(m_clusterRevisionNumberHasBeenSet)
  {
      oStream << location << ".ClusterRevisionNumber=" << StringUtils::URLEncode(m_clusterRevisionNumber.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_enhancedVpcRoutingHasBeenSet)
  {
      oStream << location << ".EnhancedVpcRouting=" << std::boolalpha << m_enhancedVpcRouting << "&";
  }
  if(m_iamRolesHasBeenSet)
  {
      unsigned iamRolesIdx = 1;
      for(auto& item : m_iamRoles)
      {
        Aws::StringStream iamRolesSs;
        iamRolesSs << location <<  ".ClusterIamRole." << iamRolesIdx++;
        item.OutputToStream(oStream, iamRolesSs.str().c_str());
      }
  }
  if(m_pendingActionsHasBeenSet)
  {
      unsigned pendingActionsIdx = 1;
      for(auto& item : m_pendingActions)
      {
        oStream << location << ".PendingActions.member." << pendingActionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_maintenanceTrackNameHasBeenSet)
  {
      oStream << location << ".MaintenanceTrackName=" << StringUtils::URLEncode(m_maintenanceTrackName.c_str()) << "&";
  }
  if(m_elasticResizeNumberOfNodeOptionsHasBeenSet)
  {
      oStream << location << ".ElasticResizeNumberOfNodeOptions=" << StringUtils::URLEncode(m_elasticResizeNumberOfNodeOptions.c_str()) << "&";
  }
  if(m_deferredMaintenanceWindowsHasBeenSet)
  {
      unsigned deferredMaintenanceWindowsIdx = 1;
      for(auto& item : m_deferredMaintenanceWindows)
      {
        Aws::StringStream deferredMaintenanceWindowsSs;
        deferredMaintenanceWindowsSs << location <<  ".DeferredMaintenanceWindow." << deferredMaintenanceWindowsIdx++;
        item.OutputToStream(oStream, deferredMaintenanceWindowsSs.str().c_str());
      }
  }
  if(m_snapshotScheduleIdentifierHasBeenSet)
  {
      oStream << location << ".SnapshotScheduleIdentifier=" << StringUtils::URLEncode(m_snapshotScheduleIdentifier.c_str()) << "&";
  }
  if(m_snapshotScheduleStateHasBeenSet)
  {
      oStream << location << ".SnapshotScheduleState=" << ScheduleStateMapper::GetNameForScheduleState(m_snapshotScheduleState) << "&";
  }
  if(m_resizeInfoHasBeenSet)
  {
      Aws::String resizeInfoLocationAndMember(location);
      resizeInfoLocationAndMember += ".ResizeInfo";
      m_resizeInfo.OutputToStream(oStream, resizeInfoLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
