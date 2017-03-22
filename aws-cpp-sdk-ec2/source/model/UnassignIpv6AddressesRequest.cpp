/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/UnassignIpv6AddressesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

UnassignIpv6AddressesRequest::UnassignIpv6AddressesRequest() : 
    m_networkInterfaceIdHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false)
{
}

Aws::String UnassignIpv6AddressesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UnassignIpv6Addresses&";
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
