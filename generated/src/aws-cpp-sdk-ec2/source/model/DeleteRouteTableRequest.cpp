/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteRouteTableRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteRouteTableRequest::DeleteRouteTableRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_routeTableIdHasBeenSet(false)
{
}

Aws::String DeleteRouteTableRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteRouteTable&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_routeTableIdHasBeenSet)
  {
    ss << "RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteRouteTableRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
