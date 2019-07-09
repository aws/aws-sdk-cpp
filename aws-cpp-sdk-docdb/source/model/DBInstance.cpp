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

#include <aws/docdb/model/DBInstance.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace DocDB
{
namespace Model
{

DBInstance::DBInstance() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_dBInstanceStatusHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_dBSubnetGroupHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_latestRestorableTimeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_statusInfosHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false),
    m_promotionTier(0),
    m_promotionTierHasBeenSet(false),
    m_dBInstanceArnHasBeenSet(false),
    m_enabledCloudwatchLogsExportsHasBeenSet(false)
{
}

DBInstance::DBInstance(const XmlNode& xmlNode) : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_dBInstanceStatusHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_dBSubnetGroupHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_latestRestorableTimeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_statusInfosHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false),
    m_promotionTier(0),
    m_promotionTierHasBeenSet(false),
    m_dBInstanceArnHasBeenSet(false),
    m_enabledCloudwatchLogsExportsHasBeenSet(false)
{
  *this = xmlNode;
}

DBInstance& DBInstance::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBInstanceIdentifierNode = resultNode.FirstChild("DBInstanceIdentifier");
    if(!dBInstanceIdentifierNode.IsNull())
    {
      m_dBInstanceIdentifier = dBInstanceIdentifierNode.GetText();
      m_dBInstanceIdentifierHasBeenSet = true;
    }
    XmlNode dBInstanceClassNode = resultNode.FirstChild("DBInstanceClass");
    if(!dBInstanceClassNode.IsNull())
    {
      m_dBInstanceClass = dBInstanceClassNode.GetText();
      m_dBInstanceClassHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = engineNode.GetText();
      m_engineHasBeenSet = true;
    }
    XmlNode dBInstanceStatusNode = resultNode.FirstChild("DBInstanceStatus");
    if(!dBInstanceStatusNode.IsNull())
    {
      m_dBInstanceStatus = dBInstanceStatusNode.GetText();
      m_dBInstanceStatusHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = endpointNode;
      m_endpointHasBeenSet = true;
    }
    XmlNode instanceCreateTimeNode = resultNode.FirstChild("InstanceCreateTime");
    if(!instanceCreateTimeNode.IsNull())
    {
      m_instanceCreateTime = DateTime(StringUtils::Trim(instanceCreateTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_instanceCreateTimeHasBeenSet = true;
    }
    XmlNode preferredBackupWindowNode = resultNode.FirstChild("PreferredBackupWindow");
    if(!preferredBackupWindowNode.IsNull())
    {
      m_preferredBackupWindow = preferredBackupWindowNode.GetText();
      m_preferredBackupWindowHasBeenSet = true;
    }
    XmlNode backupRetentionPeriodNode = resultNode.FirstChild("BackupRetentionPeriod");
    if(!backupRetentionPeriodNode.IsNull())
    {
      m_backupRetentionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(backupRetentionPeriodNode.GetText().c_str()).c_str());
      m_backupRetentionPeriodHasBeenSet = true;
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
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = availabilityZoneNode.GetText();
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode dBSubnetGroupNode = resultNode.FirstChild("DBSubnetGroup");
    if(!dBSubnetGroupNode.IsNull())
    {
      m_dBSubnetGroup = dBSubnetGroupNode;
      m_dBSubnetGroupHasBeenSet = true;
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
    XmlNode latestRestorableTimeNode = resultNode.FirstChild("LatestRestorableTime");
    if(!latestRestorableTimeNode.IsNull())
    {
      m_latestRestorableTime = DateTime(StringUtils::Trim(latestRestorableTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_latestRestorableTimeHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = engineVersionNode.GetText();
      m_engineVersionHasBeenSet = true;
    }
    XmlNode autoMinorVersionUpgradeNode = resultNode.FirstChild("AutoMinorVersionUpgrade");
    if(!autoMinorVersionUpgradeNode.IsNull())
    {
      m_autoMinorVersionUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(autoMinorVersionUpgradeNode.GetText().c_str()).c_str());
      m_autoMinorVersionUpgradeHasBeenSet = true;
    }
    XmlNode publiclyAccessibleNode = resultNode.FirstChild("PubliclyAccessible");
    if(!publiclyAccessibleNode.IsNull())
    {
      m_publiclyAccessible = StringUtils::ConvertToBool(StringUtils::Trim(publiclyAccessibleNode.GetText().c_str()).c_str());
      m_publiclyAccessibleHasBeenSet = true;
    }
    XmlNode statusInfosNode = resultNode.FirstChild("StatusInfos");
    if(!statusInfosNode.IsNull())
    {
      XmlNode statusInfosMember = statusInfosNode.FirstChild("DBInstanceStatusInfo");
      while(!statusInfosMember.IsNull())
      {
        m_statusInfos.push_back(statusInfosMember);
        statusInfosMember = statusInfosMember.NextNode("DBInstanceStatusInfo");
      }

      m_statusInfosHasBeenSet = true;
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = dBClusterIdentifierNode.GetText();
      m_dBClusterIdentifierHasBeenSet = true;
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
    XmlNode dbiResourceIdNode = resultNode.FirstChild("DbiResourceId");
    if(!dbiResourceIdNode.IsNull())
    {
      m_dbiResourceId = dbiResourceIdNode.GetText();
      m_dbiResourceIdHasBeenSet = true;
    }
    XmlNode promotionTierNode = resultNode.FirstChild("PromotionTier");
    if(!promotionTierNode.IsNull())
    {
      m_promotionTier = StringUtils::ConvertToInt32(StringUtils::Trim(promotionTierNode.GetText().c_str()).c_str());
      m_promotionTierHasBeenSet = true;
    }
    XmlNode dBInstanceArnNode = resultNode.FirstChild("DBInstanceArn");
    if(!dBInstanceArnNode.IsNull())
    {
      m_dBInstanceArn = dBInstanceArnNode.GetText();
      m_dBInstanceArnHasBeenSet = true;
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
  }

  return *this;
}

void DBInstance::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBInstanceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_dBInstanceClassHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_dBInstanceStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceStatus=" << StringUtils::URLEncode(m_dBInstanceStatus.c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
      Aws::StringStream endpointLocationAndMemberSs;
      endpointLocationAndMemberSs << location << index << locationValue << ".Endpoint";
      m_endpoint.OutputToStream(oStream, endpointLocationAndMemberSs.str().c_str());
  }

  if(m_instanceCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceCreateTime=" << StringUtils::URLEncode(m_instanceCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_preferredBackupWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }

  if(m_backupRetentionPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
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

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_dBSubnetGroupHasBeenSet)
  {
      Aws::StringStream dBSubnetGroupLocationAndMemberSs;
      dBSubnetGroupLocationAndMemberSs << location << index << locationValue << ".DBSubnetGroup";
      m_dBSubnetGroup.OutputToStream(oStream, dBSubnetGroupLocationAndMemberSs.str().c_str());
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

  if(m_latestRestorableTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LatestRestorableTime=" << StringUtils::URLEncode(m_latestRestorableTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }

  if(m_publiclyAccessibleHasBeenSet)
  {
      oStream << location << index << locationValue << ".PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }

  if(m_statusInfosHasBeenSet)
  {
      unsigned statusInfosIdx = 1;
      for(auto& item : m_statusInfos)
      {
        Aws::StringStream statusInfosSs;
        statusInfosSs << location << index << locationValue << ".DBInstanceStatusInfo." << statusInfosIdx++;
        item.OutputToStream(oStream, statusInfosSs.str().c_str());
      }
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_storageEncryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_dbiResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DbiResourceId=" << StringUtils::URLEncode(m_dbiResourceId.c_str()) << "&";
  }

  if(m_promotionTierHasBeenSet)
  {
      oStream << location << index << locationValue << ".PromotionTier=" << m_promotionTier << "&";
  }

  if(m_dBInstanceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceArn=" << StringUtils::URLEncode(m_dBInstanceArn.c_str()) << "&";
  }

  if(m_enabledCloudwatchLogsExportsHasBeenSet)
  {
      unsigned enabledCloudwatchLogsExportsIdx = 1;
      for(auto& item : m_enabledCloudwatchLogsExports)
      {
        oStream << location << index << locationValue << ".EnabledCloudwatchLogsExports.member." << enabledCloudwatchLogsExportsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void DBInstance::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBInstanceIdentifierHasBeenSet)
  {
      oStream << location << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }
  if(m_dBInstanceClassHasBeenSet)
  {
      oStream << location << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_dBInstanceStatusHasBeenSet)
  {
      oStream << location << ".DBInstanceStatus=" << StringUtils::URLEncode(m_dBInstanceStatus.c_str()) << "&";
  }
  if(m_endpointHasBeenSet)
  {
      Aws::String endpointLocationAndMember(location);
      endpointLocationAndMember += ".Endpoint";
      m_endpoint.OutputToStream(oStream, endpointLocationAndMember.c_str());
  }
  if(m_instanceCreateTimeHasBeenSet)
  {
      oStream << location << ".InstanceCreateTime=" << StringUtils::URLEncode(m_instanceCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_preferredBackupWindowHasBeenSet)
  {
      oStream << location << ".PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }
  if(m_backupRetentionPeriodHasBeenSet)
  {
      oStream << location << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
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
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_dBSubnetGroupHasBeenSet)
  {
      Aws::String dBSubnetGroupLocationAndMember(location);
      dBSubnetGroupLocationAndMember += ".DBSubnetGroup";
      m_dBSubnetGroup.OutputToStream(oStream, dBSubnetGroupLocationAndMember.c_str());
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
  if(m_latestRestorableTimeHasBeenSet)
  {
      oStream << location << ".LatestRestorableTime=" << StringUtils::URLEncode(m_latestRestorableTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
      oStream << location << ".AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }
  if(m_publiclyAccessibleHasBeenSet)
  {
      oStream << location << ".PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }
  if(m_statusInfosHasBeenSet)
  {
      unsigned statusInfosIdx = 1;
      for(auto& item : m_statusInfos)
      {
        Aws::StringStream statusInfosSs;
        statusInfosSs << location <<  ".DBInstanceStatusInfo." << statusInfosIdx++;
        item.OutputToStream(oStream, statusInfosSs.str().c_str());
      }
  }
  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if(m_storageEncryptedHasBeenSet)
  {
      oStream << location << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_dbiResourceIdHasBeenSet)
  {
      oStream << location << ".DbiResourceId=" << StringUtils::URLEncode(m_dbiResourceId.c_str()) << "&";
  }
  if(m_promotionTierHasBeenSet)
  {
      oStream << location << ".PromotionTier=" << m_promotionTier << "&";
  }
  if(m_dBInstanceArnHasBeenSet)
  {
      oStream << location << ".DBInstanceArn=" << StringUtils::URLEncode(m_dBInstanceArn.c_str()) << "&";
  }
  if(m_enabledCloudwatchLogsExportsHasBeenSet)
  {
      unsigned enabledCloudwatchLogsExportsIdx = 1;
      for(auto& item : m_enabledCloudwatchLogsExports)
      {
        oStream << location << ".EnabledCloudwatchLogsExports.member." << enabledCloudwatchLogsExportsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace DocDB
} // namespace Aws
