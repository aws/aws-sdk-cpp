/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateNetworkInsightsAccessScopeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateNetworkInsightsAccessScopeRequest::CreateNetworkInsightsAccessScopeRequest() : 
    m_matchPathsHasBeenSet(false),
    m_excludePathsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagSpecificationsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateNetworkInsightsAccessScopeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateNetworkInsightsAccessScope&";
  if(m_matchPathsHasBeenSet)
  {
    unsigned matchPathsCount = 1;
    for(auto& item : m_matchPaths)
    {
      item.OutputToStream(ss, "MatchPath.", matchPathsCount, "");
      matchPathsCount++;
    }
  }

  if(m_excludePathsHasBeenSet)
  {
    unsigned excludePathsCount = 1;
    for(auto& item : m_excludePaths)
    {
      item.OutputToStream(ss, "ExcludePath.", excludePathsCount, "");
      excludePathsCount++;
    }
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
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

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateNetworkInsightsAccessScopeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
