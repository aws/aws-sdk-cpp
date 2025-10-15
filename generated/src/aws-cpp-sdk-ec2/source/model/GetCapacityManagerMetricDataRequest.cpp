/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetCapacityManagerMetricDataRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String GetCapacityManagerMetricDataRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetCapacityManagerMetricData&";
  if(m_metricNamesHasBeenSet)
  {
    unsigned metricNamesCount = 1;
    for(auto& item : m_metricNames)
    {
      ss << "MetricName." << metricNamesCount << "="
          << StringUtils::URLEncode(MetricMapper::GetNameForMetric(item)) << "&";
      metricNamesCount++;
    }
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
    ss << "EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_periodHasBeenSet)
  {
    ss << "Period=" << m_period << "&";
  }

  if(m_groupByHasBeenSet)
  {
    unsigned groupByCount = 1;
    for(auto& item : m_groupBy)
    {
      ss << "GroupBy." << groupByCount << "="
          << StringUtils::URLEncode(GroupByMapper::GetNameForGroupBy(item)) << "&";
      groupByCount++;
    }
  }

  if(m_filterByHasBeenSet)
  {
    unsigned filterByCount = 1;
    for(auto& item : m_filterBy)
    {
      item.OutputToStream(ss, "FilterBy.", filterByCount, "");
      filterByCount++;
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

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetCapacityManagerMetricDataRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
