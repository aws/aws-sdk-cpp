/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeNetworkInsightsAccessScopeAnalysesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeNetworkInsightsAccessScopeAnalysesRequest::DescribeNetworkInsightsAccessScopeAnalysesRequest() : 
    m_networkInsightsAccessScopeAnalysisIdsHasBeenSet(false),
    m_networkInsightsAccessScopeIdHasBeenSet(false),
    m_analysisStartTimeBeginHasBeenSet(false),
    m_analysisStartTimeEndHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeNetworkInsightsAccessScopeAnalysesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeNetworkInsightsAccessScopeAnalyses&";
  if(m_networkInsightsAccessScopeAnalysisIdsHasBeenSet)
  {
    unsigned networkInsightsAccessScopeAnalysisIdsCount = 1;
    for(auto& item : m_networkInsightsAccessScopeAnalysisIds)
    {
      ss << "NetworkInsightsAccessScopeAnalysisId." << networkInsightsAccessScopeAnalysisIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      networkInsightsAccessScopeAnalysisIdsCount++;
    }
  }

  if(m_networkInsightsAccessScopeIdHasBeenSet)
  {
    ss << "NetworkInsightsAccessScopeId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeId.c_str()) << "&";
  }

  if(m_analysisStartTimeBeginHasBeenSet)
  {
    ss << "AnalysisStartTimeBegin=" << StringUtils::URLEncode(m_analysisStartTimeBegin.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_analysisStartTimeEndHasBeenSet)
  {
    ss << "AnalysisStartTimeEnd=" << StringUtils::URLEncode(m_analysisStartTimeEnd.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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


void  DescribeNetworkInsightsAccessScopeAnalysesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
