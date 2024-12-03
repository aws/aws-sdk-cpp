/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A run attempt for a column statistics task run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ExecutionAttempt">AWS
   * API Reference</a></p>
   */
  class ExecutionAttempt
  {
  public:
    AWS_GLUE_API ExecutionAttempt();
    AWS_GLUE_API ExecutionAttempt(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ExecutionAttempt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the last column statistics task run.</p>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ExecutionAttempt& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}
    inline ExecutionAttempt& WithStatus(ExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A task run ID for the last column statistics task run.</p>
     */
    inline const Aws::String& GetColumnStatisticsTaskRunId() const{ return m_columnStatisticsTaskRunId; }
    inline bool ColumnStatisticsTaskRunIdHasBeenSet() const { return m_columnStatisticsTaskRunIdHasBeenSet; }
    inline void SetColumnStatisticsTaskRunId(const Aws::String& value) { m_columnStatisticsTaskRunIdHasBeenSet = true; m_columnStatisticsTaskRunId = value; }
    inline void SetColumnStatisticsTaskRunId(Aws::String&& value) { m_columnStatisticsTaskRunIdHasBeenSet = true; m_columnStatisticsTaskRunId = std::move(value); }
    inline void SetColumnStatisticsTaskRunId(const char* value) { m_columnStatisticsTaskRunIdHasBeenSet = true; m_columnStatisticsTaskRunId.assign(value); }
    inline ExecutionAttempt& WithColumnStatisticsTaskRunId(const Aws::String& value) { SetColumnStatisticsTaskRunId(value); return *this;}
    inline ExecutionAttempt& WithColumnStatisticsTaskRunId(Aws::String&& value) { SetColumnStatisticsTaskRunId(std::move(value)); return *this;}
    inline ExecutionAttempt& WithColumnStatisticsTaskRunId(const char* value) { SetColumnStatisticsTaskRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp when the last column statistics task run occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionTimestamp() const{ return m_executionTimestamp; }
    inline bool ExecutionTimestampHasBeenSet() const { return m_executionTimestampHasBeenSet; }
    inline void SetExecutionTimestamp(const Aws::Utils::DateTime& value) { m_executionTimestampHasBeenSet = true; m_executionTimestamp = value; }
    inline void SetExecutionTimestamp(Aws::Utils::DateTime&& value) { m_executionTimestampHasBeenSet = true; m_executionTimestamp = std::move(value); }
    inline ExecutionAttempt& WithExecutionTimestamp(const Aws::Utils::DateTime& value) { SetExecutionTimestamp(value); return *this;}
    inline ExecutionAttempt& WithExecutionTimestamp(Aws::Utils::DateTime&& value) { SetExecutionTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message associated with the last column statistics task run.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline ExecutionAttempt& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline ExecutionAttempt& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline ExecutionAttempt& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}
  private:

    ExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_columnStatisticsTaskRunId;
    bool m_columnStatisticsTaskRunIdHasBeenSet = false;

    Aws::Utils::DateTime m_executionTimestamp;
    bool m_executionTimestampHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
