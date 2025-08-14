/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceConnectEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyInstanceConnectEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstanceConnectEndpoint&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceConnectEndpointIdHasBeenSet)
  {
    ss << "InstanceConnectEndpointId=" << StringUtils::URLEncode(m_instanceConnectEndpointId.c_str()) << "&";
  }

  if(m_ipAddressTypeHasBeenSet)
  {
    ss << "IpAddressType=" << StringUtils::URLEncode(IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType)) << "&";
  }

  if(m_securityGroupIdsHasBeenSet)
  {
    unsigned securityGroupIdsCount = 1;
    for(auto& item : m_securityGroupIds)
    {
      ss << "SecurityGroupId." << securityGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      securityGroupIdsCount++;
    }
  }

  if(m_preserveClientIpHasBeenSet)
  {
    ss << "PreserveClientIp=" << std::boolalpha << m_preserveClientIp << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyInstanceConnectEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
