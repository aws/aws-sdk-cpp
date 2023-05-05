/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/StartNetworkInsightsAccessScopeAnalysisRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

StartNetworkInsightsAccessScopeAnalysisRequest::StartNetworkInsightsAccessScopeAnalysisRequest() : 
    m_networkInsightsAccessScopeIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String StartNetworkInsightsAccessScopeAnalysisRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StartNetworkInsightsAccessScopeAnalysis&";
  if(m_networkInsightsAccessScopeIdHasBeenSet)
  {
    ss << "NetworkInsightsAccessScopeId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  StartNetworkInsightsAccessScopeAnalysisRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
