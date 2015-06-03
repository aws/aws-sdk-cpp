/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/model/GetMetricStatisticsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

GetMetricStatisticsRequest::GetMetricStatisticsRequest() : 
    m_dimensionsHasBeenSet(false),
    m_startTime(0.0),
    m_endTime(0.0),
    m_period(0),
    m_unitHasBeenSet(false)
{
}

Aws::String GetMetricStatisticsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetMetricStatistics&";
  ss << "Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  ss << "MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  if(m_dimensionsHasBeenSet)
  {
    unsigned dimensionsCount = 1;
    for(auto& item : m_dimensions)
    {
      item.OutputToStream(ss, "Dimensions.", dimensionsCount, "");
      dimensionsCount++;
    }
  }
  ss << "StartTime=" << m_startTime << "&";
  ss << "EndTime=" << m_endTime << "&";
  ss << "Period=" << m_period << "&";
  unsigned statisticsCount = 1;
  for(auto& item : m_statistics)
  {
    ss << "Statistics." << statisticsCount << "="
        << StringUtils::URLEncode(StatisticMapper::GetNameForStatistic(item).c_str()) << "&";
    statisticsCount++;
  }
  if(m_unitHasBeenSet)
  {
    ss << "Unit=" << StandardUnitMapper::GetNameForStandardUnit(m_unit) << "&";
  }
  ss << "Version=2010-08-01";
  return ss.str();
}

