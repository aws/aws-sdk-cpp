/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/VerifyEmailAddressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

VerifyEmailAddressRequest::VerifyEmailAddressRequest() : 
    m_emailAddressHasBeenSet(false)
{
}

Aws::String VerifyEmailAddressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=VerifyEmailAddress&";
  if(m_emailAddressHasBeenSet)
  {
    ss << "EmailAddress=" << StringUtils::URLEncode(m_emailAddress.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  VerifyEmailAddressRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
