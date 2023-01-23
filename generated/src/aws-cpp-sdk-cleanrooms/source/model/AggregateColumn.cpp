/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AggregateColumn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

AggregateColumn::AggregateColumn() : 
    m_columnNamesHasBeenSet(false),
    m_function(AggregateFunctionName::NOT_SET),
    m_functionHasBeenSet(false)
{
}

AggregateColumn::AggregateColumn(JsonView jsonValue) : 
    m_columnNamesHasBeenSet(false),
    m_function(AggregateFunctionName::NOT_SET),
    m_functionHasBeenSet(false)
{
  *this = jsonValue;
}

AggregateColumn& AggregateColumn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columnNames"))
  {
    Aws::Utils::Array<JsonView> columnNamesJsonList = jsonValue.GetArray("columnNames");
    for(unsigned columnNamesIndex = 0; columnNamesIndex < columnNamesJsonList.GetLength(); ++columnNamesIndex)
    {
      m_columnNames.push_back(columnNamesJsonList[columnNamesIndex].AsString());
    }
    m_columnNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("function"))
  {
    m_function = AggregateFunctionNameMapper::GetAggregateFunctionNameForName(jsonValue.GetString("function"));

    m_functionHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregateColumn::Jsonize() const
{
  JsonValue payload;

  if(m_columnNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnNamesJsonList(m_columnNames.size());
   for(unsigned columnNamesIndex = 0; columnNamesIndex < columnNamesJsonList.GetLength(); ++columnNamesIndex)
   {
     columnNamesJsonList[columnNamesIndex].AsString(m_columnNames[columnNamesIndex]);
   }
   payload.WithArray("columnNames", std::move(columnNamesJsonList));

  }

  if(m_functionHasBeenSet)
  {
   payload.WithString("function", AggregateFunctionNameMapper::GetNameForAggregateFunctionName(m_function));
  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
