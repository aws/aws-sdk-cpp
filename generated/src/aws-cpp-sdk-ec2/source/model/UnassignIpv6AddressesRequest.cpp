/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/UnassignIpv6AddressesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String UnassignIpv6AddressesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UnassignIpv6Addresses&";
  if(m_ipv6PrefixesHasBeenSet)
  {
    unsigned ipv6PrefixesCount = 1;
    for(auto& item : m_ipv6Prefixes)
    {
      ss << "Ipv6Prefix." << ipv6PrefixesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      ipv6PrefixesCount++;
    }
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
    ss << "NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_ipv6AddressesHasBeenSet)
  {
    unsigned ipv6AddressesCount = 1;
    for(auto& item : m_ipv6Addresses)
    {
      ss << "Ipv6Addresses." << ipv6AddressesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      ipv6AddressesCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  UnassignIpv6AddressesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
