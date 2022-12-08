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
    AWS_KENDRA_API DataSourceSyncJob();
    AWS_KENDRA_API DataSourceSyncJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DataSourceSyncJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A identifier for the synchronization job.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>A identifier for the synchronization job.</p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p>A identifier for the synchronization job.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p>A identifier for the synchronization job.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p>A identifier for the synchronization job.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p>A identifier for the synchronization job.</p>
     */
    inline DataSourceSyncJob& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>A identifier for the synchronization job.</p>
     */
    inline DataSourceSyncJob& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>A identifier for the synchronization job.</p>
     */
    inline DataSourceSyncJob& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>The UNIX datetime that the synchronization job started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The UNIX datetime that the synchronization job started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The UNIX datetime that the synchronization job started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The UNIX datetime that the synchronization job started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The UNIX datetime that the synchronization job started.</p>
     */
    inline DataSourceSyncJob& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The UNIX datetime that the synchronization job started.</p>
     */
    inline DataSourceSyncJob& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The UNIX datetime that the synchronization job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The UNIX datetime that the synchronization job completed.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The UNIX datetime that the synchronization job completed.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The UNIX datetime that the synchronization job completed.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The UNIX datetime that the synchronization job completed.</p>
     */
    inline DataSourceSyncJob& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The UNIX datetime that the synchronization job completed.</p>
     */
    inline DataSourceSyncJob& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The execution status of the synchronization job. When the <code>Status</code>
     * field is set to <code>SUCCEEDED</code>, the synchronization job is done. If the
     * status code is set to <code>FAILED</code>, the <code>ErrorCode</code> and
     * <code>ErrorMessage</code> fields give you the reason for the failure.</p>
     */
    inline const DataSourceSyncJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The execution status of the synchronization job. When the <code>Status</code>
     * field is set to <code>SUCCEEDED</code>, the synchronization job is done. If the
     * status code is set to <code>FAILED</code>, the <code>ErrorCode</code> and
     * <code>ErrorMessage</code> fields give you the reason for the failure.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The execution status of the synchronization job. When the <code>Status</code>
     * field is set to <code>SUCCEEDED</code>, the synchronization job is done. If the
     * status code is set to <code>FAILED</code>, the <code>ErrorCode</code> and
     * <code>ErrorMessage</code> fields give you the reason for the failure.</p>
     */
    inline void SetStatus(const DataSourceSyncJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The execution status of the synchronization job. When the <code>Status</code>
     * field is set to <code>SUCCEEDED</code>, the synchronization job is done. If the
     * status code is set to <code>FAILED</code>, the <code>ErrorCode</code> and
     * <code>ErrorMessage</code> fields give you the reason for the failure.</p>
     */
    inline void SetStatus(DataSourceSyncJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The execution status of the synchronization job. When the <code>Status</code>
     * field is set to <code>SUCCEEDED</code>, the synchronization job is done. If the
     * status code is set to <code>FAILED</code>, the <code>ErrorCode</code> and
     * <code>ErrorMessage</code> fields give you the reason for the failure.</p>
     */
    inline DataSourceSyncJob& WithStatus(const DataSourceSyncJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The execution status of the synchronization job. When the <code>Status</code>
     * field is set to <code>SUCCEEDED</code>, the synchronization job is done. If the
     * status code is set to <code>FAILED</code>, the <code>ErrorCode</code> and
     * <code>ErrorMessage</code> fields give you the reason for the failure.</p>
     */
    inline DataSourceSyncJob& WithStatus(DataSourceSyncJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline DataSourceSyncJob& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline DataSourceSyncJob& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline DataSourceSyncJob& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>If the <code>Status</code> field is set to <code>FAILED</code>, the
     * <code>ErrorCode</code> field indicates the reason the synchronization
     * failed.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>If the <code>Status</code> field is set to <code>FAILED</code>, the
     * <code>ErrorCode</code> field indicates the reason the synchronization
     * failed.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>If the <code>Status</code> field is set to <code>FAILED</code>, the
     * <code>ErrorCode</code> field indicates the reason the synchronization
     * failed.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>If the <code>Status</code> field is set to <code>FAILED</code>, the
     * <code>ErrorCode</code> field indicates the reason the synchronization
     * failed.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>If the <code>Status</code> field is set to <code>FAILED</code>, the
     * <code>ErrorCode</code> field indicates the reason the synchronization
     * failed.</p>
     */
    inline DataSourceSyncJob& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>If the <code>Status</code> field is set to <code>FAILED</code>, the
     * <code>ErrorCode</code> field indicates the reason the synchronization
     * failed.</p>
     */
    inline DataSourceSyncJob& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline const Aws::String& GetDataSourceErrorCode() const{ return m_dataSourceErrorCode; }

    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline bool DataSourceErrorCodeHasBeenSet() const { return m_dataSourceErrorCodeHasBeenSet; }

    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline void SetDataSourceErrorCode(const Aws::String& value) { m_dataSourceErrorCodeHasBeenSet = true; m_dataSourceErrorCode = value; }

    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline void SetDataSourceErrorCode(Aws::String&& value) { m_dataSourceErrorCodeHasBeenSet = true; m_dataSourceErrorCode = std::move(value); }

    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline void SetDataSourceErrorCode(const char* value) { m_dataSourceErrorCodeHasBeenSet = true; m_dataSourceErrorCode.assign(value); }

    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline DataSourceSyncJob& WithDataSourceErrorCode(const Aws::String& value) { SetDataSourceErrorCode(value); return *this;}

    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline DataSourceSyncJob& WithDataSourceErrorCode(Aws::String&& value) { SetDataSourceErrorCode(std::move(value)); return *this;}

    /**
     * <p>If the reason that the synchronization failed is due to an error with the
     * underlying data source, this field contains a code that identifies the
     * error.</p>
     */
    inline DataSourceSyncJob& WithDataSourceErrorCode(const char* value) { SetDataSourceErrorCode(value); return *this;}


    /**
     * <p>Maps a batch delete document request to a specific data source sync job. This
     * is optional and should only be supplied when documents are deleted by a data
     * source connector.</p>
     */
    inline const DataSourceSyncJobMetrics& GetMetrics() const{ return m_metrics; }

    /**
     * <p>Maps a batch delete document request to a specific data source sync job. This
     * is optional and should only be supplied when documents are deleted by a data
     * source connector.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>Maps a batch delete document request to a specific data source sync job. This
     * is optional and should only be supplied when documents are deleted by a data
     * source connector.</p>
     */
    inline void SetMetrics(const DataSourceSyncJobMetrics& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>Maps a batch delete document request to a specific data source sync job. This
     * is optional and should only be supplied when documents are deleted by a data
     * source connector.</p>
     */
    inline void SetMetrics(DataSourceSyncJobMetrics&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>Maps a batch delete document request to a specific data source sync job. This
     * is optional and should only be supplied when documents are deleted by a data
     * source connector.</p>
     */
    inline DataSourceSyncJob& WithMetrics(const DataSourceSyncJobMetrics& value) { SetMetrics(value); return *this;}

    /**
     * <p>Maps a batch delete document request to a specific data source sync job. This
     * is optional and should only be supplied when documents are deleted by a data
     * source connector.</p>
     */
    inline DataSourceSyncJob& WithMetrics(DataSourceSyncJobMetrics&& value) { SetMetrics(std::move(value)); return *this;}

  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    DataSourceSyncJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_dataSourceErrorCode;
    bool m_dataSourceErrorCodeHasBeenSet = false;

    DataSourceSyncJobMetrics m_metrics;
    bool m_metricsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
