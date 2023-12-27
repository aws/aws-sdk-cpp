/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/Table.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

Table::Table() : 
    m_descriptionHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tablePropertiesHasBeenSet(false)
{
}

Table::Table(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tablePropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

Table& Table::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableProperties"))
  {
    Aws::Utils::Array<JsonView> tablePropertiesJsonList = jsonValue.GetArray("TableProperties");
    for(unsigned tablePropertiesIndex = 0; tablePropertiesIndex < tablePropertiesJsonList.GetLength(); ++tablePropertiesIndex)
    {
      m_tableProperties.push_back(tablePropertiesJsonList[tablePropertiesIndex].AsObject());
    }
    m_tablePropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue Table::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_tablePropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tablePropertiesJsonList(m_tableProperties.size());
   for(unsigned tablePropertiesIndex = 0; tablePropertiesIndex < tablePropertiesJsonList.GetLength(); ++tablePropertiesIndex)
   {
     tablePropertiesJsonList[tablePropertiesIndex].AsObject(m_tableProperties[tablePropertiesIndex].Jsonize());
   }
   payload.WithArray("TableProperties", std::move(tablePropertiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
