/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/StartNetworkInsightsAnalysisRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

StartNetworkInsightsAnalysisRequest::StartNetworkInsightsAnalysisRequest() : 
    m_networkInsightsPathIdHasBeenSet(false),
    m_additionalAccountsHasBeenSet(false),
    m_filterInArnsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String StartNetworkInsightsAnalysisRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StartNetworkInsightsAnalysis&";
  if(m_networkInsightsPathIdHasBeenSet)
  {
    ss << "NetworkInsightsPathId=" << StringUtils::URLEncode(m_networkInsightsPathId.c_str()) << "&";
  }

  if(m_additionalAccountsHasBeenSet)
  {
    unsigned additionalAccountsCount = 1;
    for(auto& item : m_additionalAccounts)
    {
      ss << "AdditionalAccount." << additionalAccountsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      additionalAccountsCount++;
    }
  }

  if(m_filterInArnsHasBeenSet)
  {
    unsigned filterInArnsCount = 1;
    for(auto& item : m_filterInArns)
    {
      ss << "FilterInArn." << filterInArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      filterInArnsCount++;
    }
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


void  StartNetworkInsightsAnalysisRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
