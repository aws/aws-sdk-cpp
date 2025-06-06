﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/GetIdentityMailFromDomainAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

Aws::String GetIdentityMailFromDomainAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetIdentityMailFromDomainAttributes&";
  if(m_identitiesHasBeenSet)
  {
    if (m_identities.empty())
    {
      ss << "Identities=&";
    }
    else
    {
      unsigned identitiesCount = 1;
      for(auto& item : m_identities)
      {
        ss << "Identities.member." << identitiesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        identitiesCount++;
      }
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  GetIdentityMailFromDomainAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
