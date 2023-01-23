/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DescribeSuggestersRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DescribeSuggestersRequest::DescribeSuggestersRequest() : 
    m_domainNameHasBeenSet(false),
    m_suggesterNamesHasBeenSet(false),
    m_deployed(false),
    m_deployedHasBeenSet(false)
{
}

Aws::String DescribeSuggestersRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeSuggesters&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_suggesterNamesHasBeenSet)
  {
    unsigned suggesterNamesCount = 1;
    for(auto& item : m_suggesterNames)
    {
      ss << "SuggesterNames.member." << suggesterNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      suggesterNamesCount++;
    }
  }

  if(m_deployedHasBeenSet)
  {
    ss << "Deployed=" << std::boolalpha << m_deployed << "&";
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  DescribeSuggestersRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
