/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/DescribeReceiptRuleSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

DescribeReceiptRuleSetRequest::DescribeReceiptRuleSetRequest() : 
    m_ruleSetNameHasBeenSet(false)
{
}

Aws::String DescribeReceiptRuleSetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeReceiptRuleSet&";
  if(m_ruleSetNameHasBeenSet)
  {
    ss << "RuleSetName=" << StringUtils::URLEncode(m_ruleSetName.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DescribeReceiptRuleSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
