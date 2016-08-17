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
#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API TableStatistics
  {
  public:
    TableStatistics();
    TableStatistics(const Aws::Utils::Json::JsonValue& jsonValue);
    TableStatistics& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The schema name.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The schema name.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The schema name.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

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
    inline TableStatistics& WithSchemaName(Aws::String&& value) { SetSchemaName(value); return *this;}

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
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

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
    inline TableStatistics& WithTableName(Aws::String&& value) { SetTableName(value); return *this;}

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
    inline void SetUpdates(long long value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>The number of update actions performed on a table.</p>
     */
    inline TableStatistics& WithUpdates(long long value) { SetUpdates(value); return *this;}

    /**
     * <p>The Data Definition Language (DDL) used to build and modify the structure of
     * your tables.</p>
     */
    inline long long GetDdls() const{ return m_ddls; }

    /**
     * <p>The Data Definition Language (DDL) used to build and modify the structure of
     * your tables.</p>
     */
    inline void SetDdls(long long value) { m_ddlsHasBeenSet = true; m_ddls = value; }

    /**
     * <p>The Data Definition Language (DDL) used to build and modify the structure of
     * your tables.</p>
     */
    inline TableStatistics& WithDdls(long long value) { SetDdls(value); return *this;}

    /**
     * <p>The number of rows added during the Full Load operation.</p>
     */
    inline long long GetFullLoadRows() const{ return m_fullLoadRows; }

    /**
     * <p>The number of rows added during the Full Load operation.</p>
     */
    inline void SetFullLoadRows(long long value) { m_fullLoadRowsHasBeenSet = true; m_fullLoadRows = value; }

    /**
     * <p>The number of rows added during the Full Load operation.</p>
     */
    inline TableStatistics& WithFullLoadRows(long long value) { SetFullLoadRows(value); return *this;}

    /**
     * <p>The last time the table was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The last time the table was updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The last time the table was updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The last time the table was updated.</p>
     */
    inline TableStatistics& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last time the table was updated.</p>
     */
    inline TableStatistics& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The state of the table.</p>
     */
    inline const Aws::String& GetTableState() const{ return m_tableState; }

    /**
     * <p>The state of the table.</p>
     */
    inline void SetTableState(const Aws::String& value) { m_tableStateHasBeenSet = true; m_tableState = value; }

    /**
     * <p>The state of the table.</p>
     */
    inline void SetTableState(Aws::String&& value) { m_tableStateHasBeenSet = true; m_tableState = value; }

    /**
     * <p>The state of the table.</p>
     */
    inline void SetTableState(const char* value) { m_tableStateHasBeenSet = true; m_tableState.assign(value); }

    /**
     * <p>The state of the table.</p>
     */
    inline TableStatistics& WithTableState(const Aws::String& value) { SetTableState(value); return *this;}

    /**
     * <p>The state of the table.</p>
     */
    inline TableStatistics& WithTableState(Aws::String&& value) { SetTableState(value); return *this;}

    /**
     * <p>The state of the table.</p>
     */
    inline TableStatistics& WithTableState(const char* value) { SetTableState(value); return *this;}

  private:
    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet;
    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;
    long long m_inserts;
    bool m_insertsHasBeenSet;
    long long m_deletes;
    bool m_deletesHasBeenSet;
    long long m_updates;
    bool m_updatesHasBeenSet;
    long long m_ddls;
    bool m_ddlsHasBeenSet;
    long long m_fullLoadRows;
    bool m_fullLoadRowsHasBeenSet;
    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;
    Aws::String m_tableState;
    bool m_tableStateHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
