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
    AWS_GLUE_API ColumnStatisticsTaskSettings() = default;
    AWS_GLUE_API ColumnStatisticsTaskSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ColumnStatisticsTaskSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the database where the table resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    ColumnStatisticsTaskSettings& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table for which to generate column statistics.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    ColumnStatisticsTaskSettings& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A schedule for running the column statistics, specified in CRON syntax.</p>
     */
    inline const Schedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Schedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Schedule>
    ColumnStatisticsTaskSettings& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of column names for which to run statistics.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNameList() const { return m_columnNameList; }
    inline bool ColumnNameListHasBeenSet() const { return m_columnNameListHasBeenSet; }
    template<typename ColumnNameListT = Aws::Vector<Aws::String>>
    void SetColumnNameList(ColumnNameListT&& value) { m_columnNameListHasBeenSet = true; m_columnNameList = std::forward<ColumnNameListT>(value); }
    template<typename ColumnNameListT = Aws::Vector<Aws::String>>
    ColumnStatisticsTaskSettings& WithColumnNameList(ColumnNameListT&& value) { SetColumnNameList(std::forward<ColumnNameListT>(value)); return *this;}
    template<typename ColumnNameListT = Aws::String>
    ColumnStatisticsTaskSettings& AddColumnNameList(ColumnNameListT&& value) { m_columnNameListHasBeenSet = true; m_columnNameList.emplace_back(std::forward<ColumnNameListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Data Catalog in which the database resides.</p>
     */
    inline const Aws::String& GetCatalogID() const { return m_catalogID; }
    inline bool CatalogIDHasBeenSet() const { return m_catalogIDHasBeenSet; }
    template<typename CatalogIDT = Aws::String>
    void SetCatalogID(CatalogIDT&& value) { m_catalogIDHasBeenSet = true; m_catalogID = std::forward<CatalogIDT>(value); }
    template<typename CatalogIDT = Aws::String>
    ColumnStatisticsTaskSettings& WithCatalogID(CatalogIDT&& value) { SetCatalogID(std::forward<CatalogIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role used for running the column statistics.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    ColumnStatisticsTaskSettings& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of data to sample.</p>
     */
    inline double GetSampleSize() const { return m_sampleSize; }
    inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }
    inline void SetSampleSize(double value) { m_sampleSizeHasBeenSet = true; m_sampleSize = value; }
    inline ColumnStatisticsTaskSettings& WithSampleSize(double value) { SetSampleSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch
     * logs.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const { return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    template<typename SecurityConfigurationT = Aws::String>
    void SetSecurityConfiguration(SecurityConfigurationT&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::forward<SecurityConfigurationT>(value); }
    template<typename SecurityConfigurationT = Aws::String>
    ColumnStatisticsTaskSettings& WithSecurityConfiguration(SecurityConfigurationT&& value) { SetSecurityConfiguration(std::forward<SecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of schedule for a column statistics task. Possible values may be
     * <code>CRON</code> or <code>AUTO</code>.</p>
     */
    inline ScheduleType GetScheduleType() const { return m_scheduleType; }
    inline bool ScheduleTypeHasBeenSet() const { return m_scheduleTypeHasBeenSet; }
    inline void SetScheduleType(ScheduleType value) { m_scheduleTypeHasBeenSet = true; m_scheduleType = value; }
    inline ColumnStatisticsTaskSettings& WithScheduleType(ScheduleType value) { SetScheduleType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of setting the column statistics task. Possible values may be
     * <code>CATALOG</code> or <code>TABLE</code>.</p>
     */
    inline SettingSource GetSettingSource() const { return m_settingSource; }
    inline bool SettingSourceHasBeenSet() const { return m_settingSourceHasBeenSet; }
    inline void SetSettingSource(SettingSource value) { m_settingSourceHasBeenSet = true; m_settingSource = value; }
    inline ColumnStatisticsTaskSettings& WithSettingSource(SettingSource value) { SetSettingSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last <code>ExecutionAttempt</code> for the column statistics task
     * run.</p>
     */
    inline const ExecutionAttempt& GetLastExecutionAttempt() const { return m_lastExecutionAttempt; }
    inline bool LastExecutionAttemptHasBeenSet() const { return m_lastExecutionAttemptHasBeenSet; }
    template<typename LastExecutionAttemptT = ExecutionAttempt>
    void SetLastExecutionAttempt(LastExecutionAttemptT&& value) { m_lastExecutionAttemptHasBeenSet = true; m_lastExecutionAttempt = std::forward<LastExecutionAttemptT>(value); }
    template<typename LastExecutionAttemptT = ExecutionAttempt>
    ColumnStatisticsTaskSettings& WithLastExecutionAttempt(LastExecutionAttemptT&& value) { SetLastExecutionAttempt(std::forward<LastExecutionAttemptT>(value)); return *this;}
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

    double m_sampleSize{0.0};
    bool m_sampleSizeHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    ScheduleType m_scheduleType{ScheduleType::NOT_SET};
    bool m_scheduleTypeHasBeenSet = false;

    SettingSource m_settingSource{SettingSource::NOT_SET};
    bool m_settingSourceHasBeenSet = false;

    ExecutionAttempt m_lastExecutionAttempt;
    bool m_lastExecutionAttemptHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
