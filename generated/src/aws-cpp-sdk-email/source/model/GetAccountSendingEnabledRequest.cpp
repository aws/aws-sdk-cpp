/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/GetAccountSendingEnabledRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

GetAccountSendingEnabledRequest::GetAccountSendingEnabledRequest()
{
}

Aws::String GetAccountSendingEnabledRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetAccountSendingEnabled&";
  ss << "Version=2010-12-01";
  return ss.str();
}


void  GetAccountSendingEnabledRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
