/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateTransitGatewayPeeringAttachmentRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateTransitGatewayPeeringAttachmentRequest::CreateTransitGatewayPeeringAttachmentRequest() : 
    m_transitGatewayIdHasBeenSet(false),
    m_peerTransitGatewayIdHasBeenSet(false),
    m_peerAccountIdHasBeenSet(false),
    m_peerRegionHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateTransitGatewayPeeringAttachmentRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateTransitGatewayPeeringAttachment&";
  if(m_transitGatewayIdHasBeenSet)
  {
    ss << "TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if(m_peerTransitGatewayIdHasBeenSet)
  {
    ss << "PeerTransitGatewayId=" << StringUtils::URLEncode(m_peerTransitGatewayId.c_str()) << "&";
  }

  if(m_peerAccountIdHasBeenSet)
  {
    ss << "PeerAccountId=" << StringUtils::URLEncode(m_peerAccountId.c_str()) << "&";
  }

  if(m_peerRegionHasBeenSet)
  {
    ss << "PeerRegion=" << StringUtils::URLEncode(m_peerRegion.c_str()) << "&";
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


void  CreateTransitGatewayPeeringAttachmentRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
