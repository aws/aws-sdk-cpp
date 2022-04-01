/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/GetIdentityNotificationAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

GetIdentityNotificationAttributesRequest::GetIdentityNotificationAttributesRequest() : 
    m_identitiesHasBeenSet(false)
{
}

Aws::String GetIdentityNotificationAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetIdentityNotificationAttributes&";
  if(m_identitiesHasBeenSet)
  {
    unsigned identitiesCount = 1;
    for(auto& item : m_identities)
    {
      ss << "Identities.member." << identitiesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      identitiesCount++;
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  GetIdentityNotificationAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
