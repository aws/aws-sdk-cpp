/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/SchemaDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

SchemaDefinition::SchemaDefinition() : 
    m_columnsHasBeenSet(false)
{
}

SchemaDefinition::SchemaDefinition(JsonView jsonValue) : 
    m_columnsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
