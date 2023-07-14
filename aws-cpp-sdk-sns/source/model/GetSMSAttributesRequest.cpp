/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/GetSMSAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

GetSMSAttributesRequest::GetSMSAttributesRequest() : 
    m_attributesHasBeenSet(false)
{
}

Aws::String GetSMSAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetSMSAttributes&";
  if(m_attributesHasBeenSet)
  {
    unsigned attributesCount = 1;
    for(auto& item : m_attributes)
    {
      ss << "attributes.member." << attributesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      attributesCount++;
    }
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  GetSMSAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
