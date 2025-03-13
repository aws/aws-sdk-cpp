/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datapipeline/model/TaskStatus.h>
#include <utility>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for SetTaskStatus.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/SetTaskStatusInput">AWS
   * API Reference</a></p>
   */
  class SetTaskStatusRequest : public DataPipelineRequest
  {
  public:
    AWS_DATAPIPELINE_API SetTaskStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetTaskStatus"; }

    AWS_DATAPIPELINE_API Aws::String SerializePayload() const override;

    AWS_DATAPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the task assigned to the task runner. This value is provided in the
     * response for <a>PollForTask</a>.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    SetTaskStatusRequest& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>FINISHED</code>, the task successfully completed. If
     * <code>FAILED</code>, the task ended unsuccessfully. Preconditions use false.</p>
     */
    inline TaskStatus GetTaskStatus() const { return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(TaskStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline SetTaskStatusRequest& WithTaskStatus(TaskStatus value) { SetTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred during the task, this value specifies the error code.
     * This value is set on the physical attempt object. It is used to display error
     * information to the user. It should not start with string "Service_" which is
     * reserved by the system.</p>
     */
    inline const Aws::String& GetErrorId() const { return m_errorId; }
    inline bool ErrorIdHasBeenSet() const { return m_errorIdHasBeenSet; }
    template<typename ErrorIdT = Aws::String>
    void SetErrorId(ErrorIdT&& value) { m_errorIdHasBeenSet = true; m_errorId = std::forward<ErrorIdT>(value); }
    template<typename ErrorIdT = Aws::String>
    SetTaskStatusRequest& WithErrorId(ErrorIdT&& value) { SetErrorId(std::forward<ErrorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred during the task, this value specifies a text description
     * of the error. This value is set on the physical attempt object. It is used to
     * display error information to the user. The web service does not parse this
     * value.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    SetTaskStatusRequest& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred during the task, this value specifies the stack trace
     * associated with the error. This value is set on the physical attempt object. It
     * is used to display error information to the user. The web service does not parse
     * this value.</p>
     */
    inline const Aws::String& GetErrorStackTrace() const { return m_errorStackTrace; }
    inline bool ErrorStackTraceHasBeenSet() const { return m_errorStackTraceHasBeenSet; }
    template<typename ErrorStackTraceT = Aws::String>
    void SetErrorStackTrace(ErrorStackTraceT&& value) { m_errorStackTraceHasBeenSet = true; m_errorStackTrace = std::forward<ErrorStackTraceT>(value); }
    template<typename ErrorStackTraceT = Aws::String>
    SetTaskStatusRequest& WithErrorStackTrace(ErrorStackTraceT&& value) { SetErrorStackTrace(std::forward<ErrorStackTraceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    TaskStatus m_taskStatus{TaskStatus::NOT_SET};
    bool m_taskStatusHasBeenSet = false;

    Aws::String m_errorId;
    bool m_errorIdHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_errorStackTrace;
    bool m_errorStackTraceHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
