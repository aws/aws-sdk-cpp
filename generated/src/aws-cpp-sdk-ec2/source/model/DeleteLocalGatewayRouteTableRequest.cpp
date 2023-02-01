/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteLocalGatewayRouteTableRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteLocalGatewayRouteTableRequest::DeleteLocalGatewayRouteTableRequest() : 
    m_localGatewayRouteTableIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DeleteLocalGatewayRouteTableRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteLocalGatewayRouteTable&";
  if(m_localGatewayRouteTableIdHasBeenSet)
  {
    ss << "LocalGatewayRouteTableId=" << StringUtils::URLEncode(m_localGatewayRouteTableId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteLocalGatewayRouteTableRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
