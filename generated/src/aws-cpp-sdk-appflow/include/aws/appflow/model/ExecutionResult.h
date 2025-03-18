/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/ErrorInfo.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> Specifies the end result of the flow run. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ExecutionResult">AWS
   * API Reference</a></p>
   */
  class ExecutionResult
  {
  public:
    AWS_APPFLOW_API ExecutionResult() = default;
    AWS_APPFLOW_API ExecutionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ExecutionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Provides any error message information related to the flow run. </p>
     */
    inline const ErrorInfo& GetErrorInfo() const { return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    template<typename ErrorInfoT = ErrorInfo>
    void SetErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::forward<ErrorInfoT>(value); }
    template<typename ErrorInfoT = ErrorInfo>
    ExecutionResult& WithErrorInfo(ErrorInfoT&& value) { SetErrorInfo(std::forward<ErrorInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of bytes processed by the flow run. </p>
     */
    inline long long GetBytesProcessed() const { return m_bytesProcessed; }
    inline bool BytesProcessedHasBeenSet() const { return m_bytesProcessedHasBeenSet; }
    inline void SetBytesProcessed(long long value) { m_bytesProcessedHasBeenSet = true; m_bytesProcessed = value; }
    inline ExecutionResult& WithBytesProcessed(long long value) { SetBytesProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of bytes written as a result of the flow run. </p>
     */
    inline long long GetBytesWritten() const { return m_bytesWritten; }
    inline bool BytesWrittenHasBeenSet() const { return m_bytesWrittenHasBeenSet; }
    inline void SetBytesWritten(long long value) { m_bytesWrittenHasBeenSet = true; m_bytesWritten = value; }
    inline ExecutionResult& WithBytesWritten(long long value) { SetBytesWritten(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of records processed in the flow run. </p>
     */
    inline long long GetRecordsProcessed() const { return m_recordsProcessed; }
    inline bool RecordsProcessedHasBeenSet() const { return m_recordsProcessedHasBeenSet; }
    inline void SetRecordsProcessed(long long value) { m_recordsProcessedHasBeenSet = true; m_recordsProcessed = value; }
    inline ExecutionResult& WithRecordsProcessed(long long value) { SetRecordsProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of processes that Amazon AppFlow ran at the same time when it
     * retrieved your data.</p>
     */
    inline long long GetNumParallelProcesses() const { return m_numParallelProcesses; }
    inline bool NumParallelProcessesHasBeenSet() const { return m_numParallelProcessesHasBeenSet; }
    inline void SetNumParallelProcesses(long long value) { m_numParallelProcessesHasBeenSet = true; m_numParallelProcesses = value; }
    inline ExecutionResult& WithNumParallelProcesses(long long value) { SetNumParallelProcesses(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records that Amazon AppFlow receives in each page of
     * the response from your SAP application.</p>
     */
    inline long long GetMaxPageSize() const { return m_maxPageSize; }
    inline bool MaxPageSizeHasBeenSet() const { return m_maxPageSizeHasBeenSet; }
    inline void SetMaxPageSize(long long value) { m_maxPageSizeHasBeenSet = true; m_maxPageSize = value; }
    inline ExecutionResult& WithMaxPageSize(long long value) { SetMaxPageSize(value); return *this;}
    ///@}
  private:

    ErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet = false;

    long long m_bytesProcessed{0};
    bool m_bytesProcessedHasBeenSet = false;

    long long m_bytesWritten{0};
    bool m_bytesWrittenHasBeenSet = false;

    long long m_recordsProcessed{0};
    bool m_recordsProcessedHasBeenSet = false;

    long long m_numParallelProcesses{0};
    bool m_numParallelProcessesHasBeenSet = false;

    long long m_maxPageSize{0};
    bool m_maxPageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
