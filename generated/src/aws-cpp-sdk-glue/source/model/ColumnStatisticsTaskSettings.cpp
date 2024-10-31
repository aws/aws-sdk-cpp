/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ColumnStatisticsTaskSettings.h>
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

ColumnStatisticsTaskSettings::ColumnStatisticsTaskSettings() : 
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_columnNameListHasBeenSet(false),
    m_catalogIDHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_sampleSize(0.0),
    m_sampleSizeHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false)
{
}

ColumnStatisticsTaskSettings::ColumnStatisticsTaskSettings(JsonView jsonValue)
  : ColumnStatisticsTaskSettings()
{
  *this = jsonValue;
}

ColumnStatisticsTaskSettings& ColumnStatisticsTaskSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetObject("Schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnNameList"))
  {
    Aws::Utils::Array<JsonView> columnNameListJsonList = jsonValue.GetArray("ColumnNameList");
    for(unsigned columnNameListIndex = 0; columnNameListIndex < columnNameListJsonList.GetLength(); ++columnNameListIndex)
    {
      m_columnNameList.push_back(columnNameListJsonList[columnNameListIndex].AsString());
    }
    m_columnNameListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogID"))
  {
    m_catalogID = jsonValue.GetString("CatalogID");

    m_catalogIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SampleSize"))
  {
    m_sampleSize = jsonValue.GetDouble("SampleSize");

    m_sampleSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityConfiguration"))
  {
    m_securityConfiguration = jsonValue.GetString("SecurityConfiguration");

    m_securityConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnStatisticsTaskSettings::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("Schedule", m_schedule.Jsonize());

  }

  if(m_columnNameListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnNameListJsonList(m_columnNameList.size());
   for(unsigned columnNameListIndex = 0; columnNameListIndex < columnNameListJsonList.GetLength(); ++columnNameListIndex)
   {
     columnNameListJsonList[columnNameListIndex].AsString(m_columnNameList[columnNameListIndex]);
   }
   payload.WithArray("ColumnNameList", std::move(columnNameListJsonList));

  }

  if(m_catalogIDHasBeenSet)
  {
   payload.WithString("CatalogID", m_catalogID);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_sampleSizeHasBeenSet)
  {
   payload.WithDouble("SampleSize", m_sampleSize);

  }

  if(m_securityConfigurationHasBeenSet)
  {
   payload.WithString("SecurityConfiguration", m_securityConfiguration);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
