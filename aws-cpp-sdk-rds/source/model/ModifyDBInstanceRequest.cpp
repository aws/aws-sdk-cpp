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
#include <aws/rds/model/ModifyDBInstanceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyDBInstanceRequest::ModifyDBInstanceRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_dBSecurityGroupsHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_applyImmediately(false),
    m_applyImmediatelyHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false),
    m_dBParameterGroupNameHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_allowMajorVersionUpgrade(false),
    m_allowMajorVersionUpgradeHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_optionGroupNameHasBeenSet(false),
    m_newDBInstanceIdentifierHasBeenSet(false)
{
}

Aws::String ModifyDBInstanceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDBInstance&";
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
  if(m_applyImmediatelyHasBeenSet)
  {
    ss << "ApplyImmediately=" << m_applyImmediately << "&";
  }
  if(m_masterUserPasswordHasBeenSet)
  {
    ss << "MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
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
  if(m_preferredMaintenanceWindowHasBeenSet)
  {
    ss << "PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }
  if(m_multiAZHasBeenSet)
  {
    ss << "MultiAZ=" << m_multiAZ << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_allowMajorVersionUpgradeHasBeenSet)
  {
    ss << "AllowMajorVersionUpgrade=" << m_allowMajorVersionUpgrade << "&";
  }
  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
    ss << "AutoMinorVersionUpgrade=" << m_autoMinorVersionUpgrade << "&";
  }
  if(m_iopsHasBeenSet)
  {
    ss << "Iops=" << m_iops << "&";
  }
  if(m_optionGroupNameHasBeenSet)
  {
    ss << "OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }
  if(m_newDBInstanceIdentifierHasBeenSet)
  {
    ss << "NewDBInstanceIdentifier=" << StringUtils::URLEncode(m_newDBInstanceIdentifier.c_str()) << "&";
  }
  ss << "Version=2013-01-10";
  return ss.str();
}

