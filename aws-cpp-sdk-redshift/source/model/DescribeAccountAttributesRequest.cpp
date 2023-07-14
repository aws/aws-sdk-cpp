/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeAccountAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribeAccountAttributesRequest::DescribeAccountAttributesRequest() : 
    m_attributeNamesHasBeenSet(false)
{
}

Aws::String DescribeAccountAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAccountAttributes&";
  if(m_attributeNamesHasBeenSet)
  {
    unsigned attributeNamesCount = 1;
    for(auto& item : m_attributeNames)
    {
      ss << "AttributeNames.member." << attributeNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      attributeNamesCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DescribeAccountAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
