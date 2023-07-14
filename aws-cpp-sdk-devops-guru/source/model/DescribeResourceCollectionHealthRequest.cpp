/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/DescribeResourceCollectionHealthRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeResourceCollectionHealthRequest::DescribeResourceCollectionHealthRequest() : 
    m_resourceCollectionType(ResourceCollectionType::NOT_SET),
    m_resourceCollectionTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeResourceCollectionHealthRequest::SerializePayload() const
{
  return {};
}

void DescribeResourceCollectionHealthRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

}



