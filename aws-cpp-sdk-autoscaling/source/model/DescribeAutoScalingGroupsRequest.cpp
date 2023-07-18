﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeAutoScalingGroupsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DescribeAutoScalingGroupsRequest::DescribeAutoScalingGroupsRequest() : 
    m_autoScalingGroupNamesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribeAutoScalingGroupsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAutoScalingGroups&";
  if(m_autoScalingGroupNamesHasBeenSet)
  {
    unsigned autoScalingGroupNamesCount = 1;
    for(auto& item : m_autoScalingGroupNames)
    {
      ss << "AutoScalingGroupNames.member." << autoScalingGroupNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      autoScalingGroupNamesCount++;
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filters.member.", filtersCount, "");
      filtersCount++;
    }
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DescribeAutoScalingGroupsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
