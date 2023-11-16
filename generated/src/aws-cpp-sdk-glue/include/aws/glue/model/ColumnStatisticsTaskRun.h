/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_GLUE_API ColumnStatisticsTaskRun();
    AWS_GLUE_API ColumnStatisticsTaskRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ColumnStatisticsTaskRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetCustomerId() const{ return m_customerId; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline bool CustomerIdHasBeenSet() const { return m_customerIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetCustomerId(const Aws::String& value) { m_customerIdHasBeenSet = true; m_customerId = value; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetCustomerId(Aws::String&& value) { m_customerIdHasBeenSet = true; m_customerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetCustomerId(const char* value) { m_customerIdHasBeenSet = true; m_customerId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline ColumnStatisticsTaskRun& WithCustomerId(const Aws::String& value) { SetCustomerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline ColumnStatisticsTaskRun& WithCustomerId(Aws::String&& value) { SetCustomerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline ColumnStatisticsTaskRun& WithCustomerId(const char* value) { SetCustomerId(value); return *this;}


    /**
     * <p>The identifier for the particular column statistics task run.</p>
     */
    inline const Aws::String& GetColumnStatisticsTaskRunId() const{ return m_columnStatisticsTaskRunId; }

    /**
     * <p>The identifier for the particular column statistics task run.</p>
     */
    inline bool ColumnStatisticsTaskRunIdHasBeenSet() const { return m_columnStatisticsTaskRunIdHasBeenSet; }

    /**
     * <p>The identifier for the particular column statistics task run.</p>
     */
    inline void SetColumnStatisticsTaskRunId(const Aws::String& value) { m_columnStatisticsTaskRunIdHasBeenSet = true; m_columnStatisticsTaskRunId = value; }

    /**
     * <p>The identifier for the particular column statistics task run.</p>
     */
    inline void SetColumnStatisticsTaskRunId(Aws::String&& value) { m_columnStatisticsTaskRunIdHasBeenSet = true; m_columnStatisticsTaskRunId = std::move(value); }

    /**
     * <p>The identifier for the particular column statistics task run.</p>
     */
    inline void SetColumnStatisticsTaskRunId(const char* value) { m_columnStatisticsTaskRunIdHasBeenSet = true; m_columnStatisticsTaskRunId.assign(value); }

    /**
     * <p>The identifier for the particular column statistics task run.</p>
     */
    inline ColumnStatisticsTaskRun& WithColumnStatisticsTaskRunId(const Aws::String& value) { SetColumnStatisticsTaskRunId(value); return *this;}

    /**
     * <p>The identifier for the particular column statistics task run.</p>
     */
    inline ColumnStatisticsTaskRun& WithColumnStatisticsTaskRunId(Aws::String&& value) { SetColumnStatisticsTaskRunId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the particular column statistics task run.</p>
     */
    inline ColumnStatisticsTaskRun& WithColumnStatisticsTaskRunId(const char* value) { SetColumnStatisticsTaskRunId(value); return *this;}


    /**
     * <p>The database where the table resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database where the table resides.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The database where the table resides.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database where the table resides.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The database where the table resides.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The database where the table resides.</p>
     */
    inline ColumnStatisticsTaskRun& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database where the table resides.</p>
     */
    inline ColumnStatisticsTaskRun& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The database where the table resides.</p>
     */
    inline ColumnStatisticsTaskRun& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table for which column statistics is generated.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table for which column statistics is generated.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table for which column statistics is generated.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table for which column statistics is generated.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table for which column statistics is generated.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table for which column statistics is generated.</p>
     */
    inline ColumnStatisticsTaskRun& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table for which column statistics is generated.</p>
     */
    inline ColumnStatisticsTaskRun& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table for which column statistics is generated.</p>
     */
    inline ColumnStatisticsTaskRun& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A list of the column names. If none is supplied, all column names for the
     * table will be used by default.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNameList() const{ return m_columnNameList; }

    /**
     * <p>A list of the column names. If none is supplied, all column names for the
     * table will be used by default.</p>
     */
    inline bool ColumnNameListHasBeenSet() const { return m_columnNameListHasBeenSet; }

    /**
     * <p>A list of the column names. If none is supplied, all column names for the
     * table will be used by default.</p>
     */
    inline void SetColumnNameList(const Aws::Vector<Aws::String>& value) { m_columnNameListHasBeenSet = true; m_columnNameList = value; }

    /**
     * <p>A list of the column names. If none is supplied, all column names for the
     * table will be used by default.</p>
     */
    inline void SetColumnNameList(Aws::Vector<Aws::String>&& value) { m_columnNameListHasBeenSet = true; m_columnNameList = std::move(value); }

    /**
     * <p>A list of the column names. If none is supplied, all column names for the
     * table will be used by default.</p>
     */
    inline ColumnStatisticsTaskRun& WithColumnNameList(const Aws::Vector<Aws::String>& value) { SetColumnNameList(value); return *this;}

    /**
     * <p>A list of the column names. If none is supplied, all column names for the
     * table will be used by default.</p>
     */
    inline ColumnStatisticsTaskRun& WithColumnNameList(Aws::Vector<Aws::String>&& value) { SetColumnNameList(std::move(value)); return *this;}

    /**
     * <p>A list of the column names. If none is supplied, all column names for the
     * table will be used by default.</p>
     */
    inline ColumnStatisticsTaskRun& AddColumnNameList(const Aws::String& value) { m_columnNameListHasBeenSet = true; m_columnNameList.push_back(value); return *this; }

    /**
     * <p>A list of the column names. If none is supplied, all column names for the
     * table will be used by default.</p>
     */
    inline ColumnStatisticsTaskRun& AddColumnNameList(Aws::String&& value) { m_columnNameListHasBeenSet = true; m_columnNameList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the column names. If none is supplied, all column names for the
     * table will be used by default.</p>
     */
    inline ColumnStatisticsTaskRun& AddColumnNameList(const char* value) { m_columnNameListHasBeenSet = true; m_columnNameList.push_back(value); return *this; }


    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogID() const{ return m_catalogID; }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline bool CatalogIDHasBeenSet() const { return m_catalogIDHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogID(const Aws::String& value) { m_catalogIDHasBeenSet = true; m_catalogID = value; }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogID(Aws::String&& value) { m_catalogIDHasBeenSet = true; m_catalogID = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogID(const char* value) { m_catalogIDHasBeenSet = true; m_catalogID.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline ColumnStatisticsTaskRun& WithCatalogID(const Aws::String& value) { SetCatalogID(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline ColumnStatisticsTaskRun& WithCatalogID(Aws::String&& value) { SetCatalogID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline ColumnStatisticsTaskRun& WithCatalogID(const char* value) { SetCatalogID(value); return *this;}


    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline ColumnStatisticsTaskRun& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline ColumnStatisticsTaskRun& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline ColumnStatisticsTaskRun& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The percentage of rows used to generate statistics. If none is supplied, the
     * entire table will be used to generate stats.</p>
     */
    inline double GetSampleSize() const{ return m_sampleSize; }

    /**
     * <p>The percentage of rows used to generate statistics. If none is supplied, the
     * entire table will be used to generate stats.</p>
     */
    inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }

    /**
     * <p>The percentage of rows used to generate statistics. If none is supplied, the
     * entire table will be used to generate stats.</p>
     */
    inline void SetSampleSize(double value) { m_sampleSizeHasBeenSet = true; m_sampleSize = value; }

    /**
     * <p>The percentage of rows used to generate statistics. If none is supplied, the
     * entire table will be used to generate stats.</p>
     */
    inline ColumnStatisticsTaskRun& WithSampleSize(double value) { SetSampleSize(value); return *this;}


    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }

    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }

    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }

    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline ColumnStatisticsTaskRun& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline ColumnStatisticsTaskRun& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}

    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline ColumnStatisticsTaskRun& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}


    /**
     * <p>The number of workers used to generate column statistics. The job is
     * preconfigured to autoscale up to 25 instances.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }

    /**
     * <p>The number of workers used to generate column statistics. The job is
     * preconfigured to autoscale up to 25 instances.</p>
     */
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }

    /**
     * <p>The number of workers used to generate column statistics. The job is
     * preconfigured to autoscale up to 25 instances.</p>
     */
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }

    /**
     * <p>The number of workers used to generate column statistics. The job is
     * preconfigured to autoscale up to 25 instances.</p>
     */
    inline ColumnStatisticsTaskRun& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}


    /**
     * <p>The type of workers being used for generating stats. The default is
     * <code>g.1x</code>.</p>
     */
    inline const Aws::String& GetWorkerType() const{ return m_workerType; }

    /**
     * <p>The type of workers being used for generating stats. The default is
     * <code>g.1x</code>.</p>
     */
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }

    /**
     * <p>The type of workers being used for generating stats. The default is
     * <code>g.1x</code>.</p>
     */
    inline void SetWorkerType(const Aws::String& value) { m_workerTypeHasBeenSet = true; m_workerType = value; }

    /**
     * <p>The type of workers being used for generating stats. The default is
     * <code>g.1x</code>.</p>
     */
    inline void SetWorkerType(Aws::String&& value) { m_workerTypeHasBeenSet = true; m_workerType = std::move(value); }

    /**
     * <p>The type of workers being used for generating stats. The default is
     * <code>g.1x</code>.</p>
     */
    inline void SetWorkerType(const char* value) { m_workerTypeHasBeenSet = true; m_workerType.assign(value); }

    /**
     * <p>The type of workers being used for generating stats. The default is
     * <code>g.1x</code>.</p>
     */
    inline ColumnStatisticsTaskRun& WithWorkerType(const Aws::String& value) { SetWorkerType(value); return *this;}

    /**
     * <p>The type of workers being used for generating stats. The default is
     * <code>g.1x</code>.</p>
     */
    inline ColumnStatisticsTaskRun& WithWorkerType(Aws::String&& value) { SetWorkerType(std::move(value)); return *this;}

    /**
     * <p>The type of workers being used for generating stats. The default is
     * <code>g.1x</code>.</p>
     */
    inline ColumnStatisticsTaskRun& WithWorkerType(const char* value) { SetWorkerType(value); return *this;}


    /**
     * <p>The status of the task run.</p>
     */
    inline const ColumnStatisticsState& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the task run.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the task run.</p>
     */
    inline void SetStatus(const ColumnStatisticsState& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the task run.</p>
     */
    inline void SetStatus(ColumnStatisticsState&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the task run.</p>
     */
    inline ColumnStatisticsTaskRun& WithStatus(const ColumnStatisticsState& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the task run.</p>
     */
    inline ColumnStatisticsTaskRun& WithStatus(ColumnStatisticsState&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time that this task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that this task was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that this task was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that this task was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that this task was created.</p>
     */
    inline ColumnStatisticsTaskRun& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that this task was created.</p>
     */
    inline ColumnStatisticsTaskRun& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last point in time when this task was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The last point in time when this task was modified.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The last point in time when this task was modified.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The last point in time when this task was modified.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The last point in time when this task was modified.</p>
     */
    inline ColumnStatisticsTaskRun& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The last point in time when this task was modified.</p>
     */
    inline ColumnStatisticsTaskRun& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The start time of the task.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the task.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the task.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the task.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the task.</p>
     */
    inline ColumnStatisticsTaskRun& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the task.</p>
     */
    inline ColumnStatisticsTaskRun& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time of the task.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the task.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the task.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the task.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the task.</p>
     */
    inline ColumnStatisticsTaskRun& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the task.</p>
     */
    inline ColumnStatisticsTaskRun& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The error message for the job.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message for the job.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message for the job.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message for the job.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message for the job.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message for the job.</p>
     */
    inline ColumnStatisticsTaskRun& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message for the job.</p>
     */
    inline ColumnStatisticsTaskRun& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message for the job.</p>
     */
    inline ColumnStatisticsTaskRun& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The calculated DPU usage in seconds for all autoscaled workers.</p>
     */
    inline double GetDPUSeconds() const{ return m_dPUSeconds; }

    /**
     * <p>The calculated DPU usage in seconds for all autoscaled workers.</p>
     */
    inline bool DPUSecondsHasBeenSet() const { return m_dPUSecondsHasBeenSet; }

    /**
     * <p>The calculated DPU usage in seconds for all autoscaled workers.</p>
     */
    inline void SetDPUSeconds(double value) { m_dPUSecondsHasBeenSet = true; m_dPUSeconds = value; }

    /**
     * <p>The calculated DPU usage in seconds for all autoscaled workers.</p>
     */
    inline ColumnStatisticsTaskRun& WithDPUSeconds(double value) { SetDPUSeconds(value); return *this;}

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

    double m_sampleSize;
    bool m_sampleSizeHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    int m_numberOfWorkers;
    bool m_numberOfWorkersHasBeenSet = false;

    Aws::String m_workerType;
    bool m_workerTypeHasBeenSet = false;

    ColumnStatisticsState m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    double m_dPUSeconds;
    bool m_dPUSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
