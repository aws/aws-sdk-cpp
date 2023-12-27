/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ColumnStatisticsTaskRun.h>
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

ColumnStatisticsTaskRun::ColumnStatisticsTaskRun() : 
    m_customerIdHasBeenSet(false),
    m_columnStatisticsTaskRunIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_columnNameListHasBeenSet(false),
    m_catalogIDHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_sampleSize(0.0),
    m_sampleSizeHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false),
    m_numberOfWorkers(0),
    m_numberOfWorkersHasBeenSet(false),
    m_workerTypeHasBeenSet(false),
    m_status(ColumnStatisticsState::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_dPUSeconds(0.0),
    m_dPUSecondsHasBeenSet(false)
{
}

ColumnStatisticsTaskRun::ColumnStatisticsTaskRun(JsonView jsonValue) : 
    m_customerIdHasBeenSet(false),
    m_columnStatisticsTaskRunIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_columnNameListHasBeenSet(false),
    m_catalogIDHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_sampleSize(0.0),
    m_sampleSizeHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false),
    m_numberOfWorkers(0),
    m_numberOfWorkersHasBeenSet(false),
    m_workerTypeHasBeenSet(false),
    m_status(ColumnStatisticsState::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_dPUSeconds(0.0),
    m_dPUSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnStatisticsTaskRun& ColumnStatisticsTaskRun::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomerId"))
  {
    m_customerId = jsonValue.GetString("CustomerId");

    m_customerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnStatisticsTaskRunId"))
  {
    m_columnStatisticsTaskRunId = jsonValue.GetString("ColumnStatisticsTaskRunId");

    m_columnStatisticsTaskRunIdHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("NumberOfWorkers"))
  {
    m_numberOfWorkers = jsonValue.GetInteger("NumberOfWorkers");

    m_numberOfWorkersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkerType"))
  {
    m_workerType = jsonValue.GetString("WorkerType");

    m_workerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ColumnStatisticsStateMapper::GetColumnStatisticsStateForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DPUSeconds"))
  {
    m_dPUSeconds = jsonValue.GetDouble("DPUSeconds");

    m_dPUSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnStatisticsTaskRun::Jsonize() const
{
  JsonValue payload;

  if(m_customerIdHasBeenSet)
  {
   payload.WithString("CustomerId", m_customerId);

  }

  if(m_columnStatisticsTaskRunIdHasBeenSet)
  {
   payload.WithString("ColumnStatisticsTaskRunId", m_columnStatisticsTaskRunId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

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

  if(m_numberOfWorkersHasBeenSet)
  {
   payload.WithInteger("NumberOfWorkers", m_numberOfWorkers);

  }

  if(m_workerTypeHasBeenSet)
  {
   payload.WithString("WorkerType", m_workerType);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ColumnStatisticsStateMapper::GetNameForColumnStatisticsState(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_dPUSecondsHasBeenSet)
  {
   payload.WithDouble("DPUSeconds", m_dPUSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
