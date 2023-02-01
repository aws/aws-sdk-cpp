/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DisableAwsNetworkPerformanceMetricSubscriptionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DisableAwsNetworkPerformanceMetricSubscriptionRequest::DisableAwsNetworkPerformanceMetricSubscriptionRequest() : 
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_metric(MetricType::NOT_SET),
    m_metricHasBeenSet(false),
    m_statistic(StatisticType::NOT_SET),
    m_statisticHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DisableAwsNetworkPerformanceMetricSubscriptionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DisableAwsNetworkPerformanceMetricSubscription&";
  if(m_sourceHasBeenSet)
  {
    ss << "Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }

  if(m_destinationHasBeenSet)
  {
    ss << "Destination=" << StringUtils::URLEncode(m_destination.c_str()) << "&";
  }

  if(m_metricHasBeenSet)
  {
    ss << "Metric=" << MetricTypeMapper::GetNameForMetricType(m_metric) << "&";
  }

  if(m_statisticHasBeenSet)
  {
    ss << "Statistic=" << StatisticTypeMapper::GetNameForStatisticType(m_statistic) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DisableAwsNetworkPerformanceMetricSubscriptionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
