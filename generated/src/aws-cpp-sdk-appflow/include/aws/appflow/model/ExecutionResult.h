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
    AWS_APPFLOW_API ExecutionResult();
    AWS_APPFLOW_API ExecutionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ExecutionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Provides any error message information related to the flow run. </p>
     */
    inline const ErrorInfo& GetErrorInfo() const{ return m_errorInfo; }

    /**
     * <p> Provides any error message information related to the flow run. </p>
     */
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }

    /**
     * <p> Provides any error message information related to the flow run. </p>
     */
    inline void SetErrorInfo(const ErrorInfo& value) { m_errorInfoHasBeenSet = true; m_errorInfo = value; }

    /**
     * <p> Provides any error message information related to the flow run. </p>
     */
    inline void SetErrorInfo(ErrorInfo&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::move(value); }

    /**
     * <p> Provides any error message information related to the flow run. </p>
     */
    inline ExecutionResult& WithErrorInfo(const ErrorInfo& value) { SetErrorInfo(value); return *this;}

    /**
     * <p> Provides any error message information related to the flow run. </p>
     */
    inline ExecutionResult& WithErrorInfo(ErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}


    /**
     * <p> The total number of bytes processed by the flow run. </p>
     */
    inline long long GetBytesProcessed() const{ return m_bytesProcessed; }

    /**
     * <p> The total number of bytes processed by the flow run. </p>
     */
    inline bool BytesProcessedHasBeenSet() const { return m_bytesProcessedHasBeenSet; }

    /**
     * <p> The total number of bytes processed by the flow run. </p>
     */
    inline void SetBytesProcessed(long long value) { m_bytesProcessedHasBeenSet = true; m_bytesProcessed = value; }

    /**
     * <p> The total number of bytes processed by the flow run. </p>
     */
    inline ExecutionResult& WithBytesProcessed(long long value) { SetBytesProcessed(value); return *this;}


    /**
     * <p> The total number of bytes written as a result of the flow run. </p>
     */
    inline long long GetBytesWritten() const{ return m_bytesWritten; }

    /**
     * <p> The total number of bytes written as a result of the flow run. </p>
     */
    inline bool BytesWrittenHasBeenSet() const { return m_bytesWrittenHasBeenSet; }

    /**
     * <p> The total number of bytes written as a result of the flow run. </p>
     */
    inline void SetBytesWritten(long long value) { m_bytesWrittenHasBeenSet = true; m_bytesWritten = value; }

    /**
     * <p> The total number of bytes written as a result of the flow run. </p>
     */
    inline ExecutionResult& WithBytesWritten(long long value) { SetBytesWritten(value); return *this;}


    /**
     * <p> The number of records processed in the flow run. </p>
     */
    inline long long GetRecordsProcessed() const{ return m_recordsProcessed; }

    /**
     * <p> The number of records processed in the flow run. </p>
     */
    inline bool RecordsProcessedHasBeenSet() const { return m_recordsProcessedHasBeenSet; }

    /**
     * <p> The number of records processed in the flow run. </p>
     */
    inline void SetRecordsProcessed(long long value) { m_recordsProcessedHasBeenSet = true; m_recordsProcessed = value; }

    /**
     * <p> The number of records processed in the flow run. </p>
     */
    inline ExecutionResult& WithRecordsProcessed(long long value) { SetRecordsProcessed(value); return *this;}

  private:

    ErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet = false;

    long long m_bytesProcessed;
    bool m_bytesProcessedHasBeenSet = false;

    long long m_bytesWritten;
    bool m_bytesWrittenHasBeenSet = false;

    long long m_recordsProcessed;
    bool m_recordsProcessedHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
