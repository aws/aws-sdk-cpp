/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/DescribeActiveReceiptRuleSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

DescribeActiveReceiptRuleSetRequest::DescribeActiveReceiptRuleSetRequest()
{
}

Aws::String DescribeActiveReceiptRuleSetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeActiveReceiptRuleSet&";
  ss << "Version=2010-12-01";
  return ss.str();
}


void  DescribeActiveReceiptRuleSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
