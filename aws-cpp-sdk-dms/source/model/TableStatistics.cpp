/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/dms/model/TableStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

TableStatistics::TableStatistics() : 
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_inserts(0),
    m_insertsHasBeenSet(false),
    m_deletes(0),
    m_deletesHasBeenSet(false),
    m_updates(0),
    m_updatesHasBeenSet(false),
    m_ddls(0),
    m_ddlsHasBeenSet(false),
    m_fullLoadRows(0),
    m_fullLoadRowsHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_tableStateHasBeenSet(false)
{
}

TableStatistics::TableStatistics(const JsonValue& jsonValue) : 
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_inserts(0),
    m_insertsHasBeenSet(false),
    m_deletes(0),
    m_deletesHasBeenSet(false),
    m_updates(0),
    m_updatesHasBeenSet(false),
    m_ddls(0),
    m_ddlsHasBeenSet(false),
    m_fullLoadRows(0),
    m_fullLoadRowsHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_tableStateHasBeenSet(false)
{
  *this = jsonValue;
}

TableStatistics& TableStatistics::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SchemaName"))
  {
    m_schemaName = jsonValue.GetString("SchemaName");

    m_schemaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Inserts"))
  {
    m_inserts = jsonValue.GetInt64("Inserts");

    m_insertsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Deletes"))
  {
    m_deletes = jsonValue.GetInt64("Deletes");

    m_deletesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Updates"))
  {
    m_updates = jsonValue.GetInt64("Updates");

    m_updatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ddls"))
  {
    m_ddls = jsonValue.GetInt64("Ddls");

    m_ddlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FullLoadRows"))
  {
    m_fullLoadRows = jsonValue.GetInt64("FullLoadRows");

    m_fullLoadRowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableState"))
  {
    m_tableState = jsonValue.GetString("TableState");

    m_tableStateHasBeenSet = true;
  }

  return *this;
}

JsonValue TableStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("SchemaName", m_schemaName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_insertsHasBeenSet)
  {
   payload.WithInt64("Inserts", m_inserts);

  }

  if(m_deletesHasBeenSet)
  {
   payload.WithInt64("Deletes", m_deletes);

  }

  if(m_updatesHasBeenSet)
  {
   payload.WithInt64("Updates", m_updates);

  }

  if(m_ddlsHasBeenSet)
  {
   payload.WithInt64("Ddls", m_ddls);

  }

  if(m_fullLoadRowsHasBeenSet)
  {
   payload.WithInt64("FullLoadRows", m_fullLoadRows);

  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_tableStateHasBeenSet)
  {
   payload.WithString("TableState", m_tableState);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws