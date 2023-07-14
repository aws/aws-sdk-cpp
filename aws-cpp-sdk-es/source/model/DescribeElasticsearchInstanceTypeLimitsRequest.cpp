﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DescribeElasticsearchInstanceTypeLimitsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeElasticsearchInstanceTypeLimitsRequest::DescribeElasticsearchInstanceTypeLimitsRequest() : 
    m_domainNameHasBeenSet(false),
    m_instanceType(ESPartitionInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_elasticsearchVersionHasBeenSet(false)
{
}

Aws::String DescribeElasticsearchInstanceTypeLimitsRequest::SerializePayload() const
{
  return {};
}

void DescribeElasticsearchInstanceTypeLimitsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_domainNameHasBeenSet)
    {
      ss << m_domainName;
      uri.AddQueryStringParameter("domainName", ss.str());
      ss.str("");
    }

}



