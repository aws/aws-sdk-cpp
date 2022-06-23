/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyAuthenticationProfileRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifyAuthenticationProfileRequest::ModifyAuthenticationProfileRequest() : 
    m_authenticationProfileNameHasBeenSet(false),
    m_authenticationProfileContentHasBeenSet(false)
{
}

Aws::String ModifyAuthenticationProfileRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyAuthenticationProfile&";
  if(m_authenticationProfileNameHasBeenSet)
  {
    ss << "AuthenticationProfileName=" << StringUtils::URLEncode(m_authenticationProfileName.c_str()) << "&";
  }

  if(m_authenticationProfileContentHasBeenSet)
  {
    ss << "AuthenticationProfileContent=" << StringUtils::URLEncode(m_authenticationProfileContent.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyAuthenticationProfileRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
