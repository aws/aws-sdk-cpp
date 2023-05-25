/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/DeleteIdentityRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

DeleteIdentityRequest::DeleteIdentityRequest() : 
    m_identityHasBeenSet(false)
{
}

Aws::String DeleteIdentityRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteIdentity&";
  if(m_identityHasBeenSet)
  {
    ss << "Identity=" << StringUtils::URLEncode(m_identity.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DeleteIdentityRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
