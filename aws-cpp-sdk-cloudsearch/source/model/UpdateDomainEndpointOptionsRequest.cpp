/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/UpdateDomainEndpointOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

UpdateDomainEndpointOptionsRequest::UpdateDomainEndpointOptionsRequest() : 
    m_domainNameHasBeenSet(false),
    m_domainEndpointOptionsHasBeenSet(false)
{
}

Aws::String UpdateDomainEndpointOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateDomainEndpointOptions&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_domainEndpointOptionsHasBeenSet)
  {
    m_domainEndpointOptions.OutputToStream(ss, "DomainEndpointOptions");
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  UpdateDomainEndpointOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
