/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/MaterializedViewRefreshTaskRun.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

MaterializedViewRefreshTaskRun::MaterializedViewRefreshTaskRun(JsonView jsonValue) { *this = jsonValue; }

MaterializedViewRefreshTaskRun& MaterializedViewRefreshTaskRun::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CustomerId")) {
    m_customerId = jsonValue.GetString("CustomerId");
    m_customerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaterializedViewRefreshTaskRunId")) {
    m_materializedViewRefreshTaskRunId = jsonValue.GetString("MaterializedViewRefreshTaskRunId");
    m_materializedViewRefreshTaskRunIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DatabaseName")) {
    m_databaseName = jsonValue.GetString("DatabaseName");
    m_databaseNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TableName")) {
    m_tableName = jsonValue.GetString("TableName");
    m_tableNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CatalogId")) {
    m_catalogId = jsonValue.GetString("CatalogId");
    m_catalogIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Role")) {
    m_role = jsonValue.GetString("Role");
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = MaterializedViewRefreshStateMapper::GetMaterializedViewRefreshStateForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdated")) {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");
    m_lastUpdatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DPUSeconds")) {
    m_dPUSeconds = jsonValue.GetDouble("DPUSeconds");
    m_dPUSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RefreshType")) {
    m_refreshType = MaterializedViewRefreshTypeMapper::GetMaterializedViewRefreshTypeForName(jsonValue.GetString("RefreshType"));
    m_refreshTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProcessedBytes")) {
    m_processedBytes = jsonValue.GetInt64("ProcessedBytes");
    m_processedBytesHasBeenSet = true;
  }
  return *this;
}

JsonValue MaterializedViewRefreshTaskRun::Jsonize() const {
  JsonValue payload;

  if (m_customerIdHasBeenSet) {
    payload.WithString("CustomerId", m_customerId);
  }

  if (m_materializedViewRefreshTaskRunIdHasBeenSet) {
    payload.WithString("MaterializedViewRefreshTaskRunId", m_materializedViewRefreshTaskRunId);
  }

  if (m_databaseNameHasBeenSet) {
    payload.WithString("DatabaseName", m_databaseName);
  }

  if (m_tableNameHasBeenSet) {
    payload.WithString("TableName", m_tableName);
  }

  if (m_catalogIdHasBeenSet) {
    payload.WithString("CatalogId", m_catalogId);
  }

  if (m_roleHasBeenSet) {
    payload.WithString("Role", m_role);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", MaterializedViewRefreshStateMapper::GetNameForMaterializedViewRefreshState(m_status));
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedHasBeenSet) {
    payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("ErrorMessage", m_errorMessage);
  }

  if (m_dPUSecondsHasBeenSet) {
    payload.WithDouble("DPUSeconds", m_dPUSeconds);
  }

  if (m_refreshTypeHasBeenSet) {
    payload.WithString("RefreshType", MaterializedViewRefreshTypeMapper::GetNameForMaterializedViewRefreshType(m_refreshType));
  }

  if (m_processedBytesHasBeenSet) {
    payload.WithInt64("ProcessedBytes", m_processedBytes);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
