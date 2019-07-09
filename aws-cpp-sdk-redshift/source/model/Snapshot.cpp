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

#include <aws/redshift/model/Snapshot.h>
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

Snapshot::Snapshot() : 
    m_snapshotIdentifierHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_encryptedWithHSM(false),
    m_encryptedWithHSMHasBeenSet(false),
    m_accountsWithRestoreAccessHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_totalBackupSizeInMegaBytes(0.0),
    m_totalBackupSizeInMegaBytesHasBeenSet(false),
    m_actualIncrementalBackupSizeInMegaBytes(0.0),
    m_actualIncrementalBackupSizeInMegaBytesHasBeenSet(false),
    m_backupProgressInMegaBytes(0.0),
    m_backupProgressInMegaBytesHasBeenSet(false),
    m_currentBackupRateInMegaBytesPerSecond(0.0),
    m_currentBackupRateInMegaBytesPerSecondHasBeenSet(false),
    m_estimatedSecondsToCompletion(0),
    m_estimatedSecondsToCompletionHasBeenSet(false),
    m_elapsedTimeInSeconds(0),
    m_elapsedTimeInSecondsHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_restorableNodeTypesHasBeenSet(false),
    m_enhancedVpcRouting(false),
    m_enhancedVpcRoutingHasBeenSet(false),
    m_maintenanceTrackNameHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false),
    m_manualSnapshotRemainingDays(0),
    m_manualSnapshotRemainingDaysHasBeenSet(false),
    m_snapshotRetentionStartTimeHasBeenSet(false)
{
}

Snapshot::Snapshot(const XmlNode& xmlNode) : 
    m_snapshotIdentifierHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_encryptedWithHSM(false),
    m_encryptedWithHSMHasBeenSet(false),
    m_accountsWithRestoreAccessHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_totalBackupSizeInMegaBytes(0.0),
    m_totalBackupSizeInMegaBytesHasBeenSet(false),
    m_actualIncrementalBackupSizeInMegaBytes(0.0),
    m_actualIncrementalBackupSizeInMegaBytesHasBeenSet(false),
    m_backupProgressInMegaBytes(0.0),
    m_backupProgressInMegaBytesHasBeenSet(false),
    m_currentBackupRateInMegaBytesPerSecond(0.0),
    m_currentBackupRateInMegaBytesPerSecondHasBeenSet(false),
    m_estimatedSecondsToCompletion(0),
    m_estimatedSecondsToCompletionHasBeenSet(false),
    m_elapsedTimeInSeconds(0),
    m_elapsedTimeInSecondsHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_restorableNodeTypesHasBeenSet(false),
    m_enhancedVpcRouting(false),
    m_enhancedVpcRoutingHasBeenSet(false),
    m_maintenanceTrackNameHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false),
    m_manualSnapshotRemainingDays(0),
    m_manualSnapshotRemainingDaysHasBeenSet(false),
    m_snapshotRetentionStartTimeHasBeenSet(false)
{
  *this = xmlNode;
}

Snapshot& Snapshot::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode snapshotIdentifierNode = resultNode.FirstChild("SnapshotIdentifier");
    if(!snapshotIdentifierNode.IsNull())
    {
      m_snapshotIdentifier = snapshotIdentifierNode.GetText();
      m_snapshotIdentifierHasBeenSet = true;
    }
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = clusterIdentifierNode.GetText();
      m_clusterIdentifierHasBeenSet = true;
    }
    XmlNode snapshotCreateTimeNode = resultNode.FirstChild("SnapshotCreateTime");
    if(!snapshotCreateTimeNode.IsNull())
    {
      m_snapshotCreateTime = DateTime(StringUtils::Trim(snapshotCreateTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_snapshotCreateTimeHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(portNode.GetText().c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = availabilityZoneNode.GetText();
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode clusterCreateTimeNode = resultNode.FirstChild("ClusterCreateTime");
    if(!clusterCreateTimeNode.IsNull())
    {
      m_clusterCreateTime = DateTime(StringUtils::Trim(clusterCreateTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_clusterCreateTimeHasBeenSet = true;
    }
    XmlNode masterUsernameNode = resultNode.FirstChild("MasterUsername");
    if(!masterUsernameNode.IsNull())
    {
      m_masterUsername = masterUsernameNode.GetText();
      m_masterUsernameHasBeenSet = true;
    }
    XmlNode clusterVersionNode = resultNode.FirstChild("ClusterVersion");
    if(!clusterVersionNode.IsNull())
    {
      m_clusterVersion = clusterVersionNode.GetText();
      m_clusterVersionHasBeenSet = true;
    }
    XmlNode snapshotTypeNode = resultNode.FirstChild("SnapshotType");
    if(!snapshotTypeNode.IsNull())
    {
      m_snapshotType = snapshotTypeNode.GetText();
      m_snapshotTypeHasBeenSet = true;
    }
    XmlNode nodeTypeNode = resultNode.FirstChild("NodeType");
    if(!nodeTypeNode.IsNull())
    {
      m_nodeType = nodeTypeNode.GetText();
      m_nodeTypeHasBeenSet = true;
    }
    XmlNode numberOfNodesNode = resultNode.FirstChild("NumberOfNodes");
    if(!numberOfNodesNode.IsNull())
    {
      m_numberOfNodes = StringUtils::ConvertToInt32(StringUtils::Trim(numberOfNodesNode.GetText().c_str()).c_str());
      m_numberOfNodesHasBeenSet = true;
    }
    XmlNode dBNameNode = resultNode.FirstChild("DBName");
    if(!dBNameNode.IsNull())
    {
      m_dBName = dBNameNode.GetText();
      m_dBNameHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
    XmlNode encryptedNode = resultNode.FirstChild("Encrypted");
    if(!encryptedNode.IsNull())
    {
      m_encrypted = StringUtils::ConvertToBool(StringUtils::Trim(encryptedNode.GetText().c_str()).c_str());
      m_encryptedHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = kmsKeyIdNode.GetText();
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode encryptedWithHSMNode = resultNode.FirstChild("EncryptedWithHSM");
    if(!encryptedWithHSMNode.IsNull())
    {
      m_encryptedWithHSM = StringUtils::ConvertToBool(StringUtils::Trim(encryptedWithHSMNode.GetText().c_str()).c_str());
      m_encryptedWithHSMHasBeenSet = true;
    }
    XmlNode accountsWithRestoreAccessNode = resultNode.FirstChild("AccountsWithRestoreAccess");
    if(!accountsWithRestoreAccessNode.IsNull())
    {
      XmlNode accountsWithRestoreAccessMember = accountsWithRestoreAccessNode.FirstChild("AccountWithRestoreAccess");
      while(!accountsWithRestoreAccessMember.IsNull())
      {
        m_accountsWithRestoreAccess.push_back(accountsWithRestoreAccessMember);
        accountsWithRestoreAccessMember = accountsWithRestoreAccessMember.NextNode("AccountWithRestoreAccess");
      }

      m_accountsWithRestoreAccessHasBeenSet = true;
    }
    XmlNode ownerAccountNode = resultNode.FirstChild("OwnerAccount");
    if(!ownerAccountNode.IsNull())
    {
      m_ownerAccount = ownerAccountNode.GetText();
      m_ownerAccountHasBeenSet = true;
    }
    XmlNode totalBackupSizeInMegaBytesNode = resultNode.FirstChild("TotalBackupSizeInMegaBytes");
    if(!totalBackupSizeInMegaBytesNode.IsNull())
    {
      m_totalBackupSizeInMegaBytes = StringUtils::ConvertToDouble(StringUtils::Trim(totalBackupSizeInMegaBytesNode.GetText().c_str()).c_str());
      m_totalBackupSizeInMegaBytesHasBeenSet = true;
    }
    XmlNode actualIncrementalBackupSizeInMegaBytesNode = resultNode.FirstChild("ActualIncrementalBackupSizeInMegaBytes");
    if(!actualIncrementalBackupSizeInMegaBytesNode.IsNull())
    {
      m_actualIncrementalBackupSizeInMegaBytes = StringUtils::ConvertToDouble(StringUtils::Trim(actualIncrementalBackupSizeInMegaBytesNode.GetText().c_str()).c_str());
      m_actualIncrementalBackupSizeInMegaBytesHasBeenSet = true;
    }
    XmlNode backupProgressInMegaBytesNode = resultNode.FirstChild("BackupProgressInMegaBytes");
    if(!backupProgressInMegaBytesNode.IsNull())
    {
      m_backupProgressInMegaBytes = StringUtils::ConvertToDouble(StringUtils::Trim(backupProgressInMegaBytesNode.GetText().c_str()).c_str());
      m_backupProgressInMegaBytesHasBeenSet = true;
    }
    XmlNode currentBackupRateInMegaBytesPerSecondNode = resultNode.FirstChild("CurrentBackupRateInMegaBytesPerSecond");
    if(!currentBackupRateInMegaBytesPerSecondNode.IsNull())
    {
      m_currentBackupRateInMegaBytesPerSecond = StringUtils::ConvertToDouble(StringUtils::Trim(currentBackupRateInMegaBytesPerSecondNode.GetText().c_str()).c_str());
      m_currentBackupRateInMegaBytesPerSecondHasBeenSet = true;
    }
    XmlNode estimatedSecondsToCompletionNode = resultNode.FirstChild("EstimatedSecondsToCompletion");
    if(!estimatedSecondsToCompletionNode.IsNull())
    {
      m_estimatedSecondsToCompletion = StringUtils::ConvertToInt64(StringUtils::Trim(estimatedSecondsToCompletionNode.GetText().c_str()).c_str());
      m_estimatedSecondsToCompletionHasBeenSet = true;
    }
    XmlNode elapsedTimeInSecondsNode = resultNode.FirstChild("ElapsedTimeInSeconds");
    if(!elapsedTimeInSecondsNode.IsNull())
    {
      m_elapsedTimeInSeconds = StringUtils::ConvertToInt64(StringUtils::Trim(elapsedTimeInSecondsNode.GetText().c_str()).c_str());
      m_elapsedTimeInSecondsHasBeenSet = true;
    }
    XmlNode sourceRegionNode = resultNode.FirstChild("SourceRegion");
    if(!sourceRegionNode.IsNull())
    {
      m_sourceRegion = sourceRegionNode.GetText();
      m_sourceRegionHasBeenSet = true;
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
    XmlNode restorableNodeTypesNode = resultNode.FirstChild("RestorableNodeTypes");
    if(!restorableNodeTypesNode.IsNull())
    {
      XmlNode restorableNodeTypesMember = restorableNodeTypesNode.FirstChild("NodeType");
      while(!restorableNodeTypesMember.IsNull())
      {
        m_restorableNodeTypes.push_back(restorableNodeTypesMember.GetText());
        restorableNodeTypesMember = restorableNodeTypesMember.NextNode("NodeType");
      }

      m_restorableNodeTypesHasBeenSet = true;
    }
    XmlNode enhancedVpcRoutingNode = resultNode.FirstChild("EnhancedVpcRouting");
    if(!enhancedVpcRoutingNode.IsNull())
    {
      m_enhancedVpcRouting = StringUtils::ConvertToBool(StringUtils::Trim(enhancedVpcRoutingNode.GetText().c_str()).c_str());
      m_enhancedVpcRoutingHasBeenSet = true;
    }
    XmlNode maintenanceTrackNameNode = resultNode.FirstChild("MaintenanceTrackName");
    if(!maintenanceTrackNameNode.IsNull())
    {
      m_maintenanceTrackName = maintenanceTrackNameNode.GetText();
      m_maintenanceTrackNameHasBeenSet = true;
    }
    XmlNode manualSnapshotRetentionPeriodNode = resultNode.FirstChild("ManualSnapshotRetentionPeriod");
    if(!manualSnapshotRetentionPeriodNode.IsNull())
    {
      m_manualSnapshotRetentionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(manualSnapshotRetentionPeriodNode.GetText().c_str()).c_str());
      m_manualSnapshotRetentionPeriodHasBeenSet = true;
    }
    XmlNode manualSnapshotRemainingDaysNode = resultNode.FirstChild("ManualSnapshotRemainingDays");
    if(!manualSnapshotRemainingDaysNode.IsNull())
    {
      m_manualSnapshotRemainingDays = StringUtils::ConvertToInt32(StringUtils::Trim(manualSnapshotRemainingDaysNode.GetText().c_str()).c_str());
      m_manualSnapshotRemainingDaysHasBeenSet = true;
    }
    XmlNode snapshotRetentionStartTimeNode = resultNode.FirstChild("SnapshotRetentionStartTime");
    if(!snapshotRetentionStartTimeNode.IsNull())
    {
      m_snapshotRetentionStartTime = DateTime(StringUtils::Trim(snapshotRetentionStartTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_snapshotRetentionStartTimeHasBeenSet = true;
    }
  }

  return *this;
}

void Snapshot::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_snapshotIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_snapshotCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotCreateTime=" << StringUtils::URLEncode(m_snapshotCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_clusterCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterCreateTime=" << StringUtils::URLEncode(m_clusterCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if(m_clusterVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterVersion=" << StringUtils::URLEncode(m_clusterVersion.c_str()) << "&";
  }

  if(m_snapshotTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }

  if(m_nodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeType=" << StringUtils::URLEncode(m_nodeType.c_str()) << "&";
  }

  if(m_numberOfNodesHasBeenSet)
  {
      oStream << location << index << locationValue << ".NumberOfNodes=" << m_numberOfNodes << "&";
  }

  if(m_dBNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBName=" << StringUtils::URLEncode(m_dBName.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_encryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_encryptedWithHSMHasBeenSet)
  {
      oStream << location << index << locationValue << ".EncryptedWithHSM=" << std::boolalpha << m_encryptedWithHSM << "&";
  }

  if(m_accountsWithRestoreAccessHasBeenSet)
  {
      unsigned accountsWithRestoreAccessIdx = 1;
      for(auto& item : m_accountsWithRestoreAccess)
      {
        Aws::StringStream accountsWithRestoreAccessSs;
        accountsWithRestoreAccessSs << location << index << locationValue << ".AccountWithRestoreAccess." << accountsWithRestoreAccessIdx++;
        item.OutputToStream(oStream, accountsWithRestoreAccessSs.str().c_str());
      }
  }

  if(m_ownerAccountHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerAccount=" << StringUtils::URLEncode(m_ownerAccount.c_str()) << "&";
  }

  if(m_totalBackupSizeInMegaBytesHasBeenSet)
  {
        oStream << location << index << locationValue << ".TotalBackupSizeInMegaBytes=" << StringUtils::URLEncode(m_totalBackupSizeInMegaBytes) << "&";
  }

  if(m_actualIncrementalBackupSizeInMegaBytesHasBeenSet)
  {
        oStream << location << index << locationValue << ".ActualIncrementalBackupSizeInMegaBytes=" << StringUtils::URLEncode(m_actualIncrementalBackupSizeInMegaBytes) << "&";
  }

  if(m_backupProgressInMegaBytesHasBeenSet)
  {
        oStream << location << index << locationValue << ".BackupProgressInMegaBytes=" << StringUtils::URLEncode(m_backupProgressInMegaBytes) << "&";
  }

  if(m_currentBackupRateInMegaBytesPerSecondHasBeenSet)
  {
        oStream << location << index << locationValue << ".CurrentBackupRateInMegaBytesPerSecond=" << StringUtils::URLEncode(m_currentBackupRateInMegaBytesPerSecond) << "&";
  }

  if(m_estimatedSecondsToCompletionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EstimatedSecondsToCompletion=" << m_estimatedSecondsToCompletion << "&";
  }

  if(m_elapsedTimeInSecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElapsedTimeInSeconds=" << m_elapsedTimeInSeconds << "&";
  }

  if(m_sourceRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceRegion=" << StringUtils::URLEncode(m_sourceRegion.c_str()) << "&";
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

  if(m_restorableNodeTypesHasBeenSet)
  {
      unsigned restorableNodeTypesIdx = 1;
      for(auto& item : m_restorableNodeTypes)
      {
        oStream << location << index << locationValue << ".NodeType." << restorableNodeTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_enhancedVpcRoutingHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnhancedVpcRouting=" << std::boolalpha << m_enhancedVpcRouting << "&";
  }

  if(m_maintenanceTrackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaintenanceTrackName=" << StringUtils::URLEncode(m_maintenanceTrackName.c_str()) << "&";
  }

  if(m_manualSnapshotRetentionPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".ManualSnapshotRetentionPeriod=" << m_manualSnapshotRetentionPeriod << "&";
  }

  if(m_manualSnapshotRemainingDaysHasBeenSet)
  {
      oStream << location << index << locationValue << ".ManualSnapshotRemainingDays=" << m_manualSnapshotRemainingDays << "&";
  }

  if(m_snapshotRetentionStartTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotRetentionStartTime=" << StringUtils::URLEncode(m_snapshotRetentionStartTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void Snapshot::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_snapshotIdentifierHasBeenSet)
  {
      oStream << location << ".SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }
  if(m_snapshotCreateTimeHasBeenSet)
  {
      oStream << location << ".SnapshotCreateTime=" << StringUtils::URLEncode(m_snapshotCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_clusterCreateTimeHasBeenSet)
  {
      oStream << location << ".ClusterCreateTime=" << StringUtils::URLEncode(m_clusterCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }
  if(m_clusterVersionHasBeenSet)
  {
      oStream << location << ".ClusterVersion=" << StringUtils::URLEncode(m_clusterVersion.c_str()) << "&";
  }
  if(m_snapshotTypeHasBeenSet)
  {
      oStream << location << ".SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }
  if(m_nodeTypeHasBeenSet)
  {
      oStream << location << ".NodeType=" << StringUtils::URLEncode(m_nodeType.c_str()) << "&";
  }
  if(m_numberOfNodesHasBeenSet)
  {
      oStream << location << ".NumberOfNodes=" << m_numberOfNodes << "&";
  }
  if(m_dBNameHasBeenSet)
  {
      oStream << location << ".DBName=" << StringUtils::URLEncode(m_dBName.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_encryptedHasBeenSet)
  {
      oStream << location << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_encryptedWithHSMHasBeenSet)
  {
      oStream << location << ".EncryptedWithHSM=" << std::boolalpha << m_encryptedWithHSM << "&";
  }
  if(m_accountsWithRestoreAccessHasBeenSet)
  {
      unsigned accountsWithRestoreAccessIdx = 1;
      for(auto& item : m_accountsWithRestoreAccess)
      {
        Aws::StringStream accountsWithRestoreAccessSs;
        accountsWithRestoreAccessSs << location <<  ".AccountWithRestoreAccess." << accountsWithRestoreAccessIdx++;
        item.OutputToStream(oStream, accountsWithRestoreAccessSs.str().c_str());
      }
  }
  if(m_ownerAccountHasBeenSet)
  {
      oStream << location << ".OwnerAccount=" << StringUtils::URLEncode(m_ownerAccount.c_str()) << "&";
  }
  if(m_totalBackupSizeInMegaBytesHasBeenSet)
  {
        oStream << location << ".TotalBackupSizeInMegaBytes=" << StringUtils::URLEncode(m_totalBackupSizeInMegaBytes) << "&";
  }
  if(m_actualIncrementalBackupSizeInMegaBytesHasBeenSet)
  {
        oStream << location << ".ActualIncrementalBackupSizeInMegaBytes=" << StringUtils::URLEncode(m_actualIncrementalBackupSizeInMegaBytes) << "&";
  }
  if(m_backupProgressInMegaBytesHasBeenSet)
  {
        oStream << location << ".BackupProgressInMegaBytes=" << StringUtils::URLEncode(m_backupProgressInMegaBytes) << "&";
  }
  if(m_currentBackupRateInMegaBytesPerSecondHasBeenSet)
  {
        oStream << location << ".CurrentBackupRateInMegaBytesPerSecond=" << StringUtils::URLEncode(m_currentBackupRateInMegaBytesPerSecond) << "&";
  }
  if(m_estimatedSecondsToCompletionHasBeenSet)
  {
      oStream << location << ".EstimatedSecondsToCompletion=" << m_estimatedSecondsToCompletion << "&";
  }
  if(m_elapsedTimeInSecondsHasBeenSet)
  {
      oStream << location << ".ElapsedTimeInSeconds=" << m_elapsedTimeInSeconds << "&";
  }
  if(m_sourceRegionHasBeenSet)
  {
      oStream << location << ".SourceRegion=" << StringUtils::URLEncode(m_sourceRegion.c_str()) << "&";
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
  if(m_restorableNodeTypesHasBeenSet)
  {
      unsigned restorableNodeTypesIdx = 1;
      for(auto& item : m_restorableNodeTypes)
      {
        oStream << location << ".NodeType." << restorableNodeTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_enhancedVpcRoutingHasBeenSet)
  {
      oStream << location << ".EnhancedVpcRouting=" << std::boolalpha << m_enhancedVpcRouting << "&";
  }
  if(m_maintenanceTrackNameHasBeenSet)
  {
      oStream << location << ".MaintenanceTrackName=" << StringUtils::URLEncode(m_maintenanceTrackName.c_str()) << "&";
  }
  if(m_manualSnapshotRetentionPeriodHasBeenSet)
  {
      oStream << location << ".ManualSnapshotRetentionPeriod=" << m_manualSnapshotRetentionPeriod << "&";
  }
  if(m_manualSnapshotRemainingDaysHasBeenSet)
  {
      oStream << location << ".ManualSnapshotRemainingDays=" << m_manualSnapshotRemainingDays << "&";
  }
  if(m_snapshotRetentionStartTimeHasBeenSet)
  {
      oStream << location << ".SnapshotRetentionStartTime=" << StringUtils::URLEncode(m_snapshotRetentionStartTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
