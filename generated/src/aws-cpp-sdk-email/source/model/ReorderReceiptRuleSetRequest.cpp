/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ReorderReceiptRuleSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

ReorderReceiptRuleSetRequest::ReorderReceiptRuleSetRequest() : 
    m_ruleSetNameHasBeenSet(false),
    m_ruleNamesHasBeenSet(false)
{
}

Aws::String ReorderReceiptRuleSetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ReorderReceiptRuleSet&";
  if(m_ruleSetNameHasBeenSet)
  {
    ss << "RuleSetName=" << StringUtils::URLEncode(m_ruleSetName.c_str()) << "&";
  }

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

  ss << "Version=2010-12-01";
  return ss.str();
}


void  ReorderReceiptRuleSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
