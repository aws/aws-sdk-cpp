/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssignPrivateIpAddressesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AssignPrivateIpAddressesRequest::AssignPrivateIpAddressesRequest() : 
    m_allowReassignment(false),
    m_allowReassignmentHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_secondaryPrivateIpAddressCount(0),
    m_secondaryPrivateIpAddressCountHasBeenSet(false)
{
}

Aws::String AssignPrivateIpAddressesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssignPrivateIpAddresses&";
  if(m_allowReassignmentHasBeenSet)
  {
    ss << "AllowReassignment=" << std::boolalpha << m_allowReassignment << "&";
  }

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

  if(m_secondaryPrivateIpAddressCountHasBeenSet)
  {
    ss << "SecondaryPrivateIpAddressCount=" << m_secondaryPrivateIpAddressCount << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AssignPrivateIpAddressesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
