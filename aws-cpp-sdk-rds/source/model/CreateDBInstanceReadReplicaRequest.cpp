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
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_optionGroupNameHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false)
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
  if(m_publiclyAccessibleHasBeenSet)
  {
    ss << "PubliclyAccessible=" << m_publiclyAccessible << "&";
  }
  ss << "Version=2013-01-10";
  return ss.str();
}

