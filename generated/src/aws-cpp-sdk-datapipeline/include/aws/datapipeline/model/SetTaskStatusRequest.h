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
    AWS_DATAPIPELINE_API SetTaskStatusRequest();

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
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline SetTaskStatusRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline SetTaskStatusRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline SetTaskStatusRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>FINISHED</code>, the task successfully completed. If
     * <code>FAILED</code>, the task ended unsuccessfully. Preconditions use false.</p>
     */
    inline const TaskStatus& GetTaskStatus() const{ return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(const TaskStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline void SetTaskStatus(TaskStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }
    inline SetTaskStatusRequest& WithTaskStatus(const TaskStatus& value) { SetTaskStatus(value); return *this;}
    inline SetTaskStatusRequest& WithTaskStatus(TaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred during the task, this value specifies the error code.
     * This value is set on the physical attempt object. It is used to display error
     * information to the user. It should not start with string "Service_" which is
     * reserved by the system.</p>
     */
    inline const Aws::String& GetErrorId() const{ return m_errorId; }
    inline bool ErrorIdHasBeenSet() const { return m_errorIdHasBeenSet; }
    inline void SetErrorId(const Aws::String& value) { m_errorIdHasBeenSet = true; m_errorId = value; }
    inline void SetErrorId(Aws::String&& value) { m_errorIdHasBeenSet = true; m_errorId = std::move(value); }
    inline void SetErrorId(const char* value) { m_errorIdHasBeenSet = true; m_errorId.assign(value); }
    inline SetTaskStatusRequest& WithErrorId(const Aws::String& value) { SetErrorId(value); return *this;}
    inline SetTaskStatusRequest& WithErrorId(Aws::String&& value) { SetErrorId(std::move(value)); return *this;}
    inline SetTaskStatusRequest& WithErrorId(const char* value) { SetErrorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred during the task, this value specifies a text description
     * of the error. This value is set on the physical attempt object. It is used to
     * display error information to the user. The web service does not parse this
     * value.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline SetTaskStatusRequest& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline SetTaskStatusRequest& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline SetTaskStatusRequest& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred during the task, this value specifies the stack trace
     * associated with the error. This value is set on the physical attempt object. It
     * is used to display error information to the user. The web service does not parse
     * this value.</p>
     */
    inline const Aws::String& GetErrorStackTrace() const{ return m_errorStackTrace; }
    inline bool ErrorStackTraceHasBeenSet() const { return m_errorStackTraceHasBeenSet; }
    inline void SetErrorStackTrace(const Aws::String& value) { m_errorStackTraceHasBeenSet = true; m_errorStackTrace = value; }
    inline void SetErrorStackTrace(Aws::String&& value) { m_errorStackTraceHasBeenSet = true; m_errorStackTrace = std::move(value); }
    inline void SetErrorStackTrace(const char* value) { m_errorStackTraceHasBeenSet = true; m_errorStackTrace.assign(value); }
    inline SetTaskStatusRequest& WithErrorStackTrace(const Aws::String& value) { SetErrorStackTrace(value); return *this;}
    inline SetTaskStatusRequest& WithErrorStackTrace(Aws::String&& value) { SetErrorStackTrace(std::move(value)); return *this;}
    inline SetTaskStatusRequest& WithErrorStackTrace(const char* value) { SetErrorStackTrace(value); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    TaskStatus m_taskStatus;
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
