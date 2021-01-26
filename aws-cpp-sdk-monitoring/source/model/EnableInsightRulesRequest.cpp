/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/EnableInsightRulesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

EnableInsightRulesRequest::EnableInsightRulesRequest() : 
    m_ruleNamesHasBeenSet(false)
{
}

Aws::String EnableInsightRulesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableInsightRules&";
  if(m_ruleNamesHasBeenSet)
  {
    unsigned ruleNamesCount = 1;
    for(auto& item : m_ruleNames)
    {
      ss << "RuleNames.member." << ruleNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      ruleNamesCount++;
    }
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  EnableInsightRulesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
