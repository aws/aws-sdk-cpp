/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/DeleteInsightRulesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

DeleteInsightRulesRequest::DeleteInsightRulesRequest() : 
    m_ruleNamesHasBeenSet(false)
{
}

Aws::String DeleteInsightRulesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteInsightRules&";
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


void  DeleteInsightRulesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
