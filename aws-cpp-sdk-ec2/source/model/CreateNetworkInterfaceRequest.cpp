/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/ec2/model/CreateNetworkInterfaceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateNetworkInterfaceRequest::CreateNetworkInterfaceRequest() : 
    m_descriptionHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_ipv6AddressCount(0),
    m_ipv6AddressCountHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_secondaryPrivateIpAddressCount(0),
    m_secondaryPrivateIpAddressCountHasBeenSet(false),
    m_interfaceType(NetworkInterfaceCreationType::NOT_SET),
    m_interfaceTypeHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

Aws::String CreateNetworkInterfaceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateNetworkInterface&";
  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_groupsHasBeenSet)
  {
    unsigned groupsCount = 1;
    for(auto& item : m_groups)
    {
      ss << "SecurityGroupId." << groupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      groupsCount++;
    }
  }

  if(m_ipv6AddressCountHasBeenSet)
  {
    ss << "Ipv6AddressCount=" << m_ipv6AddressCount << "&";
  }

  if(m_ipv6AddressesHasBeenSet)
  {
    unsigned ipv6AddressesCount = 1;
    for(auto& item : m_ipv6Addresses)
    {
      item.OutputToStream(ss, "Ipv6Addresses.", ipv6AddressesCount, "");
      ipv6AddressesCount++;
    }
  }

  if(m_privateIpAddressHasBeenSet)
  {
    ss << "PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }

  if(m_privateIpAddressesHasBeenSet)
  {
    unsigned privateIpAddressesCount = 1;
    for(auto& item : m_privateIpAddresses)
    {
      item.OutputToStream(ss, "PrivateIpAddresses.", privateIpAddressesCount, "");
      privateIpAddressesCount++;
    }
  }

  if(m_secondaryPrivateIpAddressCountHasBeenSet)
  {
    ss << "SecondaryPrivateIpAddressCount=" << m_secondaryPrivateIpAddressCount << "&";
  }

  if(m_interfaceTypeHasBeenSet)
  {
    ss << "InterfaceType=" << NetworkInterfaceCreationTypeMapper::GetNameForNetworkInterfaceCreationType(m_interfaceType) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
    ss << "SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateNetworkInterfaceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
