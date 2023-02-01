/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityTargetTable.h>
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

DataQualityTargetTable::DataQualityTargetTable() : 
    m_tableNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
}

DataQualityTargetTable::DataQualityTargetTable(JsonView jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualityTargetTable& DataQualityTargetTable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualityTargetTable::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
