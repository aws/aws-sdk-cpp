/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeRegionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeRegionsRequest::DescribeRegionsRequest() : 
    m_filtersHasBeenSet(false),
    m_regionNamesHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_allRegions(false),
    m_allRegionsHasBeenSet(false)
{
}

Aws::String DescribeRegionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeRegions&";
  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_regionNamesHasBeenSet)
  {
    unsigned regionNamesCount = 1;
    for(auto& item : m_regionNames)
    {
      ss << "RegionName." << regionNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      regionNamesCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_allRegionsHasBeenSet)
  {
    ss << "AllRegions=" << std::boolalpha << m_allRegions << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeRegionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
