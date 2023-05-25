/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyTransitGatewayPrefixListReferenceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyTransitGatewayPrefixListReferenceRequest::ModifyTransitGatewayPrefixListReferenceRequest() : 
    m_transitGatewayRouteTableIdHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_blackhole(false),
    m_blackholeHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifyTransitGatewayPrefixListReferenceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyTransitGatewayPrefixListReference&";
  if(m_transitGatewayRouteTableIdHasBeenSet)
  {
    ss << "TransitGatewayRouteTableId=" << StringUtils::URLEncode(m_transitGatewayRouteTableId.c_str()) << "&";
  }

  if(m_prefixListIdHasBeenSet)
  {
    ss << "PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }

  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
    ss << "TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_blackholeHasBeenSet)
  {
    ss << "Blackhole=" << std::boolalpha << m_blackhole << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyTransitGatewayPrefixListReferenceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
