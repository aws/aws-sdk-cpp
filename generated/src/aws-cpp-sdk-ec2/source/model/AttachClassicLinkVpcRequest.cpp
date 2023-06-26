/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AttachClassicLinkVpcRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AttachClassicLinkVpcRequest::AttachClassicLinkVpcRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

Aws::String AttachClassicLinkVpcRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AttachClassicLinkVpc&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_groupsHasBeenSet)
  {
    unsigned groupsCount = 1;
    for(auto& item : m_groups)
    {
      ss << "SecurityGroupId." << groupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      groupsCount++;
    }
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AttachClassicLinkVpcRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
