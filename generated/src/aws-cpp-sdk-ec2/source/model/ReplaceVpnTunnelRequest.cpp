/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReplaceVpnTunnelRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ReplaceVpnTunnelRequest::ReplaceVpnTunnelRequest() : 
    m_vpnConnectionIdHasBeenSet(false),
    m_vpnTunnelOutsideIpAddressHasBeenSet(false),
    m_applyPendingMaintenance(false),
    m_applyPendingMaintenanceHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ReplaceVpnTunnelRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ReplaceVpnTunnel&";
  if(m_vpnConnectionIdHasBeenSet)
  {
    ss << "VpnConnectionId=" << StringUtils::URLEncode(m_vpnConnectionId.c_str()) << "&";
  }

  if(m_vpnTunnelOutsideIpAddressHasBeenSet)
  {
    ss << "VpnTunnelOutsideIpAddress=" << StringUtils::URLEncode(m_vpnTunnelOutsideIpAddress.c_str()) << "&";
  }

  if(m_applyPendingMaintenanceHasBeenSet)
  {
    ss << "ApplyPendingMaintenance=" << std::boolalpha << m_applyPendingMaintenance << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ReplaceVpnTunnelRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
