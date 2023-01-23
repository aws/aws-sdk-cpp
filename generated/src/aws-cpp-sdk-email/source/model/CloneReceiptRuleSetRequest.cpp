/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/CloneReceiptRuleSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

CloneReceiptRuleSetRequest::CloneReceiptRuleSetRequest() : 
    m_ruleSetNameHasBeenSet(false),
    m_originalRuleSetNameHasBeenSet(false)
{
}

Aws::String CloneReceiptRuleSetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CloneReceiptRuleSet&";
  if(m_ruleSetNameHasBeenSet)
  {
    ss << "RuleSetName=" << StringUtils::URLEncode(m_ruleSetName.c_str()) << "&";
  }

  if(m_originalRuleSetNameHasBeenSet)
  {
    ss << "OriginalRuleSetName=" << StringUtils::URLEncode(m_originalRuleSetName.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  CloneReceiptRuleSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
