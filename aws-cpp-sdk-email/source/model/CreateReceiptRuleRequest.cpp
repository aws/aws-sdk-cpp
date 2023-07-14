﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/CreateReceiptRuleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

CreateReceiptRuleRequest::CreateReceiptRuleRequest() : 
    m_ruleSetNameHasBeenSet(false),
    m_afterHasBeenSet(false),
    m_ruleHasBeenSet(false)
{
}

Aws::String CreateReceiptRuleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateReceiptRule&";
  if(m_ruleSetNameHasBeenSet)
  {
    ss << "RuleSetName=" << StringUtils::URLEncode(m_ruleSetName.c_str()) << "&";
  }

  if(m_afterHasBeenSet)
  {
    ss << "After=" << StringUtils::URLEncode(m_after.c_str()) << "&";
  }

  if(m_ruleHasBeenSet)
  {
    m_rule.OutputToStream(ss, "Rule");
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  CreateReceiptRuleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
