/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DefineIndexFieldRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DefineIndexFieldRequest::DefineIndexFieldRequest() : 
    m_domainNameHasBeenSet(false),
    m_indexFieldHasBeenSet(false)
{
}

Aws::String DefineIndexFieldRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DefineIndexField&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_indexFieldHasBeenSet)
  {
    m_indexField.OutputToStream(ss, "IndexField");
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  DefineIndexFieldRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
