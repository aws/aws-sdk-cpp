/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ListReceiptRuleSetsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

ListReceiptRuleSetsRequest::ListReceiptRuleSetsRequest() : 
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListReceiptRuleSetsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListReceiptRuleSets&";
  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  ListReceiptRuleSetsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
