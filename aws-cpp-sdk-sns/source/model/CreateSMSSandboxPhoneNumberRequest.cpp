/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/CreateSMSSandboxPhoneNumberRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

CreateSMSSandboxPhoneNumberRequest::CreateSMSSandboxPhoneNumberRequest() : 
    m_phoneNumberHasBeenSet(false),
    m_languageCode(LanguageCodeString::NOT_SET),
    m_languageCodeHasBeenSet(false)
{
}

Aws::String CreateSMSSandboxPhoneNumberRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateSMSSandboxPhoneNumber&";
  if(m_phoneNumberHasBeenSet)
  {
    ss << "PhoneNumber=" << StringUtils::URLEncode(m_phoneNumber.c_str()) << "&";
  }

  if(m_languageCodeHasBeenSet)
  {
    ss << "LanguageCode=" << LanguageCodeStringMapper::GetNameForLanguageCodeString(m_languageCode) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  CreateSMSSandboxPhoneNumberRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
