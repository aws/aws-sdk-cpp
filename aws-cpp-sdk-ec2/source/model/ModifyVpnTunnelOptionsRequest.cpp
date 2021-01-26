/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVpnTunnelOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVpnTunnelOptionsRequest::ModifyVpnTunnelOptionsRequest() : 
    m_vpnConnectionIdHasBeenSet(false),
    m_vpnTunnelOutsideIpAddressHasBeenSet(false),
    m_tunnelOptionsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifyVpnTunnelOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVpnTunnelOptions&";
  if(m_vpnConnectionIdHasBeenSet)
  {
    ss << "VpnConnectionId=" << StringUtils::URLEncode(m_vpnConnectionId.c_str()) << "&";
  }

  if(m_vpnTunnelOutsideIpAddressHasBeenSet)
  {
    ss << "VpnTunnelOutsideIpAddress=" << StringUtils::URLEncode(m_vpnTunnelOutsideIpAddress.c_str()) << "&";
  }

  if(m_tunnelOptionsHasBeenSet)
  {
    m_tunnelOptions.OutputToStream(ss, "TunnelOptions");
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVpnTunnelOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
