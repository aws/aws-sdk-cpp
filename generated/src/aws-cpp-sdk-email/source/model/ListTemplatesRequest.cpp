/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ListTemplatesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

ListTemplatesRequest::ListTemplatesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String ListTemplatesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListTemplates&";
  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxItemsHasBeenSet)
  {
    ss << "MaxItems=" << m_maxItems << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  ListTemplatesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
