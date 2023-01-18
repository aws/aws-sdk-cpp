/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/PutMetricStreamRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

PutMetricStreamRequest::PutMetricStreamRequest() : 
    m_nameHasBeenSet(false),
    m_includeFiltersHasBeenSet(false),
    m_excludeFiltersHasBeenSet(false),
    m_firehoseArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_outputFormat(MetricStreamOutputFormat::NOT_SET),
    m_outputFormatHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_statisticsConfigurationsHasBeenSet(false),
    m_includeLinkedAccountsMetrics(false),
    m_includeLinkedAccountsMetricsHasBeenSet(false)
{
}

Aws::String PutMetricStreamRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutMetricStream&";
  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_includeFiltersHasBeenSet)
  {
    unsigned includeFiltersCount = 1;
    for(auto& item : m_includeFilters)
    {
      item.OutputToStream(ss, "IncludeFilters.member.", includeFiltersCount, "");
      includeFiltersCount++;
    }
  }

  if(m_excludeFiltersHasBeenSet)
  {
    unsigned excludeFiltersCount = 1;
    for(auto& item : m_excludeFilters)
    {
      item.OutputToStream(ss, "ExcludeFilters.member.", excludeFiltersCount, "");
      excludeFiltersCount++;
    }
  }

  if(m_firehoseArnHasBeenSet)
  {
    ss << "FirehoseArn=" << StringUtils::URLEncode(m_firehoseArn.c_str()) << "&";
  }

  if(m_roleArnHasBeenSet)
  {
    ss << "RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_outputFormatHasBeenSet)
  {
    ss << "OutputFormat=" << MetricStreamOutputFormatMapper::GetNameForMetricStreamOutputFormat(m_outputFormat) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  if(m_statisticsConfigurationsHasBeenSet)
  {
    unsigned statisticsConfigurationsCount = 1;
    for(auto& item : m_statisticsConfigurations)
    {
      item.OutputToStream(ss, "StatisticsConfigurations.member.", statisticsConfigurationsCount, "");
      statisticsConfigurationsCount++;
    }
  }

  if(m_includeLinkedAccountsMetricsHasBeenSet)
  {
    ss << "IncludeLinkedAccountsMetrics=" << std::boolalpha << m_includeLinkedAccountsMetrics << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  PutMetricStreamRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
