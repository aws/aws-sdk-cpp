/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/VerifyDomainDkimRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

VerifyDomainDkimRequest::VerifyDomainDkimRequest() : 
    m_domainHasBeenSet(false)
{
}

Aws::String VerifyDomainDkimRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=VerifyDomainDkim&";
  if(m_domainHasBeenSet)
  {
    ss << "Domain=" << StringUtils::URLEncode(m_domain.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  VerifyDomainDkimRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
