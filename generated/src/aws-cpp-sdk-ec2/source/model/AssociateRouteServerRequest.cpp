/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssociateRouteServerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String AssociateRouteServerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssociateRouteServer&";
  if(m_routeServerIdHasBeenSet)
  {
    ss << "RouteServerId=" << StringUtils::URLEncode(m_routeServerId.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AssociateRouteServerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
