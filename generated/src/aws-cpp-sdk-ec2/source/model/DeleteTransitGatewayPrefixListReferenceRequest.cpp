/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteTransitGatewayPrefixListReferenceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteTransitGatewayPrefixListReferenceRequest::DeleteTransitGatewayPrefixListReferenceRequest() : 
    m_transitGatewayRouteTableIdHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DeleteTransitGatewayPrefixListReferenceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteTransitGatewayPrefixListReference&";
  if(m_transitGatewayRouteTableIdHasBeenSet)
  {
    ss << "TransitGatewayRouteTableId=" << StringUtils::URLEncode(m_transitGatewayRouteTableId.c_str()) << "&";
  }

  if(m_prefixListIdHasBeenSet)
  {
    ss << "PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteTransitGatewayPrefixListReferenceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
