/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeNetworkInsightsAnalysesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeNetworkInsightsAnalysesRequest::DescribeNetworkInsightsAnalysesRequest() : 
    m_networkInsightsAnalysisIdsHasBeenSet(false),
    m_networkInsightsPathIdHasBeenSet(false),
    m_analysisStartTimeHasBeenSet(false),
    m_analysisEndTimeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeNetworkInsightsAnalysesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeNetworkInsightsAnalyses&";
  if(m_networkInsightsAnalysisIdsHasBeenSet)
  {
    unsigned networkInsightsAnalysisIdsCount = 1;
    for(auto& item : m_networkInsightsAnalysisIds)
    {
      ss << "NetworkInsightsAnalysisId." << networkInsightsAnalysisIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      networkInsightsAnalysisIdsCount++;
    }
  }

  if(m_networkInsightsPathIdHasBeenSet)
  {
    ss << "NetworkInsightsPathId=" << StringUtils::URLEncode(m_networkInsightsPathId.c_str()) << "&";
  }

  if(m_analysisStartTimeHasBeenSet)
  {
    ss << "AnalysisStartTime=" << StringUtils::URLEncode(m_analysisStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_analysisEndTimeHasBeenSet)
  {
    ss << "AnalysisEndTime=" << StringUtils::URLEncode(m_analysisEndTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeNetworkInsightsAnalysesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
