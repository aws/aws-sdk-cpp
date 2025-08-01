/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/CreateDBClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils;

Aws::String CreateDBClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBCluster&";
  if(m_availabilityZonesHasBeenSet)
  {
    if (m_availabilityZones.empty())
    {
      ss << "AvailabilityZones=&";
    }
    else
    {
      unsigned availabilityZonesCount = 1;
      for(auto& item : m_availabilityZones)
      {
        ss << "AvailabilityZones.AvailabilityZone." << availabilityZonesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        availabilityZonesCount++;
      }
    }
  }

  if(m_backupRetentionPeriodHasBeenSet)
  {
    ss << "BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_dBClusterParameterGroupNameHasBeenSet)
  {
    ss << "DBClusterParameterGroupName=" << StringUtils::URLEncode(m_dBClusterParameterGroupName.c_str()) << "&";
  }

  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
    if (m_vpcSecurityGroupIds.empty())
    {
      ss << "VpcSecurityGroupIds=&";
    }
    else
    {
      unsigned vpcSecurityGroupIdsCount = 1;
      for(auto& item : m_vpcSecurityGroupIds)
      {
        ss << "VpcSecurityGroupIds.VpcSecurityGroupId." << vpcSecurityGroupIdsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        vpcSecurityGroupIdsCount++;
      }
    }
  }

  if(m_dBSubnetGroupNameHasBeenSet)
  {
    ss << "DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
    ss << "Port=" << m_port << "&";
  }

  if(m_masterUsernameHasBeenSet)
  {
    ss << "MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if(m_masterUserPasswordHasBeenSet)
  {
    ss << "MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }

  if(m_preferredBackupWindowHasBeenSet)
  {
    ss << "PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
    ss << "PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.Tag.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  if(m_storageEncryptedHasBeenSet)
  {
    ss << "StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_preSignedUrlHasBeenSet)
  {
    ss << "PreSignedUrl=" << StringUtils::URLEncode(m_preSignedUrl.c_str()) << "&";
  }

  if(m_enableCloudwatchLogsExportsHasBeenSet)
  {
    if (m_enableCloudwatchLogsExports.empty())
    {
      ss << "EnableCloudwatchLogsExports=&";
    }
    else
    {
      unsigned enableCloudwatchLogsExportsCount = 1;
      for(auto& item : m_enableCloudwatchLogsExports)
      {
        ss << "EnableCloudwatchLogsExports.member." << enableCloudwatchLogsExportsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        enableCloudwatchLogsExportsCount++;
      }
    }
  }

  if(m_deletionProtectionHasBeenSet)
  {
    ss << "DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }

  if(m_globalClusterIdentifierHasBeenSet)
  {
    ss << "GlobalClusterIdentifier=" << StringUtils::URLEncode(m_globalClusterIdentifier.c_str()) << "&";
  }

  if(m_storageTypeHasBeenSet)
  {
    ss << "StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if(m_serverlessV2ScalingConfigurationHasBeenSet)
  {
    m_serverlessV2ScalingConfiguration.OutputToStream(ss, "ServerlessV2ScalingConfiguration");
  }

  if(m_manageMasterUserPasswordHasBeenSet)
  {
    ss << "ManageMasterUserPassword=" << std::boolalpha << m_manageMasterUserPassword << "&";
  }

  if(m_masterUserSecretKmsKeyIdHasBeenSet)
  {
    ss << "MasterUserSecretKmsKeyId=" << StringUtils::URLEncode(m_masterUserSecretKmsKeyId.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateDBClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
