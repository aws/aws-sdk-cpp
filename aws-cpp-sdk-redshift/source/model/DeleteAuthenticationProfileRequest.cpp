/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteAuthenticationProfileRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeleteAuthenticationProfileRequest::DeleteAuthenticationProfileRequest() : 
    m_authenticationProfileNameHasBeenSet(false)
{
}

Aws::String DeleteAuthenticationProfileRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteAuthenticationProfile&";
  if(m_authenticationProfileNameHasBeenSet)
  {
    ss << "AuthenticationProfileName=" << StringUtils::URLEncode(m_authenticationProfileName.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DeleteAuthenticationProfileRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
