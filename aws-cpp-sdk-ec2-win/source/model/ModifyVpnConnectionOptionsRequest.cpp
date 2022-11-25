/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVpnConnectionOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVpnConnectionOptionsRequest::ModifyVpnConnectionOptionsRequest() : 
    m_vpnConnectionIdHasBeenSet(false),
    m_localIpv4NetworkCidrHasBeenSet(false),
    m_remoteIpv4NetworkCidrHasBeenSet(false),
    m_localIpv6NetworkCidrHasBeenSet(false),
    m_remoteIpv6NetworkCidrHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifyVpnConnectionOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVpnConnectionOptions&";
  if(m_vpnConnectionIdHasBeenSet)
  {
    ss << "VpnConnectionId=" << StringUtils::URLEncode(m_vpnConnectionId.c_str()) << "&";
  }

  if(m_localIpv4NetworkCidrHasBeenSet)
  {
    ss << "LocalIpv4NetworkCidr=" << StringUtils::URLEncode(m_localIpv4NetworkCidr.c_str()) << "&";
  }

  if(m_remoteIpv4NetworkCidrHasBeenSet)
  {
    ss << "RemoteIpv4NetworkCidr=" << StringUtils::URLEncode(m_remoteIpv4NetworkCidr.c_str()) << "&";
  }

  if(m_localIpv6NetworkCidrHasBeenSet)
  {
    ss << "LocalIpv6NetworkCidr=" << StringUtils::URLEncode(m_localIpv6NetworkCidr.c_str()) << "&";
  }

  if(m_remoteIpv6NetworkCidrHasBeenSet)
  {
    ss << "RemoteIpv6NetworkCidr=" << StringUtils::URLEncode(m_remoteIpv6NetworkCidr.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVpnConnectionOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
