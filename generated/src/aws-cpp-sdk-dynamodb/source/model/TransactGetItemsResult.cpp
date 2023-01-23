/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TransactGetItemsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TransactGetItemsResult::TransactGetItemsResult()
{
}

TransactGetItemsResult::TransactGetItemsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TransactGetItemsResult& TransactGetItemsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConsumedCapacity"))
  {
    Aws::Utils::Array<JsonView> consumedCapacityJsonList = jsonValue.GetArray("ConsumedCapacity");
    for(unsigned consumedCapacityIndex = 0; consumedCapacityIndex < consumedCapacityJsonList.GetLength(); ++consumedCapacityIndex)
    {
      m_consumedCapacity.push_back(consumedCapacityJsonList[consumedCapacityIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Responses"))
  {
    Aws::Utils::Array<JsonView> responsesJsonList = jsonValue.GetArray("Responses");
    for(unsigned responsesIndex = 0; responsesIndex < responsesJsonList.GetLength(); ++responsesIndex)
    {
      m_responses.push_back(responsesJsonList[responsesIndex].AsObject());
    }
  }



  return *this;
}
