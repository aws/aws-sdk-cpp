/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteVpcEndpointServiceConfigurationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteVpcEndpointServiceConfigurationsRequest::DeleteVpcEndpointServiceConfigurationsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_serviceIdsHasBeenSet(false)
{
}

Aws::String DeleteVpcEndpointServiceConfigurationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteVpcEndpointServiceConfigurations&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_serviceIdsHasBeenSet)
  {
    unsigned serviceIdsCount = 1;
    for(auto& item : m_serviceIds)
    {
      ss << "ServiceId." << serviceIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      serviceIdsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteVpcEndpointServiceConfigurationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
