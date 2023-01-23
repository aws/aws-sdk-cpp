/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/UpdateReceiptRuleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

UpdateReceiptRuleRequest::UpdateReceiptRuleRequest() : 
    m_ruleSetNameHasBeenSet(false),
    m_ruleHasBeenSet(false)
{
}

Aws::String UpdateReceiptRuleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateReceiptRule&";
  if(m_ruleSetNameHasBeenSet)
  {
    ss << "RuleSetName=" << StringUtils::URLEncode(m_ruleSetName.c_str()) << "&";
  }

  if(m_ruleHasBeenSet)
  {
    m_rule.OutputToStream(ss, "Rule");
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  UpdateReceiptRuleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
