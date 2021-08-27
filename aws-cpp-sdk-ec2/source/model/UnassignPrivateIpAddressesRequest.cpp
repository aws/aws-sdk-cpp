/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/UnassignPrivateIpAddressesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

UnassignPrivateIpAddressesRequest::UnassignPrivateIpAddressesRequest() : 
    m_networkInterfaceIdHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false)
{
}

Aws::String UnassignPrivateIpAddressesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UnassignPrivateIpAddresses&";
  if(m_networkInterfaceIdHasBeenSet)
  {
    ss << "NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_privateIpAddressesHasBeenSet)
  {
    unsigned privateIpAddressesCount = 1;
    for(auto& item : m_privateIpAddresses)
    {
      ss << "PrivateIpAddress." << privateIpAddressesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      privateIpAddressesCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  UnassignPrivateIpAddressesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
