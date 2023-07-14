/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DescribeExpressionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DescribeExpressionsRequest::DescribeExpressionsRequest() : 
    m_domainNameHasBeenSet(false),
    m_expressionNamesHasBeenSet(false),
    m_deployed(false),
    m_deployedHasBeenSet(false)
{
}

Aws::String DescribeExpressionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeExpressions&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_expressionNamesHasBeenSet)
  {
    unsigned expressionNamesCount = 1;
    for(auto& item : m_expressionNames)
    {
      ss << "ExpressionNames.member." << expressionNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      expressionNamesCount++;
    }
  }

  if(m_deployedHasBeenSet)
  {
    ss << "Deployed=" << std::boolalpha << m_deployed << "&";
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  DescribeExpressionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
