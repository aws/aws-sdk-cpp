/*
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
#include <aws/monitoring/model/DescribeAlarmsForMetricRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

DescribeAlarmsForMetricRequest::DescribeAlarmsForMetricRequest() : 
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_statistic(Statistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_unit(StandardUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

Aws::String DescribeAlarmsForMetricRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAlarmsForMetric&";
  if(m_metricNameHasBeenSet)
  {
    ss << "MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }

  if(m_namespaceHasBeenSet)
  {
    ss << "Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_statisticHasBeenSet)
  {
    ss << "Statistic=" << StatisticMapper::GetNameForStatistic(m_statistic) << "&";
  }

  if(m_dimensionsHasBeenSet)
  {
    unsigned dimensionsCount = 1;
    for(auto& item : m_dimensions)
    {
      item.OutputToStream(ss, "Dimensions.member.", dimensionsCount, "");
      dimensionsCount++;
    }
  }

  if(m_periodHasBeenSet)
  {
    ss << "Period=" << m_period << "&";
  }

  if(m_unitHasBeenSet)
  {
    ss << "Unit=" << StandardUnitMapper::GetNameForStandardUnit(m_unit) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}

