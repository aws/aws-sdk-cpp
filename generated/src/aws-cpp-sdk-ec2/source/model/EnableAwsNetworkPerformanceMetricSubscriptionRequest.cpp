/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnableAwsNetworkPerformanceMetricSubscriptionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String EnableAwsNetworkPerformanceMetricSubscriptionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableAwsNetworkPerformanceMetricSubscription&";
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
    ss << "Metric=" << StringUtils::URLEncode(MetricTypeMapper::GetNameForMetricType(m_metric)) << "&";
  }

  if(m_statisticHasBeenSet)
  {
    ss << "Statistic=" << StringUtils::URLEncode(StatisticTypeMapper::GetNameForStatisticType(m_statistic)) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  EnableAwsNetworkPerformanceMetricSubscriptionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
