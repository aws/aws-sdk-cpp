/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ListIdentityPoliciesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

ListIdentityPoliciesRequest::ListIdentityPoliciesRequest() : 
    m_identityHasBeenSet(false)
{
}

Aws::String ListIdentityPoliciesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListIdentityPolicies&";
  if(m_identityHasBeenSet)
  {
    ss << "Identity=" << StringUtils::URLEncode(m_identity.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  ListIdentityPoliciesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
