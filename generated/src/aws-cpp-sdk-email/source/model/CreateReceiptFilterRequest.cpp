/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/CreateReceiptFilterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

CreateReceiptFilterRequest::CreateReceiptFilterRequest() : 
    m_filterHasBeenSet(false)
{
}

Aws::String CreateReceiptFilterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateReceiptFilter&";
  if(m_filterHasBeenSet)
  {
    m_filter.OutputToStream(ss, "Filter");
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  CreateReceiptFilterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
