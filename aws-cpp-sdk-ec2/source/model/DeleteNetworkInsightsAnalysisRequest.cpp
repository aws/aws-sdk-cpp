/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteNetworkInsightsAnalysisRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteNetworkInsightsAnalysisRequest::DeleteNetworkInsightsAnalysisRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_networkInsightsAnalysisIdHasBeenSet(false)
{
}

Aws::String DeleteNetworkInsightsAnalysisRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteNetworkInsightsAnalysis&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_networkInsightsAnalysisIdHasBeenSet)
  {
    ss << "NetworkInsightsAnalysisId=" << StringUtils::URLEncode(m_networkInsightsAnalysisId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteNetworkInsightsAnalysisRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
