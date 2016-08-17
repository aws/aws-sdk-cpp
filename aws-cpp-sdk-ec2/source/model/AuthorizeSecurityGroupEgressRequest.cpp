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
#include <aws/ec2/model/AuthorizeSecurityGroupEgressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AuthorizeSecurityGroupEgressRequest::AuthorizeSecurityGroupEgressRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_sourceSecurityGroupNameHasBeenSet(false),
    m_sourceSecurityGroupOwnerIdHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_cidrIpHasBeenSet(false),
    m_ipPermissionsHasBeenSet(false)
{
}

Aws::String AuthorizeSecurityGroupEgressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AuthorizeSecurityGroupEgress&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_groupIdHasBeenSet)
  {
    ss << "GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

  if(m_sourceSecurityGroupNameHasBeenSet)
  {
    ss << "SourceSecurityGroupName=" << StringUtils::URLEncode(m_sourceSecurityGroupName.c_str()) << "&";
  }

  if(m_sourceSecurityGroupOwnerIdHasBeenSet)
  {
    ss << "SourceSecurityGroupOwnerId=" << StringUtils::URLEncode(m_sourceSecurityGroupOwnerId.c_str()) << "&";
  }

  if(m_ipProtocolHasBeenSet)
  {
    ss << "IpProtocol=" << StringUtils::URLEncode(m_ipProtocol.c_str()) << "&";
  }

  if(m_fromPortHasBeenSet)
  {
    ss << "FromPort=" << m_fromPort << "&";
  }

  if(m_toPortHasBeenSet)
  {
    ss << "ToPort=" << m_toPort << "&";
  }

  if(m_cidrIpHasBeenSet)
  {
    ss << "CidrIp=" << StringUtils::URLEncode(m_cidrIp.c_str()) << "&";
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

  ss << "Version=2015-10-01";
  return ss.str();
}

