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
    AWS_GLUE_API ExecutionAttempt() = default;
    AWS_GLUE_API ExecutionAttempt(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ExecutionAttempt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the last column statistics task run.</p>
     */
    inline ExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ExecutionAttempt& WithStatus(ExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A task run ID for the last column statistics task run.</p>
     */
    inline const Aws::String& GetColumnStatisticsTaskRunId() const { return m_columnStatisticsTaskRunId; }
    inline bool ColumnStatisticsTaskRunIdHasBeenSet() const { return m_columnStatisticsTaskRunIdHasBeenSet; }
    template<typename ColumnStatisticsTaskRunIdT = Aws::String>
    void SetColumnStatisticsTaskRunId(ColumnStatisticsTaskRunIdT&& value) { m_columnStatisticsTaskRunIdHasBeenSet = true; m_columnStatisticsTaskRunId = std::forward<ColumnStatisticsTaskRunIdT>(value); }
    template<typename ColumnStatisticsTaskRunIdT = Aws::String>
    ExecutionAttempt& WithColumnStatisticsTaskRunId(ColumnStatisticsTaskRunIdT&& value) { SetColumnStatisticsTaskRunId(std::forward<ColumnStatisticsTaskRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp when the last column statistics task run occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionTimestamp() const { return m_executionTimestamp; }
    inline bool ExecutionTimestampHasBeenSet() const { return m_executionTimestampHasBeenSet; }
    template<typename ExecutionTimestampT = Aws::Utils::DateTime>
    void SetExecutionTimestamp(ExecutionTimestampT&& value) { m_executionTimestampHasBeenSet = true; m_executionTimestamp = std::forward<ExecutionTimestampT>(value); }
    template<typename ExecutionTimestampT = Aws::Utils::DateTime>
    ExecutionAttempt& WithExecutionTimestamp(ExecutionTimestampT&& value) { SetExecutionTimestamp(std::forward<ExecutionTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message associated with the last column statistics task run.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ExecutionAttempt& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    ExecutionStatus m_status{ExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_columnStatisticsTaskRunId;
    bool m_columnStatisticsTaskRunIdHasBeenSet = false;

    Aws::Utils::DateTime m_executionTimestamp{};
    bool m_executionTimestampHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
