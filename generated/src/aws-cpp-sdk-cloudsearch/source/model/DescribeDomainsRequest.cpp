/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DescribeDomainsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DescribeDomainsRequest::DescribeDomainsRequest() : 
    m_domainNamesHasBeenSet(false)
{
}

Aws::String DescribeDomainsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeDomains&";
  if(m_domainNamesHasBeenSet)
  {
    unsigned domainNamesCount = 1;
    for(auto& item : m_domainNames)
    {
      ss << "DomainNames.member." << domainNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      domainNamesCount++;
    }
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  DescribeDomainsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
