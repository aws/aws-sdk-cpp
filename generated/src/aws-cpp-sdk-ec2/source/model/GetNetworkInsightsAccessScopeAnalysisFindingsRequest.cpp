/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetNetworkInsightsAccessScopeAnalysisFindingsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

GetNetworkInsightsAccessScopeAnalysisFindingsRequest::GetNetworkInsightsAccessScopeAnalysisFindingsRequest() : 
    m_networkInsightsAccessScopeAnalysisIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String GetNetworkInsightsAccessScopeAnalysisFindingsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetNetworkInsightsAccessScopeAnalysisFindings&";
  if(m_networkInsightsAccessScopeAnalysisIdHasBeenSet)
  {
    ss << "NetworkInsightsAccessScopeAnalysisId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeAnalysisId.c_str()) << "&";
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


void  GetNetworkInsightsAccessScopeAnalysisFindingsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
