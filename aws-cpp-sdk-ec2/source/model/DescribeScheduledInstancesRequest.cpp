﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/DescribeScheduledInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeScheduledInstancesRequest::DescribeScheduledInstancesRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_scheduledInstanceIdsHasBeenSet(false),
    m_slotStartTimeRangeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribeScheduledInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeScheduledInstances&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_scheduledInstanceIdsHasBeenSet)
  {
    unsigned scheduledInstanceIdsCount = 1;
    for(auto& item : m_scheduledInstanceIds)
    {
      ss << "ScheduledInstanceId." << scheduledInstanceIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      scheduledInstanceIdsCount++;
    }
  }

  if(m_slotStartTimeRangeHasBeenSet)
  {
    m_slotStartTimeRange.OutputToStream(ss, "SlotStartTimeRange");
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

  ss << "Version=2015-10-01";
  return ss.str();
}

