/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RevokeClientVpnIngressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

RevokeClientVpnIngressRequest::RevokeClientVpnIngressRequest() : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_targetNetworkCidrHasBeenSet(false),
    m_accessGroupIdHasBeenSet(false),
    m_revokeAllGroups(false),
    m_revokeAllGroupsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String RevokeClientVpnIngressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RevokeClientVpnIngress&";
  if(m_clientVpnEndpointIdHasBeenSet)
  {
    ss << "ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }

  if(m_targetNetworkCidrHasBeenSet)
  {
    ss << "TargetNetworkCidr=" << StringUtils::URLEncode(m_targetNetworkCidr.c_str()) << "&";
  }

  if(m_accessGroupIdHasBeenSet)
  {
    ss << "AccessGroupId=" << StringUtils::URLEncode(m_accessGroupId.c_str()) << "&";
  }

  if(m_revokeAllGroupsHasBeenSet)
  {
    ss << "RevokeAllGroups=" << std::boolalpha << m_revokeAllGroups << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  RevokeClientVpnIngressRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
