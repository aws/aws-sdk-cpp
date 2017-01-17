﻿/*
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
#include <aws/ec2/model/AssignPrivateIpAddressesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AssignPrivateIpAddressesRequest::AssignPrivateIpAddressesRequest() : 
    m_networkInterfaceIdHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_secondaryPrivateIpAddressCount(0),
    m_secondaryPrivateIpAddressCountHasBeenSet(false),
    m_allowReassignment(false),
    m_allowReassignmentHasBeenSet(false)
{
}

Aws::String AssignPrivateIpAddressesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssignPrivateIpAddresses&";
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

  if(m_allowReassignmentHasBeenSet)
  {
    ss << "AllowReassignment=" << std::boolalpha << m_allowReassignment << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

