/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sdb/model/ListDomainsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SimpleDB::Model;
using namespace Aws::Utils;

ListDomainsRequest::ListDomainsRequest() : 
    m_maxNumberOfDomains(0),
    m_maxNumberOfDomainsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListDomainsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListDomains&";
  if(m_maxNumberOfDomainsHasBeenSet)
  {
    ss << "MaxNumberOfDomains=" << m_maxNumberOfDomains << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2009-04-15";
  return ss.str();
}


void  ListDomainsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
