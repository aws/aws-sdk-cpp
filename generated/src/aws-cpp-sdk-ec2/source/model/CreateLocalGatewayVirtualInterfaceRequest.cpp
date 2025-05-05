/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateLocalGatewayVirtualInterfaceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateLocalGatewayVirtualInterfaceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateLocalGatewayVirtualInterface&";
  if(m_localGatewayVirtualInterfaceGroupIdHasBeenSet)
  {
    ss << "LocalGatewayVirtualInterfaceGroupId=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceGroupId.c_str()) << "&";
  }

  if(m_outpostLagIdHasBeenSet)
  {
    ss << "OutpostLagId=" << StringUtils::URLEncode(m_outpostLagId.c_str()) << "&";
  }

  if(m_vlanHasBeenSet)
  {
    ss << "Vlan=" << m_vlan << "&";
  }

  if(m_localAddressHasBeenSet)
  {
    ss << "LocalAddress=" << StringUtils::URLEncode(m_localAddress.c_str()) << "&";
  }

  if(m_peerAddressHasBeenSet)
  {
    ss << "PeerAddress=" << StringUtils::URLEncode(m_peerAddress.c_str()) << "&";
  }

  if(m_peerBgpAsnHasBeenSet)
  {
    ss << "PeerBgpAsn=" << m_peerBgpAsn << "&";
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

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_peerBgpAsnExtendedHasBeenSet)
  {
    ss << "PeerBgpAsnExtended=" << m_peerBgpAsnExtended << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateLocalGatewayVirtualInterfaceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
