/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BatchStatementResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

BatchStatementResponse::BatchStatementResponse() : 
    m_errorHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_itemHasBeenSet(false)
{
}

BatchStatementResponse::BatchStatementResponse(JsonView jsonValue) : 
    m_errorHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_itemHasBeenSet(false)
{
  *this = jsonValue;
}

BatchStatementResponse& BatchStatementResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Item"))
  {
    Aws::Map<Aws::String, JsonView> itemJsonMap = jsonValue.GetObject("Item").GetAllObjects();
    for(auto& itemItem : itemJsonMap)
    {
      m_item[itemItem.first] = itemItem.second.AsObject();
    }
    m_itemHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchStatementResponse::Jsonize() const
{
  JsonValue payload;

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_itemHasBeenSet)
  {
   JsonValue itemJsonMap;
   for(auto& itemItem : m_item)
   {
     itemJsonMap.WithObject(itemItem.first, itemItem.second.Jsonize());
   }
   payload.WithObject("Item", std::move(itemJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
