/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/UpdateServiceAccessPoliciesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

UpdateServiceAccessPoliciesRequest::UpdateServiceAccessPoliciesRequest() : 
    m_domainNameHasBeenSet(false),
    m_accessPoliciesHasBeenSet(false)
{
}

Aws::String UpdateServiceAccessPoliciesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateServiceAccessPolicies&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_accessPoliciesHasBeenSet)
  {
    ss << "AccessPolicies=" << StringUtils::URLEncode(m_accessPolicies.c_str()) << "&";
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  UpdateServiceAccessPoliciesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
