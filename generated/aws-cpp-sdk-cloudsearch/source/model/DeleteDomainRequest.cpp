/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DeleteDomainRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DeleteDomainRequest::DeleteDomainRequest() : 
    m_domainNameHasBeenSet(false)
{
}

Aws::String DeleteDomainRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteDomain&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  DeleteDomainRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
