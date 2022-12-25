/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides a collection of table statistics in response to a request by the
   * <code>DescribeTableStatistics</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/TableStatistics">AWS
   * API Reference</a></p>
   */
  class TableStatistics
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API TableStatistics();
    AWS_DATABASEMIGRATIONSERVICE_API TableStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API TableStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The schema name.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The schema name.</p>
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * <p>The schema name.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The schema name.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>The schema name.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>The schema name.</p>
     */
    inline TableStatistics& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The schema name.</p>
     */
    inline TableStatistics& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The schema name.</p>
     */
    inline TableStatistics& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline TableStatistics& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline TableStatistics& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline TableStatistics& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The number of insert actions performed on a table.</p>
     */
    inline long long GetInserts() const{ return m_inserts; }

    /**
     * <p>The number of insert actions performed on a table.</p>
     */
    inline bool InsertsHasBeenSet() const { return m_insertsHasBeenSet; }

    /**
     * <p>The number of insert actions performed on a table.</p>
     */
    inline void SetInserts(long long value) { m_insertsHasBeenSet = true; m_inserts = value; }

    /**
     * <p>The number of insert actions performed on a table.</p>
     */
    inline TableStatistics& WithInserts(long long value) { SetInserts(value); return *this;}


    /**
     * <p>The number of delete actions performed on a table.</p>
     */
    inline long long GetDeletes() const{ return m_deletes; }

    /**
     * <p>The number of delete actions performed on a table.</p>
     */
    inline bool DeletesHasBeenSet() const { return m_deletesHasBeenSet; }

    /**
     * <p>The number of delete actions performed on a table.</p>
     */
    inline void SetDeletes(long long value) { m_deletesHasBeenSet = true; m_deletes = value; }

    /**
     * <p>The number of delete actions performed on a table.</p>
     */
    inline TableStatistics& WithDeletes(long long value) { SetDeletes(value); return *this;}


    /**
     * <p>The number of update actions performed on a table.</p>
     */
    inline long long GetUpdates() const{ return m_updates; }

    /**
     * <p>The number of update actions performed on a table.</p>
     */
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }

    /**
     * <p>The number of update actions performed on a table.</p>
     */
    inline void SetUpdates(long long value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>The number of update actions performed on a table.</p>
     */
    inline TableStatistics& WithUpdates(long long value) { SetUpdates(value); return *this;}


    /**
     * <p>The data definition language (DDL) used to build and modify the structure of
     * your tables.</p>
     */
    inline long long GetDdls() const{ return m_ddls; }

    /**
     * <p>The data definition language (DDL) used to build and modify the structure of
     * your tables.</p>
     */
    inline bool DdlsHasBeenSet() const { return m_ddlsHasBeenSet; }

    /**
     * <p>The data definition language (DDL) used to build and modify the structure of
     * your tables.</p>
     */
    inline void SetDdls(long long value) { m_ddlsHasBeenSet = true; m_ddls = value; }

    /**
     * <p>The data definition language (DDL) used to build and modify the structure of
     * your tables.</p>
     */
    inline TableStatistics& WithDdls(long long value) { SetDdls(value); return *this;}


    /**
     * <p>The number of insert actions applied on a target table.</p>
     */
    inline long long GetAppliedInserts() const{ return m_appliedInserts; }

    /**
     * <p>The number of insert actions applied on a target table.</p>
     */
    inline bool AppliedInsertsHasBeenSet() const { return m_appliedInsertsHasBeenSet; }

    /**
     * <p>The number of insert actions applied on a target table.</p>
     */
    inline void SetAppliedInserts(long long value) { m_appliedInsertsHasBeenSet = true; m_appliedInserts = value; }

    /**
     * <p>The number of insert actions applied on a target table.</p>
     */
    inline TableStatistics& WithAppliedInserts(long long value) { SetAppliedInserts(value); return *this;}


    /**
     * <p>The number of delete actions applied on a target table.</p>
     */
    inline long long GetAppliedDeletes() const{ return m_appliedDeletes; }

    /**
     * <p>The number of delete actions applied on a target table.</p>
     */
    inline bool AppliedDeletesHasBeenSet() const { return m_appliedDeletesHasBeenSet; }

    /**
     * <p>The number of delete actions applied on a target table.</p>
     */
    inline void SetAppliedDeletes(long long value) { m_appliedDeletesHasBeenSet = true; m_appliedDeletes = value; }

    /**
     * <p>The number of delete actions applied on a target table.</p>
     */
    inline TableStatistics& WithAppliedDeletes(long long value) { SetAppliedDeletes(value); return *this;}


    /**
     * <p>The number of update actions applied on a target table.</p>
     */
    inline long long GetAppliedUpdates() const{ return m_appliedUpdates; }

    /**
     * <p>The number of update actions applied on a target table.</p>
     */
    inline bool AppliedUpdatesHasBeenSet() const { return m_appliedUpdatesHasBeenSet; }

    /**
     * <p>The number of update actions applied on a target table.</p>
     */
    inline void SetAppliedUpdates(long long value) { m_appliedUpdatesHasBeenSet = true; m_appliedUpdates = value; }

    /**
     * <p>The number of update actions applied on a target table.</p>
     */
    inline TableStatistics& WithAppliedUpdates(long long value) { SetAppliedUpdates(value); return *this;}


    /**
     * <p>The number of data definition language (DDL) statements used to build and
     * modify the structure of your tables applied on the target.</p>
     */
    inline long long GetAppliedDdls() const{ return m_appliedDdls; }

    /**
     * <p>The number of data definition language (DDL) statements used to build and
     * modify the structure of your tables applied on the target.</p>
     */
    inline bool AppliedDdlsHasBeenSet() const { return m_appliedDdlsHasBeenSet; }

    /**
     * <p>The number of data definition language (DDL) statements used to build and
     * modify the structure of your tables applied on the target.</p>
     */
    inline void SetAppliedDdls(long long value) { m_appliedDdlsHasBeenSet = true; m_appliedDdls = value; }

    /**
     * <p>The number of data definition language (DDL) statements used to build and
     * modify the structure of your tables applied on the target.</p>
     */
    inline TableStatistics& WithAppliedDdls(long long value) { SetAppliedDdls(value); return *this;}


    /**
     * <p>The number of rows added during the full load operation.</p>
     */
    inline long long GetFullLoadRows() const{ return m_fullLoadRows; }

    /**
     * <p>The number of rows added during the full load operation.</p>
     */
    inline bool FullLoadRowsHasBeenSet() const { return m_fullLoadRowsHasBeenSet; }

    /**
     * <p>The number of rows added during the full load operation.</p>
     */
    inline void SetFullLoadRows(long long value) { m_fullLoadRowsHasBeenSet = true; m_fullLoadRows = value; }

    /**
     * <p>The number of rows added during the full load operation.</p>
     */
    inline TableStatistics& WithFullLoadRows(long long value) { SetFullLoadRows(value); return *this;}


    /**
     * <p>The number of rows that failed conditional checks during the full load
     * operation (valid only for migrations where DynamoDB is the target).</p>
     */
    inline long long GetFullLoadCondtnlChkFailedRows() const{ return m_fullLoadCondtnlChkFailedRows; }

    /**
     * <p>The number of rows that failed conditional checks during the full load
     * operation (valid only for migrations where DynamoDB is the target).</p>
     */
    inline bool FullLoadCondtnlChkFailedRowsHasBeenSet() const { return m_fullLoadCondtnlChkFailedRowsHasBeenSet; }

    /**
     * <p>The number of rows that failed conditional checks during the full load
     * operation (valid only for migrations where DynamoDB is the target).</p>
     */
    inline void SetFullLoadCondtnlChkFailedRows(long long value) { m_fullLoadCondtnlChkFailedRowsHasBeenSet = true; m_fullLoadCondtnlChkFailedRows = value; }

    /**
     * <p>The number of rows that failed conditional checks during the full load
     * operation (valid only for migrations where DynamoDB is the target).</p>
     */
    inline TableStatistics& WithFullLoadCondtnlChkFailedRows(long long value) { SetFullLoadCondtnlChkFailedRows(value); return *this;}


    /**
     * <p>The number of rows that failed to load during the full load operation (valid
     * only for migrations where DynamoDB is the target).</p>
     */
    inline long long GetFullLoadErrorRows() const{ return m_fullLoadErrorRows; }

    /**
     * <p>The number of rows that failed to load during the full load operation (valid
     * only for migrations where DynamoDB is the target).</p>
     */
    inline bool FullLoadErrorRowsHasBeenSet() const { return m_fullLoadErrorRowsHasBeenSet; }

    /**
     * <p>The number of rows that failed to load during the full load operation (valid
     * only for migrations where DynamoDB is the target).</p>
     */
    inline void SetFullLoadErrorRows(long long value) { m_fullLoadErrorRowsHasBeenSet = true; m_fullLoadErrorRows = value; }

    /**
     * <p>The number of rows that failed to load during the full load operation (valid
     * only for migrations where DynamoDB is the target).</p>
     */
    inline TableStatistics& WithFullLoadErrorRows(long long value) { SetFullLoadErrorRows(value); return *this;}


    /**
     * <p>The time when the full load operation started.</p>
     */
    inline const Aws::Utils::DateTime& GetFullLoadStartTime() const{ return m_fullLoadStartTime; }

    /**
     * <p>The time when the full load operation started.</p>
     */
    inline bool FullLoadStartTimeHasBeenSet() const { return m_fullLoadStartTimeHasBeenSet; }

    /**
     * <p>The time when the full load operation started.</p>
     */
    inline void SetFullLoadStartTime(const Aws::Utils::DateTime& value) { m_fullLoadStartTimeHasBeenSet = true; m_fullLoadStartTime = value; }

    /**
     * <p>The time when the full load operation started.</p>
     */
    inline void SetFullLoadStartTime(Aws::Utils::DateTime&& value) { m_fullLoadStartTimeHasBeenSet = true; m_fullLoadStartTime = std::move(value); }

    /**
     * <p>The time when the full load operation started.</p>
     */
    inline TableStatistics& WithFullLoadStartTime(const Aws::Utils::DateTime& value) { SetFullLoadStartTime(value); return *this;}

    /**
     * <p>The time when the full load operation started.</p>
     */
    inline TableStatistics& WithFullLoadStartTime(Aws::Utils::DateTime&& value) { SetFullLoadStartTime(std::move(value)); return *this;}


    /**
     * <p>The time when the full load operation completed.</p>
     */
    inline const Aws::Utils::DateTime& GetFullLoadEndTime() const{ return m_fullLoadEndTime; }

    /**
     * <p>The time when the full load operation completed.</p>
     */
    inline bool FullLoadEndTimeHasBeenSet() const { return m_fullLoadEndTimeHasBeenSet; }

    /**
     * <p>The time when the full load operation completed.</p>
     */
    inline void SetFullLoadEndTime(const Aws::Utils::DateTime& value) { m_fullLoadEndTimeHasBeenSet = true; m_fullLoadEndTime = value; }

    /**
     * <p>The time when the full load operation completed.</p>
     */
    inline void SetFullLoadEndTime(Aws::Utils::DateTime&& value) { m_fullLoadEndTimeHasBeenSet = true; m_fullLoadEndTime = std::move(value); }

    /**
     * <p>The time when the full load operation completed.</p>
     */
    inline TableStatistics& WithFullLoadEndTime(const Aws::Utils::DateTime& value) { SetFullLoadEndTime(value); return *this;}

    /**
     * <p>The time when the full load operation completed.</p>
     */
    inline TableStatistics& WithFullLoadEndTime(Aws::Utils::DateTime&& value) { SetFullLoadEndTime(std::move(value)); return *this;}


    /**
     * <p>A value that indicates if the table was reloaded (<code>true</code>) or
     * loaded as part of a new full load operation (<code>false</code>).</p>
     */
    inline bool GetFullLoadReloaded() const{ return m_fullLoadReloaded; }

    /**
     * <p>A value that indicates if the table was reloaded (<code>true</code>) or
     * loaded as part of a new full load operation (<code>false</code>).</p>
     */
    inline bool FullLoadReloadedHasBeenSet() const { return m_fullLoadReloadedHasBeenSet; }

    /**
     * <p>A value that indicates if the table was reloaded (<code>true</code>) or
     * loaded as part of a new full load operation (<code>false</code>).</p>
     */
    inline void SetFullLoadReloaded(bool value) { m_fullLoadReloadedHasBeenSet = true; m_fullLoadReloaded = value; }

    /**
     * <p>A value that indicates if the table was reloaded (<code>true</code>) or
     * loaded as part of a new full load operation (<code>false</code>).</p>
     */
    inline TableStatistics& WithFullLoadReloaded(bool value) { SetFullLoadReloaded(value); return *this;}


    /**
     * <p>The last time a table was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The last time a table was updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The last time a table was updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The last time a table was updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The last time a table was updated.</p>
     */
    inline TableStatistics& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last time a table was updated.</p>
     */
    inline TableStatistics& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The state of the tables described.</p> <p>Valid states: Table does not exist
     * | Before load | Full load | Table completed | Table cancelled | Table error |
     * Table is being reloaded</p>
     */
    inline const Aws::String& GetTableState() const{ return m_tableState; }

    /**
     * <p>The state of the tables described.</p> <p>Valid states: Table does not exist
     * | Before load | Full load | Table completed | Table cancelled | Table error |
     * Table is being reloaded</p>
     */
    inline bool TableStateHasBeenSet() const { return m_tableStateHasBeenSet; }

    /**
     * <p>The state of the tables described.</p> <p>Valid states: Table does not exist
     * | Before load | Full load | Table completed | Table cancelled | Table error |
     * Table is being reloaded</p>
     */
    inline void SetTableState(const Aws::String& value) { m_tableStateHasBeenSet = true; m_tableState = value; }

    /**
     * <p>The state of the tables described.</p> <p>Valid states: Table does not exist
     * | Before load | Full load | Table completed | Table cancelled | Table error |
     * Table is being reloaded</p>
     */
    inline void SetTableState(Aws::String&& value) { m_tableStateHasBeenSet = true; m_tableState = std::move(value); }

    /**
     * <p>The state of the tables described.</p> <p>Valid states: Table does not exist
     * | Before load | Full load | Table completed | Table cancelled | Table error |
     * Table is being reloaded</p>
     */
    inline void SetTableState(const char* value) { m_tableStateHasBeenSet = true; m_tableState.assign(value); }

    /**
     * <p>The state of the tables described.</p> <p>Valid states: Table does not exist
     * | Before load | Full load | Table completed | Table cancelled | Table error |
     * Table is being reloaded</p>
     */
    inline TableStatistics& WithTableState(const Aws::String& value) { SetTableState(value); return *this;}

    /**
     * <p>The state of the tables described.</p> <p>Valid states: Table does not exist
     * | Before load | Full load | Table completed | Table cancelled | Table error |
     * Table is being reloaded</p>
     */
    inline TableStatistics& WithTableState(Aws::String&& value) { SetTableState(std::move(value)); return *this;}

    /**
     * <p>The state of the tables described.</p> <p>Valid states: Table does not exist
     * | Before load | Full load | Table completed | Table cancelled | Table error |
     * Table is being reloaded</p>
     */
    inline TableStatistics& WithTableState(const char* value) { SetTableState(value); return *this;}


    /**
     * <p>The number of records that have yet to be validated.</p>
     */
    inline long long GetValidationPendingRecords() const{ return m_validationPendingRecords; }

    /**
     * <p>The number of records that have yet to be validated.</p>
     */
    inline bool ValidationPendingRecordsHasBeenSet() const { return m_validationPendingRecordsHasBeenSet; }

    /**
     * <p>The number of records that have yet to be validated.</p>
     */
    inline void SetValidationPendingRecords(long long value) { m_validationPendingRecordsHasBeenSet = true; m_validationPendingRecords = value; }

    /**
     * <p>The number of records that have yet to be validated.</p>
     */
    inline TableStatistics& WithValidationPendingRecords(long long value) { SetValidationPendingRecords(value); return *this;}


    /**
     * <p>The number of records that failed validation.</p>
     */
    inline long long GetValidationFailedRecords() const{ return m_validationFailedRecords; }

    /**
     * <p>The number of records that failed validation.</p>
     */
    inline bool ValidationFailedRecordsHasBeenSet() const { return m_validationFailedRecordsHasBeenSet; }

    /**
     * <p>The number of records that failed validation.</p>
     */
    inline void SetValidationFailedRecords(long long value) { m_validationFailedRecordsHasBeenSet = true; m_validationFailedRecords = value; }

    /**
     * <p>The number of records that failed validation.</p>
     */
    inline TableStatistics& WithValidationFailedRecords(long long value) { SetValidationFailedRecords(value); return *this;}


    /**
     * <p>The number of records that couldn't be validated.</p>
     */
    inline long long GetValidationSuspendedRecords() const{ return m_validationSuspendedRecords; }

    /**
     * <p>The number of records that couldn't be validated.</p>
     */
    inline bool ValidationSuspendedRecordsHasBeenSet() const { return m_validationSuspendedRecordsHasBeenSet; }

    /**
     * <p>The number of records that couldn't be validated.</p>
     */
    inline void SetValidationSuspendedRecords(long long value) { m_validationSuspendedRecordsHasBeenSet = true; m_validationSuspendedRecords = value; }

    /**
     * <p>The number of records that couldn't be validated.</p>
     */
    inline TableStatistics& WithValidationSuspendedRecords(long long value) { SetValidationSuspendedRecords(value); return *this;}


    /**
     * <p>The validation state of the table.</p> <p>This parameter can have the
     * following values:</p> <ul> <li> <p>Not enabled – Validation isn't enabled for
     * the table in the migration task.</p> </li> <li> <p>Pending records – Some
     * records in the table are waiting for validation.</p> </li> <li> <p>Mismatched
     * records – Some records in the table don't match between the source and
     * target.</p> </li> <li> <p>Suspended records – Some records in the table couldn't
     * be validated.</p> </li> <li> <p>No primary key –The table couldn't be validated
     * because it has no primary key.</p> </li> <li> <p>Table error – The table wasn't
     * validated because it's in an error state and some data wasn't migrated.</p>
     * </li> <li> <p>Validated – All rows in the table are validated. If the table is
     * updated, the status can change from Validated.</p> </li> <li> <p>Error – The
     * table couldn't be validated because of an unexpected error.</p> </li> <li>
     * <p>Pending validation – The table is waiting validation.</p> </li> <li>
     * <p>Preparing table – Preparing the table enabled in the migration task for
     * validation.</p> </li> <li> <p>Pending revalidation – All rows in the table are
     * pending validation after the table was updated.</p> </li> </ul>
     */
    inline const Aws::String& GetValidationState() const{ return m_validationState; }

    /**
     * <p>The validation state of the table.</p> <p>This parameter can have the
     * following values:</p> <ul> <li> <p>Not enabled – Validation isn't enabled for
     * the table in the migration task.</p> </li> <li> <p>Pending records – Some
     * records in the table are waiting for validation.</p> </li> <li> <p>Mismatched
     * records – Some records in the table don't match between the source and
     * target.</p> </li> <li> <p>Suspended records – Some records in the table couldn't
     * be validated.</p> </li> <li> <p>No primary key –The table couldn't be validated
     * because it has no primary key.</p> </li> <li> <p>Table error – The table wasn't
     * validated because it's in an error state and some data wasn't migrated.</p>
     * </li> <li> <p>Validated – All rows in the table are validated. If the table is
     * updated, the status can change from Validated.</p> </li> <li> <p>Error – The
     * table couldn't be validated because of an unexpected error.</p> </li> <li>
     * <p>Pending validation – The table is waiting validation.</p> </li> <li>
     * <p>Preparing table – Preparing the table enabled in the migration task for
     * validation.</p> </li> <li> <p>Pending revalidation – All rows in the table are
     * pending validation after the table was updated.</p> </li> </ul>
     */
    inline bool ValidationStateHasBeenSet() const { return m_validationStateHasBeenSet; }

    /**
     * <p>The validation state of the table.</p> <p>This parameter can have the
     * following values:</p> <ul> <li> <p>Not enabled – Validation isn't enabled for
     * the table in the migration task.</p> </li> <li> <p>Pending records – Some
     * records in the table are waiting for validation.</p> </li> <li> <p>Mismatched
     * records – Some records in the table don't match between the source and
     * target.</p> </li> <li> <p>Suspended records – Some records in the table couldn't
     * be validated.</p> </li> <li> <p>No primary key –The table couldn't be validated
     * because it has no primary key.</p> </li> <li> <p>Table error – The table wasn't
     * validated because it's in an error state and some data wasn't migrated.</p>
     * </li> <li> <p>Validated – All rows in the table are validated. If the table is
     * updated, the status can change from Validated.</p> </li> <li> <p>Error – The
     * table couldn't be validated because of an unexpected error.</p> </li> <li>
     * <p>Pending validation – The table is waiting validation.</p> </li> <li>
     * <p>Preparing table – Preparing the table enabled in the migration task for
     * validation.</p> </li> <li> <p>Pending revalidation – All rows in the table are
     * pending validation after the table was updated.</p> </li> </ul>
     */
    inline void SetValidationState(const Aws::String& value) { m_validationStateHasBeenSet = true; m_validationState = value; }

    /**
     * <p>The validation state of the table.</p> <p>This parameter can have the
     * following values:</p> <ul> <li> <p>Not enabled – Validation isn't enabled for
     * the table in the migration task.</p> </li> <li> <p>Pending records – Some
     * records in the table are waiting for validation.</p> </li> <li> <p>Mismatched
     * records – Some records in the table don't match between the source and
     * target.</p> </li> <li> <p>Suspended records – Some records in the table couldn't
     * be validated.</p> </li> <li> <p>No primary key –The table couldn't be validated
     * because it has no primary key.</p> </li> <li> <p>Table error – The table wasn't
     * validated because it's in an error state and some data wasn't migrated.</p>
     * </li> <li> <p>Validated – All rows in the table are validated. If the table is
     * updated, the status can change from Validated.</p> </li> <li> <p>Error – The
     * table couldn't be validated because of an unexpected error.</p> </li> <li>
     * <p>Pending validation – The table is waiting validation.</p> </li> <li>
     * <p>Preparing table – Preparing the table enabled in the migration task for
     * validation.</p> </li> <li> <p>Pending revalidation – All rows in the table are
     * pending validation after the table was updated.</p> </li> </ul>
     */
    inline void SetValidationState(Aws::String&& value) { m_validationStateHasBeenSet = true; m_validationState = std::move(value); }

    /**
     * <p>The validation state of the table.</p> <p>This parameter can have the
     * following values:</p> <ul> <li> <p>Not enabled – Validation isn't enabled for
     * the table in the migration task.</p> </li> <li> <p>Pending records – Some
     * records in the table are waiting for validation.</p> </li> <li> <p>Mismatched
     * records – Some records in the table don't match between the source and
     * target.</p> </li> <li> <p>Suspended records – Some records in the table couldn't
     * be validated.</p> </li> <li> <p>No primary key –The table couldn't be validated
     * because it has no primary key.</p> </li> <li> <p>Table error – The table wasn't
     * validated because it's in an error state and some data wasn't migrated.</p>
     * </li> <li> <p>Validated – All rows in the table are validated. If the table is
     * updated, the status can change from Validated.</p> </li> <li> <p>Error – The
     * table couldn't be validated because of an unexpected error.</p> </li> <li>
     * <p>Pending validation – The table is waiting validation.</p> </li> <li>
     * <p>Preparing table – Preparing the table enabled in the migration task for
     * validation.</p> </li> <li> <p>Pending revalidation – All rows in the table are
     * pending validation after the table was updated.</p> </li> </ul>
     */
    inline void SetValidationState(const char* value) { m_validationStateHasBeenSet = true; m_validationState.assign(value); }

    /**
     * <p>The validation state of the table.</p> <p>This parameter can have the
     * following values:</p> <ul> <li> <p>Not enabled – Validation isn't enabled for
     * the table in the migration task.</p> </li> <li> <p>Pending records – Some
     * records in the table are waiting for validation.</p> </li> <li> <p>Mismatched
     * records – Some records in the table don't match between the source and
     * target.</p> </li> <li> <p>Suspended records – Some records in the table couldn't
     * be validated.</p> </li> <li> <p>No primary key –The table couldn't be validated
     * because it has no primary key.</p> </li> <li> <p>Table error – The table wasn't
     * validated because it's in an error state and some data wasn't migrated.</p>
     * </li> <li> <p>Validated – All rows in the table are validated. If the table is
     * updated, the status can change from Validated.</p> </li> <li> <p>Error – The
     * table couldn't be validated because of an unexpected error.</p> </li> <li>
     * <p>Pending validation – The table is waiting validation.</p> </li> <li>
     * <p>Preparing table – Preparing the table enabled in the migration task for
     * validation.</p> </li> <li> <p>Pending revalidation – All rows in the table are
     * pending validation after the table was updated.</p> </li> </ul>
     */
    inline TableStatistics& WithValidationState(const Aws::String& value) { SetValidationState(value); return *this;}

    /**
     * <p>The validation state of the table.</p> <p>This parameter can have the
     * following values:</p> <ul> <li> <p>Not enabled – Validation isn't enabled for
     * the table in the migration task.</p> </li> <li> <p>Pending records – Some
     * records in the table are waiting for validation.</p> </li> <li> <p>Mismatched
     * records – Some records in the table don't match between the source and
     * target.</p> </li> <li> <p>Suspended records – Some records in the table couldn't
     * be validated.</p> </li> <li> <p>No primary key –The table couldn't be validated
     * because it has no primary key.</p> </li> <li> <p>Table error – The table wasn't
     * validated because it's in an error state and some data wasn't migrated.</p>
     * </li> <li> <p>Validated – All rows in the table are validated. If the table is
     * updated, the status can change from Validated.</p> </li> <li> <p>Error – The
     * table couldn't be validated because of an unexpected error.</p> </li> <li>
     * <p>Pending validation – The table is waiting validation.</p> </li> <li>
     * <p>Preparing table – Preparing the table enabled in the migration task for
     * validation.</p> </li> <li> <p>Pending revalidation – All rows in the table are
     * pending validation after the table was updated.</p> </li> </ul>
     */
    inline TableStatistics& WithValidationState(Aws::String&& value) { SetValidationState(std::move(value)); return *this;}

    /**
     * <p>The validation state of the table.</p> <p>This parameter can have the
     * following values:</p> <ul> <li> <p>Not enabled – Validation isn't enabled for
     * the table in the migration task.</p> </li> <li> <p>Pending records – Some
     * records in the table are waiting for validation.</p> </li> <li> <p>Mismatched
     * records – Some records in the table don't match between the source and
     * target.</p> </li> <li> <p>Suspended records – Some records in the table couldn't
     * be validated.</p> </li> <li> <p>No primary key –The table couldn't be validated
     * because it has no primary key.</p> </li> <li> <p>Table error – The table wasn't
     * validated because it's in an error state and some data wasn't migrated.</p>
     * </li> <li> <p>Validated – All rows in the table are validated. If the table is
     * updated, the status can change from Validated.</p> </li> <li> <p>Error – The
     * table couldn't be validated because of an unexpected error.</p> </li> <li>
     * <p>Pending validation – The table is waiting validation.</p> </li> <li>
     * <p>Preparing table – Preparing the table enabled in the migration task for
     * validation.</p> </li> <li> <p>Pending revalidation – All rows in the table are
     * pending validation after the table was updated.</p> </li> </ul>
     */
    inline TableStatistics& WithValidationState(const char* value) { SetValidationState(value); return *this;}


    /**
     * <p>Additional details about the state of validation.</p>
     */
    inline const Aws::String& GetValidationStateDetails() const{ return m_validationStateDetails; }

    /**
     * <p>Additional details about the state of validation.</p>
     */
    inline bool ValidationStateDetailsHasBeenSet() const { return m_validationStateDetailsHasBeenSet; }

    /**
     * <p>Additional details about the state of validation.</p>
     */
    inline void SetValidationStateDetails(const Aws::String& value) { m_validationStateDetailsHasBeenSet = true; m_validationStateDetails = value; }

    /**
     * <p>Additional details about the state of validation.</p>
     */
    inline void SetValidationStateDetails(Aws::String&& value) { m_validationStateDetailsHasBeenSet = true; m_validationStateDetails = std::move(value); }

    /**
     * <p>Additional details about the state of validation.</p>
     */
    inline void SetValidationStateDetails(const char* value) { m_validationStateDetailsHasBeenSet = true; m_validationStateDetails.assign(value); }

    /**
     * <p>Additional details about the state of validation.</p>
     */
    inline TableStatistics& WithValidationStateDetails(const Aws::String& value) { SetValidationStateDetails(value); return *this;}

    /**
     * <p>Additional details about the state of validation.</p>
     */
    inline TableStatistics& WithValidationStateDetails(Aws::String&& value) { SetValidationStateDetails(std::move(value)); return *this;}

    /**
     * <p>Additional details about the state of validation.</p>
     */
    inline TableStatistics& WithValidationStateDetails(const char* value) { SetValidationStateDetails(value); return *this;}

  private:

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    long long m_inserts;
    bool m_insertsHasBeenSet = false;

    long long m_deletes;
    bool m_deletesHasBeenSet = false;

    long long m_updates;
    bool m_updatesHasBeenSet = false;

    long long m_ddls;
    bool m_ddlsHasBeenSet = false;

    long long m_appliedInserts;
    bool m_appliedInsertsHasBeenSet = false;

    long long m_appliedDeletes;
    bool m_appliedDeletesHasBeenSet = false;

    long long m_appliedUpdates;
    bool m_appliedUpdatesHasBeenSet = false;

    long long m_appliedDdls;
    bool m_appliedDdlsHasBeenSet = false;

    long long m_fullLoadRows;
    bool m_fullLoadRowsHasBeenSet = false;

    long long m_fullLoadCondtnlChkFailedRows;
    bool m_fullLoadCondtnlChkFailedRowsHasBeenSet = false;

    long long m_fullLoadErrorRows;
    bool m_fullLoadErrorRowsHasBeenSet = false;

    Aws::Utils::DateTime m_fullLoadStartTime;
    bool m_fullLoadStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_fullLoadEndTime;
    bool m_fullLoadEndTimeHasBeenSet = false;

    bool m_fullLoadReloaded;
    bool m_fullLoadReloadedHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::String m_tableState;
    bool m_tableStateHasBeenSet = false;

    long long m_validationPendingRecords;
    bool m_validationPendingRecordsHasBeenSet = false;

    long long m_validationFailedRecords;
    bool m_validationFailedRecordsHasBeenSet = false;

    long long m_validationSuspendedRecords;
    bool m_validationSuspendedRecordsHasBeenSet = false;

    Aws::String m_validationState;
    bool m_validationStateHasBeenSet = false;

    Aws::String m_validationStateDetails;
    bool m_validationStateDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
