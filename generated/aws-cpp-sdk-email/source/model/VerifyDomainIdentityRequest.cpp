/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/VerifyDomainIdentityRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

VerifyDomainIdentityRequest::VerifyDomainIdentityRequest() : 
    m_domainHasBeenSet(false)
{
}

Aws::String VerifyDomainIdentityRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=VerifyDomainIdentity&";
  if(m_domainHasBeenSet)
  {
    ss << "Domain=" << StringUtils::URLEncode(m_domain.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  VerifyDomainIdentityRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
