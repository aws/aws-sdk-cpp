/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeIpamResourceDiscoveryAssociationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeIpamResourceDiscoveryAssociationsRequest::DescribeIpamResourceDiscoveryAssociationsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ipamResourceDiscoveryAssociationIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribeIpamResourceDiscoveryAssociationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeIpamResourceDiscoveryAssociations&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamResourceDiscoveryAssociationIdsHasBeenSet)
  {
    unsigned ipamResourceDiscoveryAssociationIdsCount = 1;
    for(auto& item : m_ipamResourceDiscoveryAssociationIds)
    {
      ss << "IpamResourceDiscoveryAssociationId." << ipamResourceDiscoveryAssociationIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      ipamResourceDiscoveryAssociationIdsCount++;
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeIpamResourceDiscoveryAssociationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
