/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/CreateDomainRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

CreateDomainRequest::CreateDomainRequest() : 
    m_domainNameHasBeenSet(false)
{
}

Aws::String CreateDomainRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDomain&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  CreateDomainRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
