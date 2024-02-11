/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BatchStatementError.h>
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

BatchStatementError::BatchStatementError() : 
    m_code(BatchStatementErrorCodeEnum::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_itemHasBeenSet(false)
{
}

BatchStatementError::BatchStatementError(JsonView jsonValue) : 
    m_code(BatchStatementErrorCodeEnum::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_itemHasBeenSet(false)
{
  *this = jsonValue;
}

BatchStatementError& BatchStatementError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = BatchStatementErrorCodeEnumMapper::GetBatchStatementErrorCodeEnumForName(jsonValue.GetString("Code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
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

JsonValue BatchStatementError::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", BatchStatementErrorCodeEnumMapper::GetNameForBatchStatementErrorCodeEnum(m_code));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

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
