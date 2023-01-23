/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/SchemaDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

SchemaDefinition::SchemaDefinition() : 
    m_columnsHasBeenSet(false),
    m_primaryKeyColumnsHasBeenSet(false)
{
}

SchemaDefinition::SchemaDefinition(JsonView jsonValue) : 
    m_columnsHasBeenSet(false),
    m_primaryKeyColumnsHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaDefinition& SchemaDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columns"))
  {
    Aws::Utils::Array<JsonView> columnsJsonList = jsonValue.GetArray("columns");
    for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
    {
      m_columns.push_back(columnsJsonList[columnsIndex].AsObject());
    }
    m_columnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("primaryKeyColumns"))
  {
    Aws::Utils::Array<JsonView> primaryKeyColumnsJsonList = jsonValue.GetArray("primaryKeyColumns");
    for(unsigned primaryKeyColumnsIndex = 0; primaryKeyColumnsIndex < primaryKeyColumnsJsonList.GetLength(); ++primaryKeyColumnsIndex)
    {
      m_primaryKeyColumns.push_back(primaryKeyColumnsJsonList[primaryKeyColumnsIndex].AsString());
    }
    m_primaryKeyColumnsHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_columnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnsJsonList(m_columns.size());
   for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
   {
     columnsJsonList[columnsIndex].AsObject(m_columns[columnsIndex].Jsonize());
   }
   payload.WithArray("columns", std::move(columnsJsonList));

  }

  if(m_primaryKeyColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> primaryKeyColumnsJsonList(m_primaryKeyColumns.size());
   for(unsigned primaryKeyColumnsIndex = 0; primaryKeyColumnsIndex < primaryKeyColumnsJsonList.GetLength(); ++primaryKeyColumnsIndex)
   {
     primaryKeyColumnsJsonList[primaryKeyColumnsIndex].AsString(m_primaryKeyColumns[primaryKeyColumnsIndex]);
   }
   payload.WithArray("primaryKeyColumns", std::move(primaryKeyColumnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
