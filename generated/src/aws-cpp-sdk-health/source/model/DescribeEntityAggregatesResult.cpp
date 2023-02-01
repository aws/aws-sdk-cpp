/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/DescribeEntityAggregatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEntityAggregatesResult::DescribeEntityAggregatesResult()
{
}

DescribeEntityAggregatesResult::DescribeEntityAggregatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEntityAggregatesResult& DescribeEntityAggregatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("entityAggregates"))
  {
    Aws::Utils::Array<JsonView> entityAggregatesJsonList = jsonValue.GetArray("entityAggregates");
    for(unsigned entityAggregatesIndex = 0; entityAggregatesIndex < entityAggregatesJsonList.GetLength(); ++entityAggregatesIndex)
    {
      m_entityAggregates.push_back(entityAggregatesJsonList[entityAggregatesIndex].AsObject());
    }
  }



  return *this;
}
