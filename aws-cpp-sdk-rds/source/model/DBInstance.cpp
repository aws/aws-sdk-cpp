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
#include <aws/rds/model/DBInstance.h>
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

DBInstance::DBInstance() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_dBInstanceStatusHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_dBSecurityGroupsHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_dBParameterGroupsHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_dBSubnetGroupHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_latestRestorableTimeHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_readReplicaSourceDBInstanceIdentifierHasBeenSet(false),
    m_readReplicaDBInstanceIdentifiersHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_optionGroupMembershipsHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_secondaryAvailabilityZoneHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_statusInfosHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_tdeCredentialArnHasBeenSet(false),
    m_dbInstancePort(0),
    m_dbInstancePortHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false),
    m_cACertificateIdentifierHasBeenSet(false),
    m_domainMembershipsHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_monitoringInterval(0),
    m_monitoringIntervalHasBeenSet(false),
    m_enhancedMonitoringResourceArnHasBeenSet(false),
    m_monitoringRoleArnHasBeenSet(false),
    m_promotionTier(0),
    m_promotionTierHasBeenSet(false),
    m_dBInstanceArnHasBeenSet(false),
    m_timezoneHasBeenSet(false)
{
}

DBInstance::DBInstance(const XmlNode& xmlNode) : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_dBInstanceStatusHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_dBSecurityGroupsHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_dBParameterGroupsHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_dBSubnetGroupHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_latestRestorableTimeHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_readReplicaSourceDBInstanceIdentifierHasBeenSet(false),
    m_readReplicaDBInstanceIdentifiersHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_optionGroupMembershipsHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_secondaryAvailabilityZoneHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_statusInfosHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_tdeCredentialArnHasBeenSet(false),
    m_dbInstancePort(0),
    m_dbInstancePortHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false),
    m_cACertificateIdentifierHasBeenSet(false),
    m_domainMembershipsHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_monitoringInterval(0),
    m_monitoringIntervalHasBeenSet(false),
    m_enhancedMonitoringResourceArnHasBeenSet(false),
    m_monitoringRoleArnHasBeenSet(false),
    m_promotionTier(0),
    m_promotionTierHasBeenSet(false),
    m_dBInstanceArnHasBeenSet(false),
    m_timezoneHasBeenSet(false)
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
      m_dBInstanceIdentifier = StringUtils::Trim(dBInstanceIdentifierNode.GetText().c_str());
      m_dBInstanceIdentifierHasBeenSet = true;
    }
    XmlNode dBInstanceClassNode = resultNode.FirstChild("DBInstanceClass");
    if(!dBInstanceClassNode.IsNull())
    {
      m_dBInstanceClass = StringUtils::Trim(dBInstanceClassNode.GetText().c_str());
      m_dBInstanceClassHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = StringUtils::Trim(engineNode.GetText().c_str());
      m_engineHasBeenSet = true;
    }
    XmlNode dBInstanceStatusNode = resultNode.FirstChild("DBInstanceStatus");
    if(!dBInstanceStatusNode.IsNull())
    {
      m_dBInstanceStatus = StringUtils::Trim(dBInstanceStatusNode.GetText().c_str());
      m_dBInstanceStatusHasBeenSet = true;
    }
    XmlNode masterUsernameNode = resultNode.FirstChild("MasterUsername");
    if(!masterUsernameNode.IsNull())
    {
      m_masterUsername = StringUtils::Trim(masterUsernameNode.GetText().c_str());
      m_masterUsernameHasBeenSet = true;
    }
    XmlNode dBNameNode = resultNode.FirstChild("DBName");
    if(!dBNameNode.IsNull())
    {
      m_dBName = StringUtils::Trim(dBNameNode.GetText().c_str());
      m_dBNameHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = endpointNode;
      m_endpointHasBeenSet = true;
    }
    XmlNode allocatedStorageNode = resultNode.FirstChild("AllocatedStorage");
    if(!allocatedStorageNode.IsNull())
    {
      m_allocatedStorage = StringUtils::ConvertToInt32(StringUtils::Trim(allocatedStorageNode.GetText().c_str()).c_str());
      m_allocatedStorageHasBeenSet = true;
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
      m_preferredBackupWindow = StringUtils::Trim(preferredBackupWindowNode.GetText().c_str());
      m_preferredBackupWindowHasBeenSet = true;
    }
    XmlNode backupRetentionPeriodNode = resultNode.FirstChild("BackupRetentionPeriod");
    if(!backupRetentionPeriodNode.IsNull())
    {
      m_backupRetentionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(backupRetentionPeriodNode.GetText().c_str()).c_str());
      m_backupRetentionPeriodHasBeenSet = true;
    }
    XmlNode dBSecurityGroupsNode = resultNode.FirstChild("DBSecurityGroups");
    if(!dBSecurityGroupsNode.IsNull())
    {
      XmlNode dBSecurityGroupsMember = dBSecurityGroupsNode.FirstChild("DBSecurityGroup");
      while(!dBSecurityGroupsMember.IsNull())
      {
        m_dBSecurityGroups.push_back(dBSecurityGroupsMember);
        dBSecurityGroupsMember = dBSecurityGroupsMember.NextNode("DBSecurityGroup");
      }

      m_dBSecurityGroupsHasBeenSet = true;
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
    XmlNode dBParameterGroupsNode = resultNode.FirstChild("DBParameterGroups");
    if(!dBParameterGroupsNode.IsNull())
    {
      XmlNode dBParameterGroupsMember = dBParameterGroupsNode.FirstChild("DBParameterGroup");
      while(!dBParameterGroupsMember.IsNull())
      {
        m_dBParameterGroups.push_back(dBParameterGroupsMember);
        dBParameterGroupsMember = dBParameterGroupsMember.NextNode("DBParameterGroup");
      }

      m_dBParameterGroupsHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = StringUtils::Trim(availabilityZoneNode.GetText().c_str());
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
      m_preferredMaintenanceWindow = StringUtils::Trim(preferredMaintenanceWindowNode.GetText().c_str());
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
    XmlNode multiAZNode = resultNode.FirstChild("MultiAZ");
    if(!multiAZNode.IsNull())
    {
      m_multiAZ = StringUtils::ConvertToBool(StringUtils::Trim(multiAZNode.GetText().c_str()).c_str());
      m_multiAZHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = StringUtils::Trim(engineVersionNode.GetText().c_str());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode autoMinorVersionUpgradeNode = resultNode.FirstChild("AutoMinorVersionUpgrade");
    if(!autoMinorVersionUpgradeNode.IsNull())
    {
      m_autoMinorVersionUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(autoMinorVersionUpgradeNode.GetText().c_str()).c_str());
      m_autoMinorVersionUpgradeHasBeenSet = true;
    }
    XmlNode readReplicaSourceDBInstanceIdentifierNode = resultNode.FirstChild("ReadReplicaSourceDBInstanceIdentifier");
    if(!readReplicaSourceDBInstanceIdentifierNode.IsNull())
    {
      m_readReplicaSourceDBInstanceIdentifier = StringUtils::Trim(readReplicaSourceDBInstanceIdentifierNode.GetText().c_str());
      m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true;
    }
    XmlNode readReplicaDBInstanceIdentifiersNode = resultNode.FirstChild("ReadReplicaDBInstanceIdentifiers");
    if(!readReplicaDBInstanceIdentifiersNode.IsNull())
    {
      XmlNode readReplicaDBInstanceIdentifiersMember = readReplicaDBInstanceIdentifiersNode.FirstChild("ReadReplicaDBInstanceIdentifier");
      while(!readReplicaDBInstanceIdentifiersMember.IsNull())
      {
        m_readReplicaDBInstanceIdentifiers.push_back(StringUtils::Trim(readReplicaDBInstanceIdentifiersMember.GetText().c_str()));
        readReplicaDBInstanceIdentifiersMember = readReplicaDBInstanceIdentifiersMember.NextNode("ReadReplicaDBInstanceIdentifier");
      }

      m_readReplicaDBInstanceIdentifiersHasBeenSet = true;
    }
    XmlNode licenseModelNode = resultNode.FirstChild("LicenseModel");
    if(!licenseModelNode.IsNull())
    {
      m_licenseModel = StringUtils::Trim(licenseModelNode.GetText().c_str());
      m_licenseModelHasBeenSet = true;
    }
    XmlNode iopsNode = resultNode.FirstChild("Iops");
    if(!iopsNode.IsNull())
    {
      m_iops = StringUtils::ConvertToInt32(StringUtils::Trim(iopsNode.GetText().c_str()).c_str());
      m_iopsHasBeenSet = true;
    }
    XmlNode optionGroupMembershipsNode = resultNode.FirstChild("OptionGroupMemberships");
    if(!optionGroupMembershipsNode.IsNull())
    {
      XmlNode optionGroupMembershipsMember = optionGroupMembershipsNode.FirstChild("OptionGroupMembership");
      while(!optionGroupMembershipsMember.IsNull())
      {
        m_optionGroupMemberships.push_back(optionGroupMembershipsMember);
        optionGroupMembershipsMember = optionGroupMembershipsMember.NextNode("OptionGroupMembership");
      }

      m_optionGroupMembershipsHasBeenSet = true;
    }
    XmlNode characterSetNameNode = resultNode.FirstChild("CharacterSetName");
    if(!characterSetNameNode.IsNull())
    {
      m_characterSetName = StringUtils::Trim(characterSetNameNode.GetText().c_str());
      m_characterSetNameHasBeenSet = true;
    }
    XmlNode secondaryAvailabilityZoneNode = resultNode.FirstChild("SecondaryAvailabilityZone");
    if(!secondaryAvailabilityZoneNode.IsNull())
    {
      m_secondaryAvailabilityZone = StringUtils::Trim(secondaryAvailabilityZoneNode.GetText().c_str());
      m_secondaryAvailabilityZoneHasBeenSet = true;
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
    XmlNode storageTypeNode = resultNode.FirstChild("StorageType");
    if(!storageTypeNode.IsNull())
    {
      m_storageType = StringUtils::Trim(storageTypeNode.GetText().c_str());
      m_storageTypeHasBeenSet = true;
    }
    XmlNode tdeCredentialArnNode = resultNode.FirstChild("TdeCredentialArn");
    if(!tdeCredentialArnNode.IsNull())
    {
      m_tdeCredentialArn = StringUtils::Trim(tdeCredentialArnNode.GetText().c_str());
      m_tdeCredentialArnHasBeenSet = true;
    }
    XmlNode dbInstancePortNode = resultNode.FirstChild("DbInstancePort");
    if(!dbInstancePortNode.IsNull())
    {
      m_dbInstancePort = StringUtils::ConvertToInt32(StringUtils::Trim(dbInstancePortNode.GetText().c_str()).c_str());
      m_dbInstancePortHasBeenSet = true;
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = StringUtils::Trim(dBClusterIdentifierNode.GetText().c_str());
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
      m_kmsKeyId = StringUtils::Trim(kmsKeyIdNode.GetText().c_str());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode dbiResourceIdNode = resultNode.FirstChild("DbiResourceId");
    if(!dbiResourceIdNode.IsNull())
    {
      m_dbiResourceId = StringUtils::Trim(dbiResourceIdNode.GetText().c_str());
      m_dbiResourceIdHasBeenSet = true;
    }
    XmlNode cACertificateIdentifierNode = resultNode.FirstChild("CACertificateIdentifier");
    if(!cACertificateIdentifierNode.IsNull())
    {
      m_cACertificateIdentifier = StringUtils::Trim(cACertificateIdentifierNode.GetText().c_str());
      m_cACertificateIdentifierHasBeenSet = true;
    }
    XmlNode domainMembershipsNode = resultNode.FirstChild("DomainMemberships");
    if(!domainMembershipsNode.IsNull())
    {
      XmlNode domainMembershipsMember = domainMembershipsNode.FirstChild("DomainMembership");
      while(!domainMembershipsMember.IsNull())
      {
        m_domainMemberships.push_back(domainMembershipsMember);
        domainMembershipsMember = domainMembershipsMember.NextNode("DomainMembership");
      }

      m_domainMembershipsHasBeenSet = true;
    }
    XmlNode copyTagsToSnapshotNode = resultNode.FirstChild("CopyTagsToSnapshot");
    if(!copyTagsToSnapshotNode.IsNull())
    {
      m_copyTagsToSnapshot = StringUtils::ConvertToBool(StringUtils::Trim(copyTagsToSnapshotNode.GetText().c_str()).c_str());
      m_copyTagsToSnapshotHasBeenSet = true;
    }
    XmlNode monitoringIntervalNode = resultNode.FirstChild("MonitoringInterval");
    if(!monitoringIntervalNode.IsNull())
    {
      m_monitoringInterval = StringUtils::ConvertToInt32(StringUtils::Trim(monitoringIntervalNode.GetText().c_str()).c_str());
      m_monitoringIntervalHasBeenSet = true;
    }
    XmlNode enhancedMonitoringResourceArnNode = resultNode.FirstChild("EnhancedMonitoringResourceArn");
    if(!enhancedMonitoringResourceArnNode.IsNull())
    {
      m_enhancedMonitoringResourceArn = StringUtils::Trim(enhancedMonitoringResourceArnNode.GetText().c_str());
      m_enhancedMonitoringResourceArnHasBeenSet = true;
    }
    XmlNode monitoringRoleArnNode = resultNode.FirstChild("MonitoringRoleArn");
    if(!monitoringRoleArnNode.IsNull())
    {
      m_monitoringRoleArn = StringUtils::Trim(monitoringRoleArnNode.GetText().c_str());
      m_monitoringRoleArnHasBeenSet = true;
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
      m_dBInstanceArn = StringUtils::Trim(dBInstanceArnNode.GetText().c_str());
      m_dBInstanceArnHasBeenSet = true;
    }
    XmlNode timezoneNode = resultNode.FirstChild("Timezone");
    if(!timezoneNode.IsNull())
    {
      m_timezone = StringUtils::Trim(timezoneNode.GetText().c_str());
      m_timezoneHasBeenSet = true;
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

  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocatedStorage=" << m_allocatedStorage << "&";
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

  if(m_dBSecurityGroupsHasBeenSet)
  {
      unsigned dBSecurityGroupsIdx = 1;
      for(auto& item : m_dBSecurityGroups)
      {
        Aws::StringStream dBSecurityGroupsSs;
        dBSecurityGroupsSs << location << index << locationValue << ".DBSecurityGroup." << dBSecurityGroupsIdx++;
        item.OutputToStream(oStream, dBSecurityGroupsSs.str().c_str());
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

  if(m_dBParameterGroupsHasBeenSet)
  {
      unsigned dBParameterGroupsIdx = 1;
      for(auto& item : m_dBParameterGroups)
      {
        Aws::StringStream dBParameterGroupsSs;
        dBParameterGroupsSs << location << index << locationValue << ".DBParameterGroup." << dBParameterGroupsIdx++;
        item.OutputToStream(oStream, dBParameterGroupsSs.str().c_str());
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

  if(m_multiAZHasBeenSet)
  {
      oStream << location << index << locationValue << ".MultiAZ=" << m_multiAZ << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoMinorVersionUpgrade=" << m_autoMinorVersionUpgrade << "&";
  }

  if(m_readReplicaSourceDBInstanceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReadReplicaSourceDBInstanceIdentifier=" << StringUtils::URLEncode(m_readReplicaSourceDBInstanceIdentifier.c_str()) << "&";
  }

  if(m_readReplicaDBInstanceIdentifiersHasBeenSet)
  {
      unsigned readReplicaDBInstanceIdentifiersIdx = 1;
      for(auto& item : m_readReplicaDBInstanceIdentifiers)
      {
        oStream << location << index << locationValue << ".ReadReplicaDBInstanceIdentifier." << readReplicaDBInstanceIdentifiersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_licenseModelHasBeenSet)
  {
      oStream << location << index << locationValue << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }

  if(m_iopsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Iops=" << m_iops << "&";
  }

  if(m_optionGroupMembershipsHasBeenSet)
  {
      unsigned optionGroupMembershipsIdx = 1;
      for(auto& item : m_optionGroupMemberships)
      {
        Aws::StringStream optionGroupMembershipsSs;
        optionGroupMembershipsSs << location << index << locationValue << ".OptionGroupMembership." << optionGroupMembershipsIdx++;
        item.OutputToStream(oStream, optionGroupMembershipsSs.str().c_str());
      }
  }

  if(m_characterSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }

  if(m_secondaryAvailabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecondaryAvailabilityZone=" << StringUtils::URLEncode(m_secondaryAvailabilityZone.c_str()) << "&";
  }

  if(m_publiclyAccessibleHasBeenSet)
  {
      oStream << location << index << locationValue << ".PubliclyAccessible=" << m_publiclyAccessible << "&";
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

  if(m_storageTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if(m_tdeCredentialArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TdeCredentialArn=" << StringUtils::URLEncode(m_tdeCredentialArn.c_str()) << "&";
  }

  if(m_dbInstancePortHasBeenSet)
  {
      oStream << location << index << locationValue << ".DbInstancePort=" << m_dbInstancePort << "&";
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_storageEncryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageEncrypted=" << m_storageEncrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_dbiResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DbiResourceId=" << StringUtils::URLEncode(m_dbiResourceId.c_str()) << "&";
  }

  if(m_cACertificateIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".CACertificateIdentifier=" << StringUtils::URLEncode(m_cACertificateIdentifier.c_str()) << "&";
  }

  if(m_domainMembershipsHasBeenSet)
  {
      unsigned domainMembershipsIdx = 1;
      for(auto& item : m_domainMemberships)
      {
        Aws::StringStream domainMembershipsSs;
        domainMembershipsSs << location << index << locationValue << ".DomainMembership." << domainMembershipsIdx++;
        item.OutputToStream(oStream, domainMembershipsSs.str().c_str());
      }
  }

  if(m_copyTagsToSnapshotHasBeenSet)
  {
      oStream << location << index << locationValue << ".CopyTagsToSnapshot=" << m_copyTagsToSnapshot << "&";
  }

  if(m_monitoringIntervalHasBeenSet)
  {
      oStream << location << index << locationValue << ".MonitoringInterval=" << m_monitoringInterval << "&";
  }

  if(m_enhancedMonitoringResourceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnhancedMonitoringResourceArn=" << StringUtils::URLEncode(m_enhancedMonitoringResourceArn.c_str()) << "&";
  }

  if(m_monitoringRoleArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".MonitoringRoleArn=" << StringUtils::URLEncode(m_monitoringRoleArn.c_str()) << "&";
  }

  if(m_promotionTierHasBeenSet)
  {
      oStream << location << index << locationValue << ".PromotionTier=" << m_promotionTier << "&";
  }

  if(m_dBInstanceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceArn=" << StringUtils::URLEncode(m_dBInstanceArn.c_str()) << "&";
  }

  if(m_timezoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timezone=" << StringUtils::URLEncode(m_timezone.c_str()) << "&";
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
  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << ".AllocatedStorage=" << m_allocatedStorage << "&";
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
  if(m_dBSecurityGroupsHasBeenSet)
  {
      unsigned dBSecurityGroupsIdx = 1;
      for(auto& item : m_dBSecurityGroups)
      {
        Aws::StringStream dBSecurityGroupsSs;
        dBSecurityGroupsSs << location <<  ".DBSecurityGroup." << dBSecurityGroupsIdx++;
        item.OutputToStream(oStream, dBSecurityGroupsSs.str().c_str());
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
  if(m_dBParameterGroupsHasBeenSet)
  {
      unsigned dBParameterGroupsIdx = 1;
      for(auto& item : m_dBParameterGroups)
      {
        Aws::StringStream dBParameterGroupsSs;
        dBParameterGroupsSs << location <<  ".DBParameterGroup." << dBParameterGroupsIdx++;
        item.OutputToStream(oStream, dBParameterGroupsSs.str().c_str());
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
  if(m_multiAZHasBeenSet)
  {
      oStream << location << ".MultiAZ=" << m_multiAZ << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
      oStream << location << ".AutoMinorVersionUpgrade=" << m_autoMinorVersionUpgrade << "&";
  }
  if(m_readReplicaSourceDBInstanceIdentifierHasBeenSet)
  {
      oStream << location << ".ReadReplicaSourceDBInstanceIdentifier=" << StringUtils::URLEncode(m_readReplicaSourceDBInstanceIdentifier.c_str()) << "&";
  }
  if(m_readReplicaDBInstanceIdentifiersHasBeenSet)
  {
      unsigned readReplicaDBInstanceIdentifiersIdx = 1;
      for(auto& item : m_readReplicaDBInstanceIdentifiers)
      {
        oStream << location << ".ReadReplicaDBInstanceIdentifier." << readReplicaDBInstanceIdentifiersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_licenseModelHasBeenSet)
  {
      oStream << location << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }
  if(m_iopsHasBeenSet)
  {
      oStream << location << ".Iops=" << m_iops << "&";
  }
  if(m_optionGroupMembershipsHasBeenSet)
  {
      unsigned optionGroupMembershipsIdx = 1;
      for(auto& item : m_optionGroupMemberships)
      {
        Aws::StringStream optionGroupMembershipsSs;
        optionGroupMembershipsSs << location <<  ".OptionGroupMembership." << optionGroupMembershipsIdx++;
        item.OutputToStream(oStream, optionGroupMembershipsSs.str().c_str());
      }
  }
  if(m_characterSetNameHasBeenSet)
  {
      oStream << location << ".CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }
  if(m_secondaryAvailabilityZoneHasBeenSet)
  {
      oStream << location << ".SecondaryAvailabilityZone=" << StringUtils::URLEncode(m_secondaryAvailabilityZone.c_str()) << "&";
  }
  if(m_publiclyAccessibleHasBeenSet)
  {
      oStream << location << ".PubliclyAccessible=" << m_publiclyAccessible << "&";
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
  if(m_storageTypeHasBeenSet)
  {
      oStream << location << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }
  if(m_tdeCredentialArnHasBeenSet)
  {
      oStream << location << ".TdeCredentialArn=" << StringUtils::URLEncode(m_tdeCredentialArn.c_str()) << "&";
  }
  if(m_dbInstancePortHasBeenSet)
  {
      oStream << location << ".DbInstancePort=" << m_dbInstancePort << "&";
  }
  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if(m_storageEncryptedHasBeenSet)
  {
      oStream << location << ".StorageEncrypted=" << m_storageEncrypted << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_dbiResourceIdHasBeenSet)
  {
      oStream << location << ".DbiResourceId=" << StringUtils::URLEncode(m_dbiResourceId.c_str()) << "&";
  }
  if(m_cACertificateIdentifierHasBeenSet)
  {
      oStream << location << ".CACertificateIdentifier=" << StringUtils::URLEncode(m_cACertificateIdentifier.c_str()) << "&";
  }
  if(m_domainMembershipsHasBeenSet)
  {
      unsigned domainMembershipsIdx = 1;
      for(auto& item : m_domainMemberships)
      {
        Aws::StringStream domainMembershipsSs;
        domainMembershipsSs << location <<  ".DomainMembership." << domainMembershipsIdx++;
        item.OutputToStream(oStream, domainMembershipsSs.str().c_str());
      }
  }
  if(m_copyTagsToSnapshotHasBeenSet)
  {
      oStream << location << ".CopyTagsToSnapshot=" << m_copyTagsToSnapshot << "&";
  }
  if(m_monitoringIntervalHasBeenSet)
  {
      oStream << location << ".MonitoringInterval=" << m_monitoringInterval << "&";
  }
  if(m_enhancedMonitoringResourceArnHasBeenSet)
  {
      oStream << location << ".EnhancedMonitoringResourceArn=" << StringUtils::URLEncode(m_enhancedMonitoringResourceArn.c_str()) << "&";
  }
  if(m_monitoringRoleArnHasBeenSet)
  {
      oStream << location << ".MonitoringRoleArn=" << StringUtils::URLEncode(m_monitoringRoleArn.c_str()) << "&";
  }
  if(m_promotionTierHasBeenSet)
  {
      oStream << location << ".PromotionTier=" << m_promotionTier << "&";
  }
  if(m_dBInstanceArnHasBeenSet)
  {
      oStream << location << ".DBInstanceArn=" << StringUtils::URLEncode(m_dBInstanceArn.c_str()) << "&";
  }
  if(m_timezoneHasBeenSet)
  {
      oStream << location << ".Timezone=" << StringUtils::URLEncode(m_timezone.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
