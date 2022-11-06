/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/AggregateOperation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

AggregateOperation::AggregateOperation() : 
    m_columnHasBeenSet(false),
    m_aggFunc(AggFunction::NOT_SET),
    m_aggFuncHasBeenSet(false)
{
}

AggregateOperation::AggregateOperation(JsonView jsonValue) : 
    m_columnHasBeenSet(false),
    m_aggFunc(AggFunction::NOT_SET),
    m_aggFuncHasBeenSet(false)
{
  *this = jsonValue;
}

AggregateOperation& AggregateOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Column"))
  {
    Aws::Utils::Array<JsonView> columnJsonList = jsonValue.GetArray("Column");
    for(unsigned columnIndex = 0; columnIndex < columnJsonList.GetLength(); ++columnIndex)
    {
      m_column.push_back(columnJsonList[columnIndex].AsString());
    }
    m_columnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AggFunc"))
  {
    m_aggFunc = AggFunctionMapper::GetAggFunctionForName(jsonValue.GetString("AggFunc"));

    m_aggFuncHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregateOperation::Jsonize() const
{
  JsonValue payload;

  if(m_columnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnJsonList(m_column.size());
   for(unsigned columnIndex = 0; columnIndex < columnJsonList.GetLength(); ++columnIndex)
   {
     columnJsonList[columnIndex].AsString(m_column[columnIndex]);
   }
   payload.WithArray("Column", std::move(columnJsonList));

  }

  if(m_aggFuncHasBeenSet)
  {
   payload.WithString("AggFunc", AggFunctionMapper::GetNameForAggFunction(m_aggFunc));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
