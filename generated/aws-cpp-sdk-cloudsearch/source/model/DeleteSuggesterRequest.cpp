/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DeleteSuggesterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DeleteSuggesterRequest::DeleteSuggesterRequest() : 
    m_domainNameHasBeenSet(false),
    m_suggesterNameHasBeenSet(false)
{
}

Aws::String DeleteSuggesterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteSuggester&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_suggesterNameHasBeenSet)
  {
    ss << "SuggesterName=" << StringUtils::URLEncode(m_suggesterName.c_str()) << "&";
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  DeleteSuggesterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
