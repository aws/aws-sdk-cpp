/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateTransitGatewayConnectPeerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateTransitGatewayConnectPeerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateTransitGatewayConnectPeer&";
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
    ss << "TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_transitGatewayAddressHasBeenSet)
  {
    ss << "TransitGatewayAddress=" << StringUtils::URLEncode(m_transitGatewayAddress.c_str()) << "&";
  }

  if(m_peerAddressHasBeenSet)
  {
    ss << "PeerAddress=" << StringUtils::URLEncode(m_peerAddress.c_str()) << "&";
  }

  if(m_bgpOptionsHasBeenSet)
  {
    m_bgpOptions.OutputToStream(ss, "BgpOptions");
  }

  if(m_insideCidrBlocksHasBeenSet)
  {
    unsigned insideCidrBlocksCount = 1;
    for(auto& item : m_insideCidrBlocks)
    {
      ss << "InsideCidrBlocks." << insideCidrBlocksCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      insideCidrBlocksCount++;
    }
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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateTransitGatewayConnectPeerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
