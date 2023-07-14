/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/BuildSuggestersRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

BuildSuggestersRequest::BuildSuggestersRequest() : 
    m_domainNameHasBeenSet(false)
{
}

Aws::String BuildSuggestersRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=BuildSuggesters&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  BuildSuggestersRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
