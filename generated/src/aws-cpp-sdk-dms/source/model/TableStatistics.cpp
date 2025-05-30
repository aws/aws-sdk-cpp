﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

TableStatistics::TableStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

TableStatistics& TableStatistics::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("AppliedInserts"))
  {
    m_appliedInserts = jsonValue.GetInt64("AppliedInserts");
    m_appliedInsertsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppliedDeletes"))
  {
    m_appliedDeletes = jsonValue.GetInt64("AppliedDeletes");
    m_appliedDeletesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppliedUpdates"))
  {
    m_appliedUpdates = jsonValue.GetInt64("AppliedUpdates");
    m_appliedUpdatesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppliedDdls"))
  {
    m_appliedDdls = jsonValue.GetInt64("AppliedDdls");
    m_appliedDdlsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FullLoadRows"))
  {
    m_fullLoadRows = jsonValue.GetInt64("FullLoadRows");
    m_fullLoadRowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FullLoadCondtnlChkFailedRows"))
  {
    m_fullLoadCondtnlChkFailedRows = jsonValue.GetInt64("FullLoadCondtnlChkFailedRows");
    m_fullLoadCondtnlChkFailedRowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FullLoadErrorRows"))
  {
    m_fullLoadErrorRows = jsonValue.GetInt64("FullLoadErrorRows");
    m_fullLoadErrorRowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FullLoadStartTime"))
  {
    m_fullLoadStartTime = jsonValue.GetDouble("FullLoadStartTime");
    m_fullLoadStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FullLoadEndTime"))
  {
    m_fullLoadEndTime = jsonValue.GetDouble("FullLoadEndTime");
    m_fullLoadEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FullLoadReloaded"))
  {
    m_fullLoadReloaded = jsonValue.GetBool("FullLoadReloaded");
    m_fullLoadReloadedHasBeenSet = true;
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
  if(jsonValue.ValueExists("ValidationPendingRecords"))
  {
    m_validationPendingRecords = jsonValue.GetInt64("ValidationPendingRecords");
    m_validationPendingRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidationFailedRecords"))
  {
    m_validationFailedRecords = jsonValue.GetInt64("ValidationFailedRecords");
    m_validationFailedRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidationSuspendedRecords"))
  {
    m_validationSuspendedRecords = jsonValue.GetInt64("ValidationSuspendedRecords");
    m_validationSuspendedRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidationState"))
  {
    m_validationState = jsonValue.GetString("ValidationState");
    m_validationStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidationStateDetails"))
  {
    m_validationStateDetails = jsonValue.GetString("ValidationStateDetails");
    m_validationStateDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResyncState"))
  {
    m_resyncState = jsonValue.GetString("ResyncState");
    m_resyncStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResyncRowsAttempted"))
  {
    m_resyncRowsAttempted = jsonValue.GetInt64("ResyncRowsAttempted");
    m_resyncRowsAttemptedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResyncRowsSucceeded"))
  {
    m_resyncRowsSucceeded = jsonValue.GetInt64("ResyncRowsSucceeded");
    m_resyncRowsSucceededHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResyncRowsFailed"))
  {
    m_resyncRowsFailed = jsonValue.GetInt64("ResyncRowsFailed");
    m_resyncRowsFailedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResyncProgress"))
  {
    m_resyncProgress = jsonValue.GetDouble("ResyncProgress");
    m_resyncProgressHasBeenSet = true;
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

  if(m_appliedInsertsHasBeenSet)
  {
   payload.WithInt64("AppliedInserts", m_appliedInserts);

  }

  if(m_appliedDeletesHasBeenSet)
  {
   payload.WithInt64("AppliedDeletes", m_appliedDeletes);

  }

  if(m_appliedUpdatesHasBeenSet)
  {
   payload.WithInt64("AppliedUpdates", m_appliedUpdates);

  }

  if(m_appliedDdlsHasBeenSet)
  {
   payload.WithInt64("AppliedDdls", m_appliedDdls);

  }

  if(m_fullLoadRowsHasBeenSet)
  {
   payload.WithInt64("FullLoadRows", m_fullLoadRows);

  }

  if(m_fullLoadCondtnlChkFailedRowsHasBeenSet)
  {
   payload.WithInt64("FullLoadCondtnlChkFailedRows", m_fullLoadCondtnlChkFailedRows);

  }

  if(m_fullLoadErrorRowsHasBeenSet)
  {
   payload.WithInt64("FullLoadErrorRows", m_fullLoadErrorRows);

  }

  if(m_fullLoadStartTimeHasBeenSet)
  {
   payload.WithDouble("FullLoadStartTime", m_fullLoadStartTime.SecondsWithMSPrecision());
  }

  if(m_fullLoadEndTimeHasBeenSet)
  {
   payload.WithDouble("FullLoadEndTime", m_fullLoadEndTime.SecondsWithMSPrecision());
  }

  if(m_fullLoadReloadedHasBeenSet)
  {
   payload.WithBool("FullLoadReloaded", m_fullLoadReloaded);

  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_tableStateHasBeenSet)
  {
   payload.WithString("TableState", m_tableState);

  }

  if(m_validationPendingRecordsHasBeenSet)
  {
   payload.WithInt64("ValidationPendingRecords", m_validationPendingRecords);

  }

  if(m_validationFailedRecordsHasBeenSet)
  {
   payload.WithInt64("ValidationFailedRecords", m_validationFailedRecords);

  }

  if(m_validationSuspendedRecordsHasBeenSet)
  {
   payload.WithInt64("ValidationSuspendedRecords", m_validationSuspendedRecords);

  }

  if(m_validationStateHasBeenSet)
  {
   payload.WithString("ValidationState", m_validationState);

  }

  if(m_validationStateDetailsHasBeenSet)
  {
   payload.WithString("ValidationStateDetails", m_validationStateDetails);

  }

  if(m_resyncStateHasBeenSet)
  {
   payload.WithString("ResyncState", m_resyncState);

  }

  if(m_resyncRowsAttemptedHasBeenSet)
  {
   payload.WithInt64("ResyncRowsAttempted", m_resyncRowsAttempted);

  }

  if(m_resyncRowsSucceededHasBeenSet)
  {
   payload.WithInt64("ResyncRowsSucceeded", m_resyncRowsSucceeded);

  }

  if(m_resyncRowsFailedHasBeenSet)
  {
   payload.WithInt64("ResyncRowsFailed", m_resyncRowsFailed);

  }

  if(m_resyncProgressHasBeenSet)
  {
   payload.WithDouble("ResyncProgress", m_resyncProgress);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
