/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/UpdateAvailabilityOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

UpdateAvailabilityOptionsRequest::UpdateAvailabilityOptionsRequest() : 
    m_domainNameHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false)
{
}

Aws::String UpdateAvailabilityOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateAvailabilityOptions&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_multiAZHasBeenSet)
  {
    ss << "MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  UpdateAvailabilityOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
