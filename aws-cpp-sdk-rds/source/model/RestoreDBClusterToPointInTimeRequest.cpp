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
#include <aws/rds/model/RestoreDBClusterToPointInTimeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

RestoreDBClusterToPointInTimeRequest::RestoreDBClusterToPointInTimeRequest() : 
    m_dBClusterIdentifierHasBeenSet(false),
    m_sourceDBClusterIdentifierHasBeenSet(false),
    m_restoreToTime(0.0),
    m_restoreToTimeHasBeenSet(false),
    m_useLatestRestorableTime(false),
    m_useLatestRestorableTimeHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_dBSubnetGroupNameHasBeenSet(false),
    m_optionGroupNameHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String RestoreDBClusterToPointInTimeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RestoreDBClusterToPointInTime&";
  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if(m_sourceDBClusterIdentifierHasBeenSet)
  {
    ss << "SourceDBClusterIdentifier=" << StringUtils::URLEncode(m_sourceDBClusterIdentifier.c_str()) << "&";
  }
  if(m_restoreToTimeHasBeenSet)
  {
    ss << "RestoreToTime=" << m_restoreToTime << "&";
  }
  if(m_useLatestRestorableTimeHasBeenSet)
  {
    ss << "UseLatestRestorableTime=" << m_useLatestRestorableTime << "&";
  }
  if(m_portHasBeenSet)
  {
    ss << "Port=" << m_port << "&";
  }
  if(m_dBSubnetGroupNameHasBeenSet)
  {
    ss << "DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  }
  if(m_optionGroupNameHasBeenSet)
  {
    ss << "OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
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
  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tag.", tagsCount, "");
      tagsCount++;
    }
  }
  ss << "Version=2014-10-31";
  return ss.str();
}

