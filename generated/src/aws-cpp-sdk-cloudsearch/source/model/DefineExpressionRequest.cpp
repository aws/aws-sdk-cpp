/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DefineExpressionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DefineExpressionRequest::DefineExpressionRequest() : 
    m_domainNameHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

Aws::String DefineExpressionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DefineExpression&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_expressionHasBeenSet)
  {
    m_expression.OutputToStream(ss, "Expression");
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  DefineExpressionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
