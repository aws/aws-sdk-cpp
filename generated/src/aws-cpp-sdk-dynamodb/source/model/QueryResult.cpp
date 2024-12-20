/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/QueryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

QueryResult::QueryResult() : 
    m_count(0),
    m_consumedCapacityUnits(0.0)
{
}

QueryResult::QueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : QueryResult()
{
  *this = result;
}

QueryResult& QueryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Items"))
  {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("Items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      Aws::Map<Aws::String, JsonView> attributeMapJsonMap = itemsJsonList[itemsIndex].GetAllObjects();
      Aws::Map<Aws::String, AttributeValue> attributeMapMap;
      for(auto& attributeMapItem : attributeMapJsonMap)
      {
        attributeMapMap[attributeMapItem.first] = attributeMapItem.second.AsObject();
      }
      m_items.push_back(std::move(attributeMapMap));
    }
  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

  }

  if(jsonValue.ValueExists("LastEvaluatedKey"))
  {
    m_lastEvaluatedKey = jsonValue.GetObject("LastEvaluatedKey");

  }

  if(jsonValue.ValueExists("ConsumedCapacityUnits"))
  {
    m_consumedCapacityUnits = jsonValue.GetDouble("ConsumedCapacityUnits");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
