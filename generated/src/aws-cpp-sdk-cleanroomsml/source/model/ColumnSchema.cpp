/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ColumnSchema.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

ColumnSchema::ColumnSchema() : 
    m_columnNameHasBeenSet(false),
    m_columnTypesHasBeenSet(false)
{
}

ColumnSchema::ColumnSchema(JsonView jsonValue) : 
    m_columnNameHasBeenSet(false),
    m_columnTypesHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnSchema& ColumnSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columnName"))
  {
    m_columnName = jsonValue.GetString("columnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("columnTypes"))
  {
    Aws::Utils::Array<JsonView> columnTypesJsonList = jsonValue.GetArray("columnTypes");
    for(unsigned columnTypesIndex = 0; columnTypesIndex < columnTypesJsonList.GetLength(); ++columnTypesIndex)
    {
      m_columnTypes.push_back(ColumnTypeMapper::GetColumnTypeForName(columnTypesJsonList[columnTypesIndex].AsString()));
    }
    m_columnTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnSchema::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("columnName", m_columnName);

  }

  if(m_columnTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnTypesJsonList(m_columnTypes.size());
   for(unsigned columnTypesIndex = 0; columnTypesIndex < columnTypesJsonList.GetLength(); ++columnTypesIndex)
   {
     columnTypesJsonList[columnTypesIndex].AsString(ColumnTypeMapper::GetNameForColumnType(m_columnTypes[columnTypesIndex]));
   }
   payload.WithArray("columnTypes", std::move(columnTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
