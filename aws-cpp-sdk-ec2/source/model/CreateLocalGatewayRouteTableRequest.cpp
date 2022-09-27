/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateLocalGatewayRouteTableRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateLocalGatewayRouteTableRequest::CreateLocalGatewayRouteTableRequest() : 
    m_localGatewayIdHasBeenSet(false),
    m_mode(LocalGatewayRouteTableMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateLocalGatewayRouteTableRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateLocalGatewayRouteTable&";
  if(m_localGatewayIdHasBeenSet)
  {
    ss << "LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }

  if(m_modeHasBeenSet)
  {
    ss << "Mode=" << LocalGatewayRouteTableModeMapper::GetNameForLocalGatewayRouteTableMode(m_mode) << "&";
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


void  CreateLocalGatewayRouteTableRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
