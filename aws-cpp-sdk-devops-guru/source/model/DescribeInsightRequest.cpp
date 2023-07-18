/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/DescribeInsightRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeInsightRequest::DescribeInsightRequest() : 
    m_idHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

Aws::String DescribeInsightRequest::SerializePayload() const
{
  return {};
}

void DescribeInsightRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_accountIdHasBeenSet)
    {
      ss << m_accountId;
      uri.AddQueryStringParameter("AccountId", ss.str());
      ss.str("");
    }

}



