/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetIpamDiscoveredResourceCidrsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

GetIpamDiscoveredResourceCidrsRequest::GetIpamDiscoveredResourceCidrsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ipamResourceDiscoveryIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetIpamDiscoveredResourceCidrsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetIpamDiscoveredResourceCidrs&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamResourceDiscoveryIdHasBeenSet)
  {
    ss << "IpamResourceDiscoveryId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryId.c_str()) << "&";
  }

  if(m_resourceRegionHasBeenSet)
  {
    ss << "ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
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

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetIpamDiscoveredResourceCidrsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
