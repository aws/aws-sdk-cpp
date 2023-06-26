/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeNetworkInterfaceAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeNetworkInterfaceAttributeRequest::DescribeNetworkInterfaceAttributeRequest() : 
    m_attribute(NetworkInterfaceAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false)
{
}

Aws::String DescribeNetworkInterfaceAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeNetworkInterfaceAttribute&";
  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << NetworkInterfaceAttributeMapper::GetNameForNetworkInterfaceAttribute(m_attribute) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
    ss << "NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeNetworkInterfaceAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
