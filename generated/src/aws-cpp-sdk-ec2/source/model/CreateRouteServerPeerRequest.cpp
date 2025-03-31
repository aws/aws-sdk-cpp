/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateRouteServerPeerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateRouteServerPeerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateRouteServerPeer&";
  if(m_routeServerEndpointIdHasBeenSet)
  {
    ss << "RouteServerEndpointId=" << StringUtils::URLEncode(m_routeServerEndpointId.c_str()) << "&";
  }

  if(m_peerAddressHasBeenSet)
  {
    ss << "PeerAddress=" << StringUtils::URLEncode(m_peerAddress.c_str()) << "&";
  }

  if(m_bgpOptionsHasBeenSet)
  {
    m_bgpOptions.OutputToStream(ss, "BgpOptions");
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateRouteServerPeerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
