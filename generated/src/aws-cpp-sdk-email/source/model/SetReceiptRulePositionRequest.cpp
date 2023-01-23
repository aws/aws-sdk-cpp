/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/SetReceiptRulePositionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

SetReceiptRulePositionRequest::SetReceiptRulePositionRequest() : 
    m_ruleSetNameHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_afterHasBeenSet(false)
{
}

Aws::String SetReceiptRulePositionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetReceiptRulePosition&";
  if(m_ruleSetNameHasBeenSet)
  {
    ss << "RuleSetName=" << StringUtils::URLEncode(m_ruleSetName.c_str()) << "&";
  }

  if(m_ruleNameHasBeenSet)
  {
    ss << "RuleName=" << StringUtils::URLEncode(m_ruleName.c_str()) << "&";
  }

  if(m_afterHasBeenSet)
  {
    ss << "After=" << StringUtils::URLEncode(m_after.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  SetReceiptRulePositionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
