/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kendra/model/DataSourceSyncJobStatus.h>
#include <aws/kendra/model/ErrorCode.h>
#include <aws/kendra/model/DataSourceSyncJobMetrics.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information about a data source synchronization job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DataSourceSyncJob">AWS
   * API Reference</a></p>
   */
  class DataSourceSyncJob
  {
  public:
    AWS_KENDRA_API DataSourceSyncJob() = default;
    AWS_KENDRA_API DataSourceSyncJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DataSourceSyncJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A identifier for the synchronization job.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    DataSourceSyncJob& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the synchronization job started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DataSourceSyncJob& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the synchronization job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DataSourceSyncJob& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution status of the synchronization job. When the <code>Status</code>
     * field is set to <code>SUCCEEDED</code>, the synchronization job is done. If the
     * status code is set to <code>FAILED</code>, the <code>ErrorCode</code> and
     * <code>ErrorMessage</code> fields give you the reason for the failure.</p>
     */
    inline DataSourceSyncJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DataSourceSyncJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataSourceSyncJob& WithStatus(DataSourceSyncJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    DataSourceSyncJob& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>Status</code> field is set to <code>FAILED</code>, the
     * <code>ErrorCode</code> field indicates the reason the synchronization
     * failed.</p>
     */
    inline ErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(ErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline DataSourceSyncJob& WithErrorCode(ErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline const Aws::String& GetDataSourceErrorCode() const { return m_dataSourceErrorCode; }
    inline bool DataSourceErrorCodeHasBeenSet() const { return m_dataSourceErrorCodeHasBeenSet; }
    template<typename DataSourceErrorCodeT = Aws::String>
    void SetDataSourceErrorCode(DataSourceErrorCodeT&& value) { m_dataSourceErrorCodeHasBeenSet = true; m_dataSourceErrorCode = std::forward<DataSourceErrorCodeT>(value); }
    template<typename DataSourceErrorCodeT = Aws::String>
    DataSourceSyncJob& WithDataSourceErrorCode(DataSourceErrorCodeT&& value) { SetDataSourceErrorCode(std::forward<DataSourceErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maps a batch delete document request to a specific data source sync job. This
     * is optional and should only be supplied when documents are deleted by a data
     * source connector.</p>
     */
    inline const DataSourceSyncJobMetrics& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = DataSourceSyncJobMetrics>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = DataSourceSyncJobMetrics>
    DataSourceSyncJob& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    DataSourceSyncJobStatus m_status{DataSourceSyncJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    ErrorCode m_errorCode{ErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_dataSourceErrorCode;
    bool m_dataSourceErrorCodeHasBeenSet = false;

    DataSourceSyncJobMetrics m_metrics;
    bool m_metricsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
