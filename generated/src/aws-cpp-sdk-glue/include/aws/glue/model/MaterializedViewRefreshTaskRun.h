/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/MaterializedViewRefreshState.h>
#include <aws/glue/model/MaterializedViewRefreshType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>The object that shows the details of the materialized view refresh task
 * run.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/MaterializedViewRefreshTaskRun">AWS
 * API Reference</a></p>
 */
class MaterializedViewRefreshTaskRun {
 public:
  AWS_GLUE_API MaterializedViewRefreshTaskRun() = default;
  AWS_GLUE_API MaterializedViewRefreshTaskRun(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API MaterializedViewRefreshTaskRun& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services account ID.</p>
   */
  inline const Aws::String& GetCustomerId() const { return m_customerId; }
  inline bool CustomerIdHasBeenSet() const { return m_customerIdHasBeenSet; }
  template <typename CustomerIdT = Aws::String>
  void SetCustomerId(CustomerIdT&& value) {
    m_customerIdHasBeenSet = true;
    m_customerId = std::forward<CustomerIdT>(value);
  }
  template <typename CustomerIdT = Aws::String>
  MaterializedViewRefreshTaskRun& WithCustomerId(CustomerIdT&& value) {
    SetCustomerId(std::forward<CustomerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the materialized view refresh task run.</p>
   */
  inline const Aws::String& GetMaterializedViewRefreshTaskRunId() const { return m_materializedViewRefreshTaskRunId; }
  inline bool MaterializedViewRefreshTaskRunIdHasBeenSet() const { return m_materializedViewRefreshTaskRunIdHasBeenSet; }
  template <typename MaterializedViewRefreshTaskRunIdT = Aws::String>
  void SetMaterializedViewRefreshTaskRunId(MaterializedViewRefreshTaskRunIdT&& value) {
    m_materializedViewRefreshTaskRunIdHasBeenSet = true;
    m_materializedViewRefreshTaskRunId = std::forward<MaterializedViewRefreshTaskRunIdT>(value);
  }
  template <typename MaterializedViewRefreshTaskRunIdT = Aws::String>
  MaterializedViewRefreshTaskRun& WithMaterializedViewRefreshTaskRunId(MaterializedViewRefreshTaskRunIdT&& value) {
    SetMaterializedViewRefreshTaskRunId(std::forward<MaterializedViewRefreshTaskRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The database where the table resides.</p>
   */
  inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
  inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
  template <typename DatabaseNameT = Aws::String>
  void SetDatabaseName(DatabaseNameT&& value) {
    m_databaseNameHasBeenSet = true;
    m_databaseName = std::forward<DatabaseNameT>(value);
  }
  template <typename DatabaseNameT = Aws::String>
  MaterializedViewRefreshTaskRun& WithDatabaseName(DatabaseNameT&& value) {
    SetDatabaseName(std::forward<DatabaseNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the table for which statistics is generated.</p>
   */
  inline const Aws::String& GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  template <typename TableNameT = Aws::String>
  void SetTableName(TableNameT&& value) {
    m_tableNameHasBeenSet = true;
    m_tableName = std::forward<TableNameT>(value);
  }
  template <typename TableNameT = Aws::String>
  MaterializedViewRefreshTaskRun& WithTableName(TableNameT&& value) {
    SetTableName(std::forward<TableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
   * account ID is used by default.</p>
   */
  inline const Aws::String& GetCatalogId() const { return m_catalogId; }
  inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
  template <typename CatalogIdT = Aws::String>
  void SetCatalogId(CatalogIdT&& value) {
    m_catalogIdHasBeenSet = true;
    m_catalogId = std::forward<CatalogIdT>(value);
  }
  template <typename CatalogIdT = Aws::String>
  MaterializedViewRefreshTaskRun& WithCatalogId(CatalogIdT&& value) {
    SetCatalogId(std::forward<CatalogIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM role that the service assumes to generate statistics.</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  MaterializedViewRefreshTaskRun& WithRole(RoleT&& value) {
    SetRole(std::forward<RoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the task run.</p>
   */
  inline MaterializedViewRefreshState GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(MaterializedViewRefreshState value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline MaterializedViewRefreshTaskRun& WithStatus(MaterializedViewRefreshState value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time that this task was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  MaterializedViewRefreshTaskRun& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last point in time when this task was modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
  inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
  template <typename LastUpdatedT = Aws::Utils::DateTime>
  void SetLastUpdated(LastUpdatedT&& value) {
    m_lastUpdatedHasBeenSet = true;
    m_lastUpdated = std::forward<LastUpdatedT>(value);
  }
  template <typename LastUpdatedT = Aws::Utils::DateTime>
  MaterializedViewRefreshTaskRun& WithLastUpdated(LastUpdatedT&& value) {
    SetLastUpdated(std::forward<LastUpdatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start time of the task.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  MaterializedViewRefreshTaskRun& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time of the task.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  MaterializedViewRefreshTaskRun& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message for the job.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  MaterializedViewRefreshTaskRun& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The calculated DPU usage in seconds for all autoscaled workers.</p>
   */
  inline double GetDPUSeconds() const { return m_dPUSeconds; }
  inline bool DPUSecondsHasBeenSet() const { return m_dPUSecondsHasBeenSet; }
  inline void SetDPUSeconds(double value) {
    m_dPUSecondsHasBeenSet = true;
    m_dPUSeconds = value;
  }
  inline MaterializedViewRefreshTaskRun& WithDPUSeconds(double value) {
    SetDPUSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the refresh task run. Either FULL or INCREMENTAL.</p>
   */
  inline MaterializedViewRefreshType GetRefreshType() const { return m_refreshType; }
  inline bool RefreshTypeHasBeenSet() const { return m_refreshTypeHasBeenSet; }
  inline void SetRefreshType(MaterializedViewRefreshType value) {
    m_refreshTypeHasBeenSet = true;
    m_refreshType = value;
  }
  inline MaterializedViewRefreshTaskRun& WithRefreshType(MaterializedViewRefreshType value) {
    SetRefreshType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of bytes the refresh task run has scanned to refresh the
   * materialized view.</p>
   */
  inline long long GetProcessedBytes() const { return m_processedBytes; }
  inline bool ProcessedBytesHasBeenSet() const { return m_processedBytesHasBeenSet; }
  inline void SetProcessedBytes(long long value) {
    m_processedBytesHasBeenSet = true;
    m_processedBytes = value;
  }
  inline MaterializedViewRefreshTaskRun& WithProcessedBytes(long long value) {
    SetProcessedBytes(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_customerId;

  Aws::String m_materializedViewRefreshTaskRunId;

  Aws::String m_databaseName;

  Aws::String m_tableName;

  Aws::String m_catalogId;

  Aws::String m_role;

  MaterializedViewRefreshState m_status{MaterializedViewRefreshState::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastUpdated{};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::String m_errorMessage;

  double m_dPUSeconds{0.0};

  MaterializedViewRefreshType m_refreshType{MaterializedViewRefreshType::NOT_SET};

  long long m_processedBytes{0};
  bool m_customerIdHasBeenSet = false;
  bool m_materializedViewRefreshTaskRunIdHasBeenSet = false;
  bool m_databaseNameHasBeenSet = false;
  bool m_tableNameHasBeenSet = false;
  bool m_catalogIdHasBeenSet = false;
  bool m_roleHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastUpdatedHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_dPUSecondsHasBeenSet = false;
  bool m_refreshTypeHasBeenSet = false;
  bool m_processedBytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
