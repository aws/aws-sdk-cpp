/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DeleteIndexFieldRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DeleteIndexFieldRequest::DeleteIndexFieldRequest() : 
    m_domainNameHasBeenSet(false),
    m_indexFieldNameHasBeenSet(false)
{
}

Aws::String DeleteIndexFieldRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteIndexField&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_indexFieldNameHasBeenSet)
  {
    ss << "IndexFieldName=" << StringUtils::URLEncode(m_indexFieldName.c_str()) << "&";
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  DeleteIndexFieldRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
