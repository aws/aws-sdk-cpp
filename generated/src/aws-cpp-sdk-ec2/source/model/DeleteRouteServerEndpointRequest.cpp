/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteRouteServerEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DeleteRouteServerEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteRouteServerEndpoint&";
  if(m_routeServerEndpointIdHasBeenSet)
  {
    ss << "RouteServerEndpointId=" << StringUtils::URLEncode(m_routeServerEndpointId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteRouteServerEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
