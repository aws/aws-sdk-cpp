﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AuthorizeSecurityGroupIngressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AuthorizeSecurityGroupIngressRequest::AuthorizeSecurityGroupIngressRequest() : 
    m_cidrIpHasBeenSet(false),
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_ipPermissionsHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_sourceSecurityGroupNameHasBeenSet(false),
    m_sourceSecurityGroupOwnerIdHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false)
{
}

Aws::String AuthorizeSecurityGroupIngressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AuthorizeSecurityGroupIngress&";
  if(m_cidrIpHasBeenSet)
  {
    ss << "CidrIp=" << StringUtils::URLEncode(m_cidrIp.c_str()) << "&";
  }

  if(m_fromPortHasBeenSet)
  {
    ss << "FromPort=" << m_fromPort << "&";
  }

  if(m_groupIdHasBeenSet)
  {
    ss << "GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

  if(m_groupNameHasBeenSet)
  {
    ss << "GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_ipPermissionsHasBeenSet)
  {
    unsigned ipPermissionsCount = 1;
    for(auto& item : m_ipPermissions)
    {
      item.OutputToStream(ss, "IpPermissions.", ipPermissionsCount, "");
      ipPermissionsCount++;
    }
  }

  if(m_ipProtocolHasBeenSet)
  {
    ss << "IpProtocol=" << StringUtils::URLEncode(m_ipProtocol.c_str()) << "&";
  }

  if(m_sourceSecurityGroupNameHasBeenSet)
  {
    ss << "SourceSecurityGroupName=" << StringUtils::URLEncode(m_sourceSecurityGroupName.c_str()) << "&";
  }

  if(m_sourceSecurityGroupOwnerIdHasBeenSet)
  {
    ss << "SourceSecurityGroupOwnerId=" << StringUtils::URLEncode(m_sourceSecurityGroupOwnerId.c_str()) << "&";
  }

  if(m_toPortHasBeenSet)
  {
    ss << "ToPort=" << m_toPort << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AuthorizeSecurityGroupIngressRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
