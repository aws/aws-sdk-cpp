/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVpcEndpointServiceConfigurationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeVpcEndpointServiceConfigurationsRequest::DescribeVpcEndpointServiceConfigurationsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_serviceIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeVpcEndpointServiceConfigurationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeVpcEndpointServiceConfigurations&";
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

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeVpcEndpointServiceConfigurationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
