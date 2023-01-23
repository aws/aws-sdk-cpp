/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssociateRouteTableRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AssociateRouteTableRequest::AssociateRouteTableRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false)
{
}

Aws::String AssociateRouteTableRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssociateRouteTable&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_routeTableIdHasBeenSet)
  {
    ss << "RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
    ss << "SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_gatewayIdHasBeenSet)
  {
    ss << "GatewayId=" << StringUtils::URLEncode(m_gatewayId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AssociateRouteTableRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
