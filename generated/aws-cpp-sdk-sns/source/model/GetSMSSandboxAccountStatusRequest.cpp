/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/GetSMSSandboxAccountStatusRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

GetSMSSandboxAccountStatusRequest::GetSMSSandboxAccountStatusRequest()
{
}

Aws::String GetSMSSandboxAccountStatusRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetSMSSandboxAccountStatus&";
  ss << "Version=2010-03-31";
  return ss.str();
}


void  GetSMSSandboxAccountStatusRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
