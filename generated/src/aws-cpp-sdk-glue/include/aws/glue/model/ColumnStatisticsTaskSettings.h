/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Schedule.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ScheduleType.h>
#include <aws/glue/model/SettingSource.h>
#include <aws/glue/model/ExecutionAttempt.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The settings for a column statistics task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ColumnStatisticsTaskSettings">AWS
   * API Reference</a></p>
   */
  class ColumnStatisticsTaskSettings
  {
  public:
    AWS_GLUE_API ColumnStatisticsTaskSettings();
    AWS_GLUE_API ColumnStatisticsTaskSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ColumnStatisticsTaskSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the database where the table resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline ColumnStatisticsTaskSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline ColumnStatisticsTaskSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline ColumnStatisticsTaskSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table for which to generate column statistics.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline ColumnStatisticsTaskSettings& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline ColumnStatisticsTaskSettings& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline ColumnStatisticsTaskSettings& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A schedule for running the column statistics, specified in CRON syntax.</p>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline ColumnStatisticsTaskSettings& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}
    inline ColumnStatisticsTaskSettings& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of column names for which to run statistics.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNameList() const{ return m_columnNameList; }
    inline bool ColumnNameListHasBeenSet() const { return m_columnNameListHasBeenSet; }
    inline void SetColumnNameList(const Aws::Vector<Aws::String>& value) { m_columnNameListHasBeenSet = true; m_columnNameList = value; }
    inline void SetColumnNameList(Aws::Vector<Aws::String>&& value) { m_columnNameListHasBeenSet = true; m_columnNameList = std::move(value); }
    inline ColumnStatisticsTaskSettings& WithColumnNameList(const Aws::Vector<Aws::String>& value) { SetColumnNameList(value); return *this;}
    inline ColumnStatisticsTaskSettings& WithColumnNameList(Aws::Vector<Aws::String>&& value) { SetColumnNameList(std::move(value)); return *this;}
    inline ColumnStatisticsTaskSettings& AddColumnNameList(const Aws::String& value) { m_columnNameListHasBeenSet = true; m_columnNameList.push_back(value); return *this; }
    inline ColumnStatisticsTaskSettings& AddColumnNameList(Aws::String&& value) { m_columnNameListHasBeenSet = true; m_columnNameList.push_back(std::move(value)); return *this; }
    inline ColumnStatisticsTaskSettings& AddColumnNameList(const char* value) { m_columnNameListHasBeenSet = true; m_columnNameList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Data Catalog in which the database resides.</p>
     */
    inline const Aws::String& GetCatalogID() const{ return m_catalogID; }
    inline bool CatalogIDHasBeenSet() const { return m_catalogIDHasBeenSet; }
    inline void SetCatalogID(const Aws::String& value) { m_catalogIDHasBeenSet = true; m_catalogID = value; }
    inline void SetCatalogID(Aws::String&& value) { m_catalogIDHasBeenSet = true; m_catalogID = std::move(value); }
    inline void SetCatalogID(const char* value) { m_catalogIDHasBeenSet = true; m_catalogID.assign(value); }
    inline ColumnStatisticsTaskSettings& WithCatalogID(const Aws::String& value) { SetCatalogID(value); return *this;}
    inline ColumnStatisticsTaskSettings& WithCatalogID(Aws::String&& value) { SetCatalogID(std::move(value)); return *this;}
    inline ColumnStatisticsTaskSettings& WithCatalogID(const char* value) { SetCatalogID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role used for running the column statistics.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline ColumnStatisticsTaskSettings& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline ColumnStatisticsTaskSettings& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline ColumnStatisticsTaskSettings& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of data to sample.</p>
     */
    inline double GetSampleSize() const{ return m_sampleSize; }
    inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }
    inline void SetSampleSize(double value) { m_sampleSizeHasBeenSet = true; m_sampleSize = value; }
    inline ColumnStatisticsTaskSettings& WithSampleSize(double value) { SetSampleSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch
     * logs.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }
    inline ColumnStatisticsTaskSettings& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}
    inline ColumnStatisticsTaskSettings& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}
    inline ColumnStatisticsTaskSettings& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of schedule for a column statistics task. Possible values may be
     * <code>CRON</code> or <code>AUTO</code>.</p>
     */
    inline const ScheduleType& GetScheduleType() const{ return m_scheduleType; }
    inline bool ScheduleTypeHasBeenSet() const { return m_scheduleTypeHasBeenSet; }
    inline void SetScheduleType(const ScheduleType& value) { m_scheduleTypeHasBeenSet = true; m_scheduleType = value; }
    inline void SetScheduleType(ScheduleType&& value) { m_scheduleTypeHasBeenSet = true; m_scheduleType = std::move(value); }
    inline ColumnStatisticsTaskSettings& WithScheduleType(const ScheduleType& value) { SetScheduleType(value); return *this;}
    inline ColumnStatisticsTaskSettings& WithScheduleType(ScheduleType&& value) { SetScheduleType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of setting the column statistics task. Possible values may be
     * <code>CATALOG</code> or <code>TABLE</code>.</p>
     */
    inline const SettingSource& GetSettingSource() const{ return m_settingSource; }
    inline bool SettingSourceHasBeenSet() const { return m_settingSourceHasBeenSet; }
    inline void SetSettingSource(const SettingSource& value) { m_settingSourceHasBeenSet = true; m_settingSource = value; }
    inline void SetSettingSource(SettingSource&& value) { m_settingSourceHasBeenSet = true; m_settingSource = std::move(value); }
    inline ColumnStatisticsTaskSettings& WithSettingSource(const SettingSource& value) { SetSettingSource(value); return *this;}
    inline ColumnStatisticsTaskSettings& WithSettingSource(SettingSource&& value) { SetSettingSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last <code>ExecutionAttempt</code> for the column statistics task
     * run.</p>
     */
    inline const ExecutionAttempt& GetLastExecutionAttempt() const{ return m_lastExecutionAttempt; }
    inline bool LastExecutionAttemptHasBeenSet() const { return m_lastExecutionAttemptHasBeenSet; }
    inline void SetLastExecutionAttempt(const ExecutionAttempt& value) { m_lastExecutionAttemptHasBeenSet = true; m_lastExecutionAttempt = value; }
    inline void SetLastExecutionAttempt(ExecutionAttempt&& value) { m_lastExecutionAttemptHasBeenSet = true; m_lastExecutionAttempt = std::move(value); }
    inline ColumnStatisticsTaskSettings& WithLastExecutionAttempt(const ExecutionAttempt& value) { SetLastExecutionAttempt(value); return *this;}
    inline ColumnStatisticsTaskSettings& WithLastExecutionAttempt(ExecutionAttempt&& value) { SetLastExecutionAttempt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::Vector<Aws::String> m_columnNameList;
    bool m_columnNameListHasBeenSet = false;

    Aws::String m_catalogID;
    bool m_catalogIDHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    double m_sampleSize;
    bool m_sampleSizeHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    ScheduleType m_scheduleType;
    bool m_scheduleTypeHasBeenSet = false;

    SettingSource m_settingSource;
    bool m_settingSourceHasBeenSet = false;

    ExecutionAttempt m_lastExecutionAttempt;
    bool m_lastExecutionAttemptHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
