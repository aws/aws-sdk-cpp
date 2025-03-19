/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SnowflakeTableSchemaV1.h>
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

SnowflakeTableSchemaV1::SnowflakeTableSchemaV1(JsonView jsonValue)
{
  *this = jsonValue;
}

SnowflakeTableSchemaV1& SnowflakeTableSchemaV1::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columnName"))
  {
    m_columnName = jsonValue.GetString("columnName");
    m_columnNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("columnType"))
  {
    m_columnType = jsonValue.GetString("columnType");
    m_columnTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SnowflakeTableSchemaV1::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("columnName", m_columnName);

  }

  if(m_columnTypeHasBeenSet)
  {
   payload.WithString("columnType", m_columnType);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
