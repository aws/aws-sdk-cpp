/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeregisterTransitGatewayMulticastGroupMembersRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeregisterTransitGatewayMulticastGroupMembersRequest::DeregisterTransitGatewayMulticastGroupMembersRequest() : 
    m_transitGatewayMulticastDomainIdHasBeenSet(false),
    m_groupIpAddressHasBeenSet(false),
    m_networkInterfaceIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DeregisterTransitGatewayMulticastGroupMembersRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeregisterTransitGatewayMulticastGroupMembers&";
  if(m_transitGatewayMulticastDomainIdHasBeenSet)
  {
    ss << "TransitGatewayMulticastDomainId=" << StringUtils::URLEncode(m_transitGatewayMulticastDomainId.c_str()) << "&";
  }

  if(m_groupIpAddressHasBeenSet)
  {
    ss << "GroupIpAddress=" << StringUtils::URLEncode(m_groupIpAddress.c_str()) << "&";
  }

  if(m_networkInterfaceIdsHasBeenSet)
  {
    unsigned networkInterfaceIdsCount = 1;
    for(auto& item : m_networkInterfaceIds)
    {
      ss << "NetworkInterfaceIds." << networkInterfaceIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      networkInterfaceIdsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeregisterTransitGatewayMulticastGroupMembersRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
