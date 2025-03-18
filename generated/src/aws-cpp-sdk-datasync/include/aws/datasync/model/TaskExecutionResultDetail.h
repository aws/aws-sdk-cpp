/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/PhaseStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Provides detailed information about the result of your DataSync task
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TaskExecutionResultDetail">AWS
   * API Reference</a></p>
   */
  class TaskExecutionResultDetail
  {
  public:
    AWS_DATASYNC_API TaskExecutionResultDetail() = default;
    AWS_DATASYNC_API TaskExecutionResultDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API TaskExecutionResultDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time in milliseconds that your task execution was in the
     * <code>PREPARING</code> step. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#understand-task-execution-statuses">Task
     * execution statuses</a>.</p> <p>For Enhanced mode tasks, the value is always
     * <code>0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/how-datasync-transfer-works.html#how-datasync-prepares">How
     * DataSync prepares your data transfer</a>.</p>
     */
    inline long long GetPrepareDuration() const { return m_prepareDuration; }
    inline bool PrepareDurationHasBeenSet() const { return m_prepareDurationHasBeenSet; }
    inline void SetPrepareDuration(long long value) { m_prepareDurationHasBeenSet = true; m_prepareDuration = value; }
    inline TaskExecutionResultDetail& WithPrepareDuration(long long value) { SetPrepareDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the <code>PREPARING</code> step for your task execution. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#understand-task-execution-statuses">Task
     * execution statuses</a>.</p>
     */
    inline PhaseStatus GetPrepareStatus() const { return m_prepareStatus; }
    inline bool PrepareStatusHasBeenSet() const { return m_prepareStatusHasBeenSet; }
    inline void SetPrepareStatus(PhaseStatus value) { m_prepareStatusHasBeenSet = true; m_prepareStatus = value; }
    inline TaskExecutionResultDetail& WithPrepareStatus(PhaseStatus value) { SetPrepareStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in milliseconds that your task execution ran.</p>
     */
    inline long long GetTotalDuration() const { return m_totalDuration; }
    inline bool TotalDurationHasBeenSet() const { return m_totalDurationHasBeenSet; }
    inline void SetTotalDuration(long long value) { m_totalDurationHasBeenSet = true; m_totalDuration = value; }
    inline TaskExecutionResultDetail& WithTotalDuration(long long value) { SetTotalDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in milliseconds that your task execution was in the
     * <code>TRANSFERRING</code> step. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#understand-task-execution-statuses">Task
     * execution statuses</a>.</p> <p>For Enhanced mode tasks, the value is always
     * <code>0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/how-datasync-transfer-works.html#how-datasync-transfers">How
     * DataSync transfers your data</a>.</p>
     */
    inline long long GetTransferDuration() const { return m_transferDuration; }
    inline bool TransferDurationHasBeenSet() const { return m_transferDurationHasBeenSet; }
    inline void SetTransferDuration(long long value) { m_transferDurationHasBeenSet = true; m_transferDuration = value; }
    inline TaskExecutionResultDetail& WithTransferDuration(long long value) { SetTransferDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the <code>TRANSFERRING</code> step for your task execution. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#understand-task-execution-statuses">Task
     * execution statuses</a>.</p>
     */
    inline PhaseStatus GetTransferStatus() const { return m_transferStatus; }
    inline bool TransferStatusHasBeenSet() const { return m_transferStatusHasBeenSet; }
    inline void SetTransferStatus(PhaseStatus value) { m_transferStatusHasBeenSet = true; m_transferStatus = value; }
    inline TaskExecutionResultDetail& WithTransferStatus(PhaseStatus value) { SetTransferStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in milliseconds that your task execution was in the
     * <code>VERIFYING</code> step. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#understand-task-execution-statuses">Task
     * execution statuses</a>.</p> <p>For Enhanced mode tasks, the value is always
     * <code>0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/how-datasync-transfer-works.html#how-verifying-works">How
     * DataSync verifies your data's integrity</a>.</p>
     */
    inline long long GetVerifyDuration() const { return m_verifyDuration; }
    inline bool VerifyDurationHasBeenSet() const { return m_verifyDurationHasBeenSet; }
    inline void SetVerifyDuration(long long value) { m_verifyDurationHasBeenSet = true; m_verifyDuration = value; }
    inline TaskExecutionResultDetail& WithVerifyDuration(long long value) { SetVerifyDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the <code>VERIFYING</code> step for your task execution. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#understand-task-execution-statuses">Task
     * execution statuses</a>.</p>
     */
    inline PhaseStatus GetVerifyStatus() const { return m_verifyStatus; }
    inline bool VerifyStatusHasBeenSet() const { return m_verifyStatusHasBeenSet; }
    inline void SetVerifyStatus(PhaseStatus value) { m_verifyStatusHasBeenSet = true; m_verifyStatus = value; }
    inline TaskExecutionResultDetail& WithVerifyStatus(PhaseStatus value) { SetVerifyStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error that DataSync encountered during your task execution. You can use
     * this information to help <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-locations-tasks.html">troubleshoot
     * issues</a>.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    TaskExecutionResultDetail& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed description of an error that DataSync encountered during your
     * task execution. You can use this information to help <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-locations-tasks.html">troubleshoot
     * issues</a>. </p>
     */
    inline const Aws::String& GetErrorDetail() const { return m_errorDetail; }
    inline bool ErrorDetailHasBeenSet() const { return m_errorDetailHasBeenSet; }
    template<typename ErrorDetailT = Aws::String>
    void SetErrorDetail(ErrorDetailT&& value) { m_errorDetailHasBeenSet = true; m_errorDetail = std::forward<ErrorDetailT>(value); }
    template<typename ErrorDetailT = Aws::String>
    TaskExecutionResultDetail& WithErrorDetail(ErrorDetailT&& value) { SetErrorDetail(std::forward<ErrorDetailT>(value)); return *this;}
    ///@}
  private:

    long long m_prepareDuration{0};
    bool m_prepareDurationHasBeenSet = false;

    PhaseStatus m_prepareStatus{PhaseStatus::NOT_SET};
    bool m_prepareStatusHasBeenSet = false;

    long long m_totalDuration{0};
    bool m_totalDurationHasBeenSet = false;

    long long m_transferDuration{0};
    bool m_transferDurationHasBeenSet = false;

    PhaseStatus m_transferStatus{PhaseStatus::NOT_SET};
    bool m_transferStatusHasBeenSet = false;

    long long m_verifyDuration{0};
    bool m_verifyDurationHasBeenSet = false;

    PhaseStatus m_verifyStatus{PhaseStatus::NOT_SET};
    bool m_verifyStatusHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorDetail;
    bool m_errorDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
