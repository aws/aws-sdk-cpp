﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DescribeReservedElasticsearchInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReservedElasticsearchInstancesResult::DescribeReservedElasticsearchInstancesResult()
{
}

DescribeReservedElasticsearchInstancesResult::DescribeReservedElasticsearchInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReservedElasticsearchInstancesResult& DescribeReservedElasticsearchInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ReservedElasticsearchInstances"))
  {
    Aws::Utils::Array<JsonView> reservedElasticsearchInstancesJsonList = jsonValue.GetArray("ReservedElasticsearchInstances");
    for(unsigned reservedElasticsearchInstancesIndex = 0; reservedElasticsearchInstancesIndex < reservedElasticsearchInstancesJsonList.GetLength(); ++reservedElasticsearchInstancesIndex)
    {
      m_reservedElasticsearchInstances.push_back(reservedElasticsearchInstancesJsonList[reservedElasticsearchInstancesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
