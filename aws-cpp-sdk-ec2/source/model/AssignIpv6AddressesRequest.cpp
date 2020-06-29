/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssignIpv6AddressesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AssignIpv6AddressesRequest::AssignIpv6AddressesRequest() : 
    m_ipv6AddressCount(0),
    m_ipv6AddressCountHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false)
{
}

Aws::String AssignIpv6AddressesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssignIpv6Addresses&";
  if(m_ipv6AddressCountHasBeenSet)
  {
    ss << "Ipv6AddressCount=" << m_ipv6AddressCount << "&";
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

  if(m_networkInterfaceIdHasBeenSet)
  {
    ss << "NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AssignIpv6AddressesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
