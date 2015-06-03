/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_allocatedStorage(0),
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
    m_storageTypeHasBeenSet(false),
    m_tdeCredentialArnHasBeenSet(false),
    m_tdeCredentialPasswordHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
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
  ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  ss << "AllocatedStorage=" << m_allocatedStorage << "&";
  ss << "DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  ss << "MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  ss << "MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  if(m_dBSecurityGroupsHasBeenSet)
  {
    unsigned dBSecurityGroupsCount = 1;
    for(auto& item : m_dBSecurityGroups)
    {
      ss << "DBSecurityGroupName." << dBSecurityGroupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      dBSecurityGroupsCount++;
    }
  }
  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
    unsigned vpcSecurityGroupIdsCount = 1;
    for(auto& item : m_vpcSecurityGroupIds)
    {
      ss << "VpcSecurityGroupId." << vpcSecurityGroupIdsCount << "="
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
    ss << "MultiAZ=" << m_multiAZ << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
    ss << "AutoMinorVersionUpgrade=" << m_autoMinorVersionUpgrade << "&";
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
    ss << "PubliclyAccessible=" << m_publiclyAccessible << "&";
  }
  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tag.", tagsCount, "");
      tagsCount++;
    }
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
    ss << "StorageEncrypted=" << m_storageEncrypted << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  ss << "Version=2014-10-31";
  return ss.str();
}

