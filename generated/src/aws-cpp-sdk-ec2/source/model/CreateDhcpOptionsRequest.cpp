/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateDhcpOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateDhcpOptionsRequest::CreateDhcpOptionsRequest() : 
    m_dhcpConfigurationsHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateDhcpOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDhcpOptions&";
  if(m_dhcpConfigurationsHasBeenSet)
  {
    unsigned dhcpConfigurationsCount = 1;
    for(auto& item : m_dhcpConfigurations)
    {
      item.OutputToStream(ss, "DhcpConfiguration.", dhcpConfigurationsCount, "");
      dhcpConfigurationsCount++;
    }
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


void  CreateDhcpOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
