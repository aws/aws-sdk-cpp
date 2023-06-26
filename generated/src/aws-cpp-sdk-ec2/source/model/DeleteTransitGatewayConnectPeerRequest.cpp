/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteTransitGatewayConnectPeerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteTransitGatewayConnectPeerRequest::DeleteTransitGatewayConnectPeerRequest() : 
    m_transitGatewayConnectPeerIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DeleteTransitGatewayConnectPeerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteTransitGatewayConnectPeer&";
  if(m_transitGatewayConnectPeerIdHasBeenSet)
  {
    ss << "TransitGatewayConnectPeerId=" << StringUtils::URLEncode(m_transitGatewayConnectPeerId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteTransitGatewayConnectPeerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
