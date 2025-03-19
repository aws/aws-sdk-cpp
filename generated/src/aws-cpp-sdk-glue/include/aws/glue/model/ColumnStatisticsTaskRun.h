/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ComputationType.h>
#include <aws/glue/model/ColumnStatisticsState.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The object that shows the details of the column stats run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ColumnStatisticsTaskRun">AWS
   * API Reference</a></p>
   */
  class ColumnStatisticsTaskRun
  {
  public:
    AWS_GLUE_API ColumnStatisticsTaskRun() = default;
    AWS_GLUE_API ColumnStatisticsTaskRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ColumnStatisticsTaskRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetCustomerId() const { return m_customerId; }
    inline bool CustomerIdHasBeenSet() const { return m_customerIdHasBeenSet; }
    template<typename CustomerIdT = Aws::String>
    void SetCustomerId(CustomerIdT&& value) { m_customerIdHasBeenSet = true; m_customerId = std::forward<CustomerIdT>(value); }
    template<typename CustomerIdT = Aws::String>
    ColumnStatisticsTaskRun& WithCustomerId(CustomerIdT&& value) { SetCustomerId(std::forward<CustomerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the particular column statistics task run.</p>
     */
    inline const Aws::String& GetColumnStatisticsTaskRunId() const { return m_columnStatisticsTaskRunId; }
    inline bool ColumnStatisticsTaskRunIdHasBeenSet() const { return m_columnStatisticsTaskRunIdHasBeenSet; }
    template<typename ColumnStatisticsTaskRunIdT = Aws::String>
    void SetColumnStatisticsTaskRunId(ColumnStatisticsTaskRunIdT&& value) { m_columnStatisticsTaskRunIdHasBeenSet = true; m_columnStatisticsTaskRunId = std::forward<ColumnStatisticsTaskRunIdT>(value); }
    template<typename ColumnStatisticsTaskRunIdT = Aws::String>
    ColumnStatisticsTaskRun& WithColumnStatisticsTaskRunId(ColumnStatisticsTaskRunIdT&& value) { SetColumnStatisticsTaskRunId(std::forward<ColumnStatisticsTaskRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database where the table resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    ColumnStatisticsTaskRun& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table for which column statistics is generated.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    ColumnStatisticsTaskRun& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the column names. If none is supplied, all column names for the
     * table will be used by default.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNameList() const { return m_columnNameList; }
    inline bool ColumnNameListHasBeenSet() const { return m_columnNameListHasBeenSet; }
    template<typename ColumnNameListT = Aws::Vector<Aws::String>>
    void SetColumnNameList(ColumnNameListT&& value) { m_columnNameListHasBeenSet = true; m_columnNameList = std::forward<ColumnNameListT>(value); }
    template<typename ColumnNameListT = Aws::Vector<Aws::String>>
    ColumnStatisticsTaskRun& WithColumnNameList(ColumnNameListT&& value) { SetColumnNameList(std::forward<ColumnNameListT>(value)); return *this;}
    template<typename ColumnNameListT = Aws::String>
    ColumnStatisticsTaskRun& AddColumnNameList(ColumnNameListT&& value) { m_columnNameListHasBeenSet = true; m_columnNameList.emplace_back(std::forward<ColumnNameListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogID() const { return m_catalogID; }
    inline bool CatalogIDHasBeenSet() const { return m_catalogIDHasBeenSet; }
    template<typename CatalogIDT = Aws::String>
    void SetCatalogID(CatalogIDT&& value) { m_catalogIDHasBeenSet = true; m_catalogID = std::forward<CatalogIDT>(value); }
    template<typename CatalogIDT = Aws::String>
    ColumnStatisticsTaskRun& WithCatalogID(CatalogIDT&& value) { SetCatalogID(std::forward<CatalogIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    ColumnStatisticsTaskRun& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of rows used to generate statistics. If none is supplied, the
     * entire table will be used to generate stats.</p>
     */
    inline double GetSampleSize() const { return m_sampleSize; }
    inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }
    inline void SetSampleSize(double value) { m_sampleSizeHasBeenSet = true; m_sampleSize = value; }
    inline ColumnStatisticsTaskRun& WithSampleSize(double value) { SetSampleSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const { return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    template<typename SecurityConfigurationT = Aws::String>
    void SetSecurityConfiguration(SecurityConfigurationT&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::forward<SecurityConfigurationT>(value); }
    template<typename SecurityConfigurationT = Aws::String>
    ColumnStatisticsTaskRun& WithSecurityConfiguration(SecurityConfigurationT&& value) { SetSecurityConfiguration(std::forward<SecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers used to generate column statistics. The job is
     * preconfigured to autoscale up to 25 instances.</p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline ColumnStatisticsTaskRun& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of workers being used for generating stats. The default is
     * <code>g.1x</code>.</p>
     */
    inline const Aws::String& GetWorkerType() const { return m_workerType; }
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }
    template<typename WorkerTypeT = Aws::String>
    void SetWorkerType(WorkerTypeT&& value) { m_workerTypeHasBeenSet = true; m_workerType = std::forward<WorkerTypeT>(value); }
    template<typename WorkerTypeT = Aws::String>
    ColumnStatisticsTaskRun& WithWorkerType(WorkerTypeT&& value) { SetWorkerType(std::forward<WorkerTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of column statistics computation.</p>
     */
    inline ComputationType GetComputationType() const { return m_computationType; }
    inline bool ComputationTypeHasBeenSet() const { return m_computationTypeHasBeenSet; }
    inline void SetComputationType(ComputationType value) { m_computationTypeHasBeenSet = true; m_computationType = value; }
    inline ColumnStatisticsTaskRun& WithComputationType(ComputationType value) { SetComputationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the task run.</p>
     */
    inline ColumnStatisticsState GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ColumnStatisticsState value) { m_statusHasBeenSet = true; m_status = value; }
    inline ColumnStatisticsTaskRun& WithStatus(ColumnStatisticsState value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ColumnStatisticsTaskRun& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last point in time when this task was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    ColumnStatisticsTaskRun& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the task.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ColumnStatisticsTaskRun& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the task.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ColumnStatisticsTaskRun& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message for the job.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ColumnStatisticsTaskRun& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The calculated DPU usage in seconds for all autoscaled workers.</p>
     */
    inline double GetDPUSeconds() const { return m_dPUSeconds; }
    inline bool DPUSecondsHasBeenSet() const { return m_dPUSecondsHasBeenSet; }
    inline void SetDPUSeconds(double value) { m_dPUSecondsHasBeenSet = true; m_dPUSeconds = value; }
    inline ColumnStatisticsTaskRun& WithDPUSeconds(double value) { SetDPUSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_customerId;
    bool m_customerIdHasBeenSet = false;

    Aws::String m_columnStatisticsTaskRunId;
    bool m_columnStatisticsTaskRunIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

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

    int m_numberOfWorkers{0};
    bool m_numberOfWorkersHasBeenSet = false;

    Aws::String m_workerType;
    bool m_workerTypeHasBeenSet = false;

    ComputationType m_computationType{ComputationType::NOT_SET};
    bool m_computationTypeHasBeenSet = false;

    ColumnStatisticsState m_status{ColumnStatisticsState::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    double m_dPUSeconds{0.0};
    bool m_dPUSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
