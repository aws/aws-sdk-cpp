/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DeleteItemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteItemResult::DeleteItemResult()
{
}

DeleteItemResult::DeleteItemResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteItemResult& DeleteItemResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("ConsumedCapacity"))
  {
    m_consumedCapacity = jsonValue.GetObject("ConsumedCapacity");

  }

  if(jsonValue.ValueExists("ItemCollectionMetrics"))
  {
    m_itemCollectionMetrics = jsonValue.GetObject("ItemCollectionMetrics");

  }



  return *this;
}
