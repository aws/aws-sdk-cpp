/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateDBInstanceReadReplicaRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CreateDBInstanceReadReplicaRequest::CreateDBInstanceReadReplicaRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_sourceDBInstanceIdentifierHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_optionGroupNameHasBeenSet(false),
    m_dBParameterGroupNameHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dBSubnetGroupNameHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_monitoringInterval(0),
    m_monitoringIntervalHasBeenSet(false),
    m_monitoringRoleArnHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_preSignedUrlHasBeenSet(false),
    m_enableIAMDatabaseAuthentication(false),
    m_enableIAMDatabaseAuthenticationHasBeenSet(false),
    m_enablePerformanceInsights(false),
    m_enablePerformanceInsightsHasBeenSet(false),
    m_performanceInsightsKMSKeyIdHasBeenSet(false),
    m_performanceInsightsRetentionPeriod(0),
    m_performanceInsightsRetentionPeriodHasBeenSet(false),
    m_enableCloudwatchLogsExportsHasBeenSet(false),
    m_processorFeaturesHasBeenSet(false),
    m_useDefaultProcessorFeatures(false),
    m_useDefaultProcessorFeaturesHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_domainIAMRoleNameHasBeenSet(false),
    m_replicaMode(ReplicaMode::NOT_SET),
    m_replicaModeHasBeenSet(false),
    m_maxAllocatedStorage(0),
    m_maxAllocatedStorageHasBeenSet(false),
    m_customIamInstanceProfileHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_storageThroughput(0),
    m_storageThroughputHasBeenSet(false),
    m_enableCustomerOwnedIp(false),
    m_enableCustomerOwnedIpHasBeenSet(false),
    m_sourceRegionHasBeenSet(false)
{
}

Aws::String CreateDBInstanceReadReplicaRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBInstanceReadReplica&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_sourceDBInstanceIdentifierHasBeenSet)
  {
    ss << "SourceDBInstanceIdentifier=" << StringUtils::URLEncode(m_sourceDBInstanceIdentifier.c_str()) << "&";
  }

  if(m_dBInstanceClassHasBeenSet)
  {
    ss << "DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
    ss << "Port=" << m_port << "&";
  }

  if(m_multiAZHasBeenSet)
  {
    ss << "MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
    ss << "AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }

  if(m_iopsHasBeenSet)
  {
    ss << "Iops=" << m_iops << "&";
  }

  if(m_optionGroupNameHasBeenSet)
  {
    ss << "OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }

  if(m_dBParameterGroupNameHasBeenSet)
  {
    ss << "DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
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

  if(m_dBSubnetGroupNameHasBeenSet)
  {
    ss << "DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
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

  if(m_storageTypeHasBeenSet)
  {
    ss << "StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
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

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_preSignedUrlHasBeenSet)
  {
    ss << "PreSignedUrl=" << StringUtils::URLEncode(m_preSignedUrl.c_str()) << "&";
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

  if(m_useDefaultProcessorFeaturesHasBeenSet)
  {
    ss << "UseDefaultProcessorFeatures=" << std::boolalpha << m_useDefaultProcessorFeatures << "&";
  }

  if(m_deletionProtectionHasBeenSet)
  {
    ss << "DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }

  if(m_domainHasBeenSet)
  {
    ss << "Domain=" << StringUtils::URLEncode(m_domain.c_str()) << "&";
  }

  if(m_domainIAMRoleNameHasBeenSet)
  {
    ss << "DomainIAMRoleName=" << StringUtils::URLEncode(m_domainIAMRoleName.c_str()) << "&";
  }

  if(m_replicaModeHasBeenSet)
  {
    ss << "ReplicaMode=" << ReplicaModeMapper::GetNameForReplicaMode(m_replicaMode) << "&";
  }

  if(m_maxAllocatedStorageHasBeenSet)
  {
    ss << "MaxAllocatedStorage=" << m_maxAllocatedStorage << "&";
  }

  if(m_customIamInstanceProfileHasBeenSet)
  {
    ss << "CustomIamInstanceProfile=" << StringUtils::URLEncode(m_customIamInstanceProfile.c_str()) << "&";
  }

  if(m_networkTypeHasBeenSet)
  {
    ss << "NetworkType=" << StringUtils::URLEncode(m_networkType.c_str()) << "&";
  }

  if(m_storageThroughputHasBeenSet)
  {
    ss << "StorageThroughput=" << m_storageThroughput << "&";
  }

  if(m_enableCustomerOwnedIpHasBeenSet)
  {
    ss << "EnableCustomerOwnedIp=" << std::boolalpha << m_enableCustomerOwnedIp << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateDBInstanceReadReplicaRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
