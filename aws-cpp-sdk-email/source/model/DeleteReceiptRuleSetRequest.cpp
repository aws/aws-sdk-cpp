/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/DeleteReceiptRuleSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

DeleteReceiptRuleSetRequest::DeleteReceiptRuleSetRequest() : 
    m_ruleSetNameHasBeenSet(false)
{
}

Aws::String DeleteReceiptRuleSetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteReceiptRuleSet&";
  if(m_ruleSetNameHasBeenSet)
  {
    ss << "RuleSetName=" << StringUtils::URLEncode(m_ruleSetName.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DeleteReceiptRuleSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
