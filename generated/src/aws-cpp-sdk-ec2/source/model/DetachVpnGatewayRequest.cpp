/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DetachVpnGatewayRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DetachVpnGatewayRequest::DetachVpnGatewayRequest() : 
    m_vpcIdHasBeenSet(false),
    m_vpnGatewayIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DetachVpnGatewayRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DetachVpnGateway&";
  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_vpnGatewayIdHasBeenSet)
  {
    ss << "VpnGatewayId=" << StringUtils::URLEncode(m_vpnGatewayId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DetachVpnGatewayRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
