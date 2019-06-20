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

#include <aws/rds/model/CreateDBInstanceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CreateDBInstanceRequest::CreateDBInstanceRequest() : 
    m_dBNameHasBeenSet(false),
    m_dBInstanceIdentifierHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false),
    m_dBSecurityGroupsHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_dBSubnetGroupNameHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_dBParameterGroupNameHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_optionGroupNameHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_tdeCredentialArnHasBeenSet(false),
    m_tdeCredentialPasswordHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_monitoringInterval(0),
    m_monitoringIntervalHasBeenSet(false),
    m_monitoringRoleArnHasBeenSet(false),
    m_domainIAMRoleNameHasBeenSet(false),
    m_promotionTier(0),
    m_promotionTierHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_enableIAMDatabaseAuthentication(false),
    m_enableIAMDatabaseAuthenticationHasBeenSet(false),
    m_enablePerformanceInsights(false),
    m_enablePerformanceInsightsHasBeenSet(false),
    m_performanceInsightsKMSKeyIdHasBeenSet(false),
    m_performanceInsightsRetentionPeriod(0),
    m_performanceInsightsRetentionPeriodHasBeenSet(false),
    m_enableCloudwatchLogsExportsHasBeenSet(false),
    m_processorFeaturesHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_maxAllocatedStorage(0),
    m_maxAllocatedStorageHasBeenSet(false)
{
}

Aws::String CreateDBInstanceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBInstance&";
  if(m_dBNameHasBeenSet)
  {
    ss << "DBName=" << StringUtils::URLEncode(m_dBName.c_str()) << "&";
  }

  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_allocatedStorageHasBeenSet)
  {
    ss << "AllocatedStorage=" << m_allocatedStorage << "&";
  }

  if(m_dBInstanceClassHasBeenSet)
  {
    ss << "DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_masterUsernameHasBeenSet)
  {
    ss << "MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if(m_masterUserPasswordHasBeenSet)
  {
    ss << "MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }

  if(m_dBSecurityGroupsHasBeenSet)
  {
    unsigned dBSecurityGroupsCount = 1;
    for(auto& item : m_dBSecurityGroups)
    {
      ss << "DBSecurityGroups.member." << dBSecurityGroupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      dBSecurityGroupsCount++;
    }
  }

  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
    unsigned vpcSecurityGroupIdsCount = 1;
    for(auto& item : m_vpcSecurityGroupIds)
    {
      ss << "VpcSecurityGroupIds.member." << vpcSecurityGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      vpcSecurityGroupIdsCount++;
    }
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_dBSubnetGroupNameHasBeenSet)
  {
    ss << "DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
    ss << "PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }

  if(m_dBParameterGroupNameHasBeenSet)
  {
    ss << "DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
  }

  if(m_backupRetentionPeriodHasBeenSet)
  {
    ss << "BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }

  if(m_preferredBackupWindowHasBeenSet)
  {
    ss << "PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
    ss << "Port=" << m_port << "&";
  }

  if(m_multiAZHasBeenSet)
  {
    ss << "MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
    ss << "AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }

  if(m_licenseModelHasBeenSet)
  {
    ss << "LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }

  if(m_iopsHasBeenSet)
  {
    ss << "Iops=" << m_iops << "&";
  }

  if(m_optionGroupNameHasBeenSet)
  {
    ss << "OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }

  if(m_characterSetNameHasBeenSet)
  {
    ss << "CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }

  if(m_publiclyAccessibleHasBeenSet)
  {
    ss << "PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_storageTypeHasBeenSet)
  {
    ss << "StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if(m_tdeCredentialArnHasBeenSet)
  {
    ss << "TdeCredentialArn=" << StringUtils::URLEncode(m_tdeCredentialArn.c_str()) << "&";
  }

  if(m_tdeCredentialPasswordHasBeenSet)
  {
    ss << "TdeCredentialPassword=" << StringUtils::URLEncode(m_tdeCredentialPassword.c_str()) << "&";
  }

  if(m_storageEncryptedHasBeenSet)
  {
    ss << "StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_domainHasBeenSet)
  {
    ss << "Domain=" << StringUtils::URLEncode(m_domain.c_str()) << "&";
  }

  if(m_copyTagsToSnapshotHasBeenSet)
  {
    ss << "CopyTagsToSnapshot=" << std::boolalpha << m_copyTagsToSnapshot << "&";
  }

  if(m_monitoringIntervalHasBeenSet)
  {
    ss << "MonitoringInterval=" << m_monitoringInterval << "&";
  }

  if(m_monitoringRoleArnHasBeenSet)
  {
    ss << "MonitoringRoleArn=" << StringUtils::URLEncode(m_monitoringRoleArn.c_str()) << "&";
  }

  if(m_domainIAMRoleNameHasBeenSet)
  {
    ss << "DomainIAMRoleName=" << StringUtils::URLEncode(m_domainIAMRoleName.c_str()) << "&";
  }

  if(m_promotionTierHasBeenSet)
  {
    ss << "PromotionTier=" << m_promotionTier << "&";
  }

  if(m_timezoneHasBeenSet)
  {
    ss << "Timezone=" << StringUtils::URLEncode(m_timezone.c_str()) << "&";
  }

  if(m_enableIAMDatabaseAuthenticationHasBeenSet)
  {
    ss << "EnableIAMDatabaseAuthentication=" << std::boolalpha << m_enableIAMDatabaseAuthentication << "&";
  }

  if(m_enablePerformanceInsightsHasBeenSet)
  {
    ss << "EnablePerformanceInsights=" << std::boolalpha << m_enablePerformanceInsights << "&";
  }

  if(m_performanceInsightsKMSKeyIdHasBeenSet)
  {
    ss << "PerformanceInsightsKMSKeyId=" << StringUtils::URLEncode(m_performanceInsightsKMSKeyId.c_str()) << "&";
  }

  if(m_performanceInsightsRetentionPeriodHasBeenSet)
  {
    ss << "PerformanceInsightsRetentionPeriod=" << m_performanceInsightsRetentionPeriod << "&";
  }

  if(m_enableCloudwatchLogsExportsHasBeenSet)
  {
    unsigned enableCloudwatchLogsExportsCount = 1;
    for(auto& item : m_enableCloudwatchLogsExports)
    {
      ss << "EnableCloudwatchLogsExports.member." << enableCloudwatchLogsExportsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      enableCloudwatchLogsExportsCount++;
    }
  }

  if(m_processorFeaturesHasBeenSet)
  {
    unsigned processorFeaturesCount = 1;
    for(auto& item : m_processorFeatures)
    {
      item.OutputToStream(ss, "ProcessorFeatures.member.", processorFeaturesCount, "");
      processorFeaturesCount++;
    }
  }

  if(m_deletionProtectionHasBeenSet)
  {
    ss << "DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }

  if(m_maxAllocatedStorageHasBeenSet)
  {
    ss << "MaxAllocatedStorage=" << m_maxAllocatedStorage << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateDBInstanceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
