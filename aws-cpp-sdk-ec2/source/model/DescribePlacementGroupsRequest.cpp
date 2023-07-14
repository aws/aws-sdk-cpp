/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribePlacementGroupsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribePlacementGroupsRequest::DescribePlacementGroupsRequest() : 
    m_filtersHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_groupNamesHasBeenSet(false),
    m_groupIdsHasBeenSet(false)
{
}

Aws::String DescribePlacementGroupsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribePlacementGroups&";
  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_groupNamesHasBeenSet)
  {
    unsigned groupNamesCount = 1;
    for(auto& item : m_groupNames)
    {
      ss << "GroupName." << groupNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      groupNamesCount++;
    }
  }

  if(m_groupIdsHasBeenSet)
  {
    unsigned groupIdsCount = 1;
    for(auto& item : m_groupIds)
    {
      ss << "GroupId." << groupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      groupIdsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribePlacementGroupsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
