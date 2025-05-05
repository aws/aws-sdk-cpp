/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateLocalGatewayVirtualInterfaceGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateLocalGatewayVirtualInterfaceGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateLocalGatewayVirtualInterfaceGroup&";
  if(m_localGatewayIdHasBeenSet)
  {
    ss << "LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }

  if(m_localBgpAsnHasBeenSet)
  {
    ss << "LocalBgpAsn=" << m_localBgpAsn << "&";
  }

  if(m_localBgpAsnExtendedHasBeenSet)
  {
    ss << "LocalBgpAsnExtended=" << m_localBgpAsnExtended << "&";
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


void  CreateLocalGatewayVirtualInterfaceGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
