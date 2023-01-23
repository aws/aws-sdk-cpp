﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/SetIdentityDkimEnabledRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

SetIdentityDkimEnabledRequest::SetIdentityDkimEnabledRequest() : 
    m_identityHasBeenSet(false),
    m_dkimEnabled(false),
    m_dkimEnabledHasBeenSet(false)
{
}

Aws::String SetIdentityDkimEnabledRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetIdentityDkimEnabled&";
  if(m_identityHasBeenSet)
  {
    ss << "Identity=" << StringUtils::URLEncode(m_identity.c_str()) << "&";
  }

  if(m_dkimEnabledHasBeenSet)
  {
    ss << "DkimEnabled=" << std::boolalpha << m_dkimEnabled << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  SetIdentityDkimEnabledRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
