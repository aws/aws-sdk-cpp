/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/DeleteSMSSandboxPhoneNumberRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

DeleteSMSSandboxPhoneNumberRequest::DeleteSMSSandboxPhoneNumberRequest() : 
    m_phoneNumberHasBeenSet(false)
{
}

Aws::String DeleteSMSSandboxPhoneNumberRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteSMSSandboxPhoneNumber&";
  if(m_phoneNumberHasBeenSet)
  {
    ss << "PhoneNumber=" << StringUtils::URLEncode(m_phoneNumber.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  DeleteSMSSandboxPhoneNumberRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
