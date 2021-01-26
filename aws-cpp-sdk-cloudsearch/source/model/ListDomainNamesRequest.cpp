/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/ListDomainNamesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

ListDomainNamesRequest::ListDomainNamesRequest()
{
}

Aws::String ListDomainNamesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListDomainNames&";
  ss << "Version=2013-01-01";
  return ss.str();
}


void  ListDomainNamesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
