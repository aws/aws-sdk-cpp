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
    AWS_DATABASEMIGRATIONSERVICE_API TableStatistics() = default;
    AWS_DATABASEMIGRATIONSERVICE_API TableStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API TableStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema name.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    TableStatistics& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    TableStatistics& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of insert actions performed on a table.</p>
     */
    inline long long GetInserts() const { return m_inserts; }
    inline bool InsertsHasBeenSet() const { return m_insertsHasBeenSet; }
    inline void SetInserts(long long value) { m_insertsHasBeenSet = true; m_inserts = value; }
    inline TableStatistics& WithInserts(long long value) { SetInserts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of delete actions performed on a table.</p>
     */
    inline long long GetDeletes() const { return m_deletes; }
    inline bool DeletesHasBeenSet() const { return m_deletesHasBeenSet; }
    inline void SetDeletes(long long value) { m_deletesHasBeenSet = true; m_deletes = value; }
    inline TableStatistics& WithDeletes(long long value) { SetDeletes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of update actions performed on a table.</p>
     */
    inline long long GetUpdates() const { return m_updates; }
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }
    inline void SetUpdates(long long value) { m_updatesHasBeenSet = true; m_updates = value; }
    inline TableStatistics& WithUpdates(long long value) { SetUpdates(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data definition language (DDL) used to build and modify the structure of
     * your tables.</p>
     */
    inline long long GetDdls() const { return m_ddls; }
    inline bool DdlsHasBeenSet() const { return m_ddlsHasBeenSet; }
    inline void SetDdls(long long value) { m_ddlsHasBeenSet = true; m_ddls = value; }
    inline TableStatistics& WithDdls(long long value) { SetDdls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of insert actions applied on a target table.</p>
     */
    inline long long GetAppliedInserts() const { return m_appliedInserts; }
    inline bool AppliedInsertsHasBeenSet() const { return m_appliedInsertsHasBeenSet; }
    inline void SetAppliedInserts(long long value) { m_appliedInsertsHasBeenSet = true; m_appliedInserts = value; }
    inline TableStatistics& WithAppliedInserts(long long value) { SetAppliedInserts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of delete actions applied on a target table.</p>
     */
    inline long long GetAppliedDeletes() const { return m_appliedDeletes; }
    inline bool AppliedDeletesHasBeenSet() const { return m_appliedDeletesHasBeenSet; }
    inline void SetAppliedDeletes(long long value) { m_appliedDeletesHasBeenSet = true; m_appliedDeletes = value; }
    inline TableStatistics& WithAppliedDeletes(long long value) { SetAppliedDeletes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of update actions applied on a target table.</p>
     */
    inline long long GetAppliedUpdates() const { return m_appliedUpdates; }
    inline bool AppliedUpdatesHasBeenSet() const { return m_appliedUpdatesHasBeenSet; }
    inline void SetAppliedUpdates(long long value) { m_appliedUpdatesHasBeenSet = true; m_appliedUpdates = value; }
    inline TableStatistics& WithAppliedUpdates(long long value) { SetAppliedUpdates(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data definition language (DDL) statements used to build and
     * modify the structure of your tables applied on the target.</p>
     */
    inline long long GetAppliedDdls() const { return m_appliedDdls; }
    inline bool AppliedDdlsHasBeenSet() const { return m_appliedDdlsHasBeenSet; }
    inline void SetAppliedDdls(long long value) { m_appliedDdlsHasBeenSet = true; m_appliedDdls = value; }
    inline TableStatistics& WithAppliedDdls(long long value) { SetAppliedDdls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rows added during the full load operation.</p>
     */
    inline long long GetFullLoadRows() const { return m_fullLoadRows; }
    inline bool FullLoadRowsHasBeenSet() const { return m_fullLoadRowsHasBeenSet; }
    inline void SetFullLoadRows(long long value) { m_fullLoadRowsHasBeenSet = true; m_fullLoadRows = value; }
    inline TableStatistics& WithFullLoadRows(long long value) { SetFullLoadRows(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rows that failed conditional checks during the full load
     * operation (valid only for migrations where DynamoDB is the target).</p>
     */
    inline long long GetFullLoadCondtnlChkFailedRows() const { return m_fullLoadCondtnlChkFailedRows; }
    inline bool FullLoadCondtnlChkFailedRowsHasBeenSet() const { return m_fullLoadCondtnlChkFailedRowsHasBeenSet; }
    inline void SetFullLoadCondtnlChkFailedRows(long long value) { m_fullLoadCondtnlChkFailedRowsHasBeenSet = true; m_fullLoadCondtnlChkFailedRows = value; }
    inline TableStatistics& WithFullLoadCondtnlChkFailedRows(long long value) { SetFullLoadCondtnlChkFailedRows(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rows that failed to load during the full load operation (valid
     * only for migrations where DynamoDB is the target).</p>
     */
    inline long long GetFullLoadErrorRows() const { return m_fullLoadErrorRows; }
    inline bool FullLoadErrorRowsHasBeenSet() const { return m_fullLoadErrorRowsHasBeenSet; }
    inline void SetFullLoadErrorRows(long long value) { m_fullLoadErrorRowsHasBeenSet = true; m_fullLoadErrorRows = value; }
    inline TableStatistics& WithFullLoadErrorRows(long long value) { SetFullLoadErrorRows(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the full load operation started.</p>
     */
    inline const Aws::Utils::DateTime& GetFullLoadStartTime() const { return m_fullLoadStartTime; }
    inline bool FullLoadStartTimeHasBeenSet() const { return m_fullLoadStartTimeHasBeenSet; }
    template<typename FullLoadStartTimeT = Aws::Utils::DateTime>
    void SetFullLoadStartTime(FullLoadStartTimeT&& value) { m_fullLoadStartTimeHasBeenSet = true; m_fullLoadStartTime = std::forward<FullLoadStartTimeT>(value); }
    template<typename FullLoadStartTimeT = Aws::Utils::DateTime>
    TableStatistics& WithFullLoadStartTime(FullLoadStartTimeT&& value) { SetFullLoadStartTime(std::forward<FullLoadStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the full load operation completed.</p>
     */
    inline const Aws::Utils::DateTime& GetFullLoadEndTime() const { return m_fullLoadEndTime; }
    inline bool FullLoadEndTimeHasBeenSet() const { return m_fullLoadEndTimeHasBeenSet; }
    template<typename FullLoadEndTimeT = Aws::Utils::DateTime>
    void SetFullLoadEndTime(FullLoadEndTimeT&& value) { m_fullLoadEndTimeHasBeenSet = true; m_fullLoadEndTime = std::forward<FullLoadEndTimeT>(value); }
    template<typename FullLoadEndTimeT = Aws::Utils::DateTime>
    TableStatistics& WithFullLoadEndTime(FullLoadEndTimeT&& value) { SetFullLoadEndTime(std::forward<FullLoadEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates if the table was reloaded (<code>true</code>) or
     * loaded as part of a new full load operation (<code>false</code>).</p>
     */
    inline bool GetFullLoadReloaded() const { return m_fullLoadReloaded; }
    inline bool FullLoadReloadedHasBeenSet() const { return m_fullLoadReloadedHasBeenSet; }
    inline void SetFullLoadReloaded(bool value) { m_fullLoadReloadedHasBeenSet = true; m_fullLoadReloaded = value; }
    inline TableStatistics& WithFullLoadReloaded(bool value) { SetFullLoadReloaded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time a table was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    TableStatistics& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the tables described.</p> <p>Valid states: Table does not exist
     * | Before load | Full load | Table completed | Table cancelled | Table error |
     * Table is being reloaded</p>
     */
    inline const Aws::String& GetTableState() const { return m_tableState; }
    inline bool TableStateHasBeenSet() const { return m_tableStateHasBeenSet; }
    template<typename TableStateT = Aws::String>
    void SetTableState(TableStateT&& value) { m_tableStateHasBeenSet = true; m_tableState = std::forward<TableStateT>(value); }
    template<typename TableStateT = Aws::String>
    TableStatistics& WithTableState(TableStateT&& value) { SetTableState(std::forward<TableStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records that have yet to be validated.</p>
     */
    inline long long GetValidationPendingRecords() const { return m_validationPendingRecords; }
    inline bool ValidationPendingRecordsHasBeenSet() const { return m_validationPendingRecordsHasBeenSet; }
    inline void SetValidationPendingRecords(long long value) { m_validationPendingRecordsHasBeenSet = true; m_validationPendingRecords = value; }
    inline TableStatistics& WithValidationPendingRecords(long long value) { SetValidationPendingRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records that failed validation.</p>
     */
    inline long long GetValidationFailedRecords() const { return m_validationFailedRecords; }
    inline bool ValidationFailedRecordsHasBeenSet() const { return m_validationFailedRecordsHasBeenSet; }
    inline void SetValidationFailedRecords(long long value) { m_validationFailedRecordsHasBeenSet = true; m_validationFailedRecords = value; }
    inline TableStatistics& WithValidationFailedRecords(long long value) { SetValidationFailedRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records that couldn't be validated.</p>
     */
    inline long long GetValidationSuspendedRecords() const { return m_validationSuspendedRecords; }
    inline bool ValidationSuspendedRecordsHasBeenSet() const { return m_validationSuspendedRecordsHasBeenSet; }
    inline void SetValidationSuspendedRecords(long long value) { m_validationSuspendedRecordsHasBeenSet = true; m_validationSuspendedRecords = value; }
    inline TableStatistics& WithValidationSuspendedRecords(long long value) { SetValidationSuspendedRecords(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetValidationState() const { return m_validationState; }
    inline bool ValidationStateHasBeenSet() const { return m_validationStateHasBeenSet; }
    template<typename ValidationStateT = Aws::String>
    void SetValidationState(ValidationStateT&& value) { m_validationStateHasBeenSet = true; m_validationState = std::forward<ValidationStateT>(value); }
    template<typename ValidationStateT = Aws::String>
    TableStatistics& WithValidationState(ValidationStateT&& value) { SetValidationState(std::forward<ValidationStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional details about the state of validation.</p>
     */
    inline const Aws::String& GetValidationStateDetails() const { return m_validationStateDetails; }
    inline bool ValidationStateDetailsHasBeenSet() const { return m_validationStateDetailsHasBeenSet; }
    template<typename ValidationStateDetailsT = Aws::String>
    void SetValidationStateDetails(ValidationStateDetailsT&& value) { m_validationStateDetailsHasBeenSet = true; m_validationStateDetails = std::forward<ValidationStateDetailsT>(value); }
    template<typename ValidationStateDetailsT = Aws::String>
    TableStatistics& WithValidationStateDetails(ValidationStateDetailsT&& value) { SetValidationStateDetails(std::forward<ValidationStateDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Records the current state of table resynchronization in the migration
     * task.</p> <p>This parameter can have the following values:</p> <ul> <li> <p>Not
     * enabled – Resync is not enabled for the table in the migration task.</p> </li>
     * <li> <p>Pending – The tables are waiting for resync.</p> </li> <li> <p>In
     * progress – Resync in progress for some records in the table.</p> </li> <li>
     * <p>No primary key – The table could not be resynced because it has no primary
     * key.</p> </li> <li> <p>Last resync at: <code>date/time</code> – Resync session
     * is finished at time. Time provided in UTC format.</p> </li> </ul>
     */
    inline const Aws::String& GetResyncState() const { return m_resyncState; }
    inline bool ResyncStateHasBeenSet() const { return m_resyncStateHasBeenSet; }
    template<typename ResyncStateT = Aws::String>
    void SetResyncState(ResyncStateT&& value) { m_resyncStateHasBeenSet = true; m_resyncState = std::forward<ResyncStateT>(value); }
    template<typename ResyncStateT = Aws::String>
    TableStatistics& WithResyncState(ResyncStateT&& value) { SetResyncState(std::forward<ResyncStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Records the total number of mismatched data rows where the system attempted
     * to apply fixes in the target database.</p>
     */
    inline long long GetResyncRowsAttempted() const { return m_resyncRowsAttempted; }
    inline bool ResyncRowsAttemptedHasBeenSet() const { return m_resyncRowsAttemptedHasBeenSet; }
    inline void SetResyncRowsAttempted(long long value) { m_resyncRowsAttemptedHasBeenSet = true; m_resyncRowsAttempted = value; }
    inline TableStatistics& WithResyncRowsAttempted(long long value) { SetResyncRowsAttempted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Records the total number of mismatched data rows where fixes were
     * successfully applied in the target database.</p>
     */
    inline long long GetResyncRowsSucceeded() const { return m_resyncRowsSucceeded; }
    inline bool ResyncRowsSucceededHasBeenSet() const { return m_resyncRowsSucceededHasBeenSet; }
    inline void SetResyncRowsSucceeded(long long value) { m_resyncRowsSucceededHasBeenSet = true; m_resyncRowsSucceeded = value; }
    inline TableStatistics& WithResyncRowsSucceeded(long long value) { SetResyncRowsSucceeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Records the total number of mismatched data rows where fix attempts failed in
     * the target database.</p>
     */
    inline long long GetResyncRowsFailed() const { return m_resyncRowsFailed; }
    inline bool ResyncRowsFailedHasBeenSet() const { return m_resyncRowsFailedHasBeenSet; }
    inline void SetResyncRowsFailed(long long value) { m_resyncRowsFailedHasBeenSet = true; m_resyncRowsFailed = value; }
    inline TableStatistics& WithResyncRowsFailed(long long value) { SetResyncRowsFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Calculates the percentage of failed validations that were successfully
     * resynced to the system.</p>
     */
    inline double GetResyncProgress() const { return m_resyncProgress; }
    inline bool ResyncProgressHasBeenSet() const { return m_resyncProgressHasBeenSet; }
    inline void SetResyncProgress(double value) { m_resyncProgressHasBeenSet = true; m_resyncProgress = value; }
    inline TableStatistics& WithResyncProgress(double value) { SetResyncProgress(value); return *this;}
    ///@}
  private:

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    long long m_inserts{0};
    bool m_insertsHasBeenSet = false;

    long long m_deletes{0};
    bool m_deletesHasBeenSet = false;

    long long m_updates{0};
    bool m_updatesHasBeenSet = false;

    long long m_ddls{0};
    bool m_ddlsHasBeenSet = false;

    long long m_appliedInserts{0};
    bool m_appliedInsertsHasBeenSet = false;

    long long m_appliedDeletes{0};
    bool m_appliedDeletesHasBeenSet = false;

    long long m_appliedUpdates{0};
    bool m_appliedUpdatesHasBeenSet = false;

    long long m_appliedDdls{0};
    bool m_appliedDdlsHasBeenSet = false;

    long long m_fullLoadRows{0};
    bool m_fullLoadRowsHasBeenSet = false;

    long long m_fullLoadCondtnlChkFailedRows{0};
    bool m_fullLoadCondtnlChkFailedRowsHasBeenSet = false;

    long long m_fullLoadErrorRows{0};
    bool m_fullLoadErrorRowsHasBeenSet = false;

    Aws::Utils::DateTime m_fullLoadStartTime{};
    bool m_fullLoadStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_fullLoadEndTime{};
    bool m_fullLoadEndTimeHasBeenSet = false;

    bool m_fullLoadReloaded{false};
    bool m_fullLoadReloadedHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::String m_tableState;
    bool m_tableStateHasBeenSet = false;

    long long m_validationPendingRecords{0};
    bool m_validationPendingRecordsHasBeenSet = false;

    long long m_validationFailedRecords{0};
    bool m_validationFailedRecordsHasBeenSet = false;

    long long m_validationSuspendedRecords{0};
    bool m_validationSuspendedRecordsHasBeenSet = false;

    Aws::String m_validationState;
    bool m_validationStateHasBeenSet = false;

    Aws::String m_validationStateDetails;
    bool m_validationStateDetailsHasBeenSet = false;

    Aws::String m_resyncState;
    bool m_resyncStateHasBeenSet = false;

    long long m_resyncRowsAttempted{0};
    bool m_resyncRowsAttemptedHasBeenSet = false;

    long long m_resyncRowsSucceeded{0};
    bool m_resyncRowsSucceededHasBeenSet = false;

    long long m_resyncRowsFailed{0};
    bool m_resyncRowsFailedHasBeenSet = false;

    double m_resyncProgress{0.0};
    bool m_resyncProgressHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
