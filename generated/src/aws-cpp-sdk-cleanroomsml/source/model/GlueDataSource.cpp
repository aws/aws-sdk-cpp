/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/GlueDataSource.h>
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

GlueDataSource::GlueDataSource(JsonView jsonValue)
{
  *this = jsonValue;
}

GlueDataSource& GlueDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");
    m_tableNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");
    m_databaseNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("catalogId"))
  {
    m_catalogId = jsonValue.GetString("catalogId");
    m_catalogIdHasBeenSet = true;
  }
  return *this;
}

JsonValue GlueDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("catalogId", m_catalogId);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
