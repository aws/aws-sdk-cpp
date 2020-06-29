/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DefineSuggesterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DefineSuggesterRequest::DefineSuggesterRequest() : 
    m_domainNameHasBeenSet(false),
    m_suggesterHasBeenSet(false)
{
}

Aws::String DefineSuggesterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DefineSuggester&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_suggesterHasBeenSet)
  {
    m_suggester.OutputToStream(ss, "Suggester");
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  DefineSuggesterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
