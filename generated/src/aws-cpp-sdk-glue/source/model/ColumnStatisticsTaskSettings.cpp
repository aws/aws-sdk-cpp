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

ColumnStatisticsTaskSettings::ColumnStatisticsTaskSettings(JsonView jsonValue)
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
  if(jsonValue.ValueExists("ScheduleType"))
  {
    m_scheduleType = ScheduleTypeMapper::GetScheduleTypeForName(jsonValue.GetString("ScheduleType"));
    m_scheduleTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SettingSource"))
  {
    m_settingSource = SettingSourceMapper::GetSettingSourceForName(jsonValue.GetString("SettingSource"));
    m_settingSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastExecutionAttempt"))
  {
    m_lastExecutionAttempt = jsonValue.GetObject("LastExecutionAttempt");
    m_lastExecutionAttemptHasBeenSet = true;
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

  if(m_scheduleTypeHasBeenSet)
  {
   payload.WithString("ScheduleType", ScheduleTypeMapper::GetNameForScheduleType(m_scheduleType));
  }

  if(m_settingSourceHasBeenSet)
  {
   payload.WithString("SettingSource", SettingSourceMapper::GetNameForSettingSource(m_settingSource));
  }

  if(m_lastExecutionAttemptHasBeenSet)
  {
   payload.WithObject("LastExecutionAttempt", m_lastExecutionAttempt.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
