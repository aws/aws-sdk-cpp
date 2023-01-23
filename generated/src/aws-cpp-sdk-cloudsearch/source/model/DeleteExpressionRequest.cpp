/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DeleteExpressionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DeleteExpressionRequest::DeleteExpressionRequest() : 
    m_domainNameHasBeenSet(false),
    m_expressionNameHasBeenSet(false)
{
}

Aws::String DeleteExpressionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteExpression&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_expressionNameHasBeenSet)
  {
    ss << "ExpressionName=" << StringUtils::URLEncode(m_expressionName.c_str()) << "&";
  }

  ss << "Version=2013-01-01";
  return ss.str();
}


void  DeleteExpressionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
