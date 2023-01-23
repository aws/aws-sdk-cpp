/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteTransitGatewayRouteTableAnnouncementRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteTransitGatewayRouteTableAnnouncementRequest::DeleteTransitGatewayRouteTableAnnouncementRequest() : 
    m_transitGatewayRouteTableAnnouncementIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DeleteTransitGatewayRouteTableAnnouncementRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteTransitGatewayRouteTableAnnouncement&";
  if(m_transitGatewayRouteTableAnnouncementIdHasBeenSet)
  {
    ss << "TransitGatewayRouteTableAnnouncementId=" << StringUtils::URLEncode(m_transitGatewayRouteTableAnnouncementId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteTransitGatewayRouteTableAnnouncementRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
