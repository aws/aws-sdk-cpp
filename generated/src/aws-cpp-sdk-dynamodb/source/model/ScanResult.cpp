/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ScanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ScanResult::ScanResult() : 
    m_count(0),
    m_scannedCount(0)
{
}

ScanResult::ScanResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_count(0),
    m_scannedCount(0)
{
  *this = result;
}

ScanResult& ScanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("ScannedCount"))
  {
    m_scannedCount = jsonValue.GetInteger("ScannedCount");

  }

  if(jsonValue.ValueExists("LastEvaluatedKey"))
  {
    Aws::Map<Aws::String, JsonView> lastEvaluatedKeyJsonMap = jsonValue.GetObject("LastEvaluatedKey").GetAllObjects();
    for(auto& lastEvaluatedKeyItem : lastEvaluatedKeyJsonMap)
    {
      m_lastEvaluatedKey[lastEvaluatedKeyItem.first] = lastEvaluatedKeyItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("ConsumedCapacity"))
  {
    m_consumedCapacity = jsonValue.GetObject("ConsumedCapacity");

  }



  return *this;
}
