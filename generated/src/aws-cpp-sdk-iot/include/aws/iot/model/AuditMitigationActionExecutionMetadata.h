/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditMitigationActionsExecutionStatus.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Returned by ListAuditMitigationActionsTask, this object contains information
   * that describes a mitigation action that has been started.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuditMitigationActionExecutionMetadata">AWS
   * API Reference</a></p>
   */
  class AuditMitigationActionExecutionMetadata
  {
  public:
    AWS_IOT_API AuditMitigationActionExecutionMetadata();
    AWS_IOT_API AuditMitigationActionExecutionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuditMitigationActionExecutionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the task that applies the mitigation action.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline AuditMitigationActionExecutionMetadata& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the findings to which the task and associated
     * mitigation action are applied.</p>
     */
    inline const Aws::String& GetFindingId() const{ return m_findingId; }
    inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
    inline void SetFindingId(const Aws::String& value) { m_findingIdHasBeenSet = true; m_findingId = value; }
    inline void SetFindingId(Aws::String&& value) { m_findingIdHasBeenSet = true; m_findingId = std::move(value); }
    inline void SetFindingId(const char* value) { m_findingIdHasBeenSet = true; m_findingId.assign(value); }
    inline AuditMitigationActionExecutionMetadata& WithFindingId(const Aws::String& value) { SetFindingId(value); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithFindingId(Aws::String&& value) { SetFindingId(std::move(value)); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithFindingId(const char* value) { SetFindingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the mitigation action being applied by the task.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }
    inline AuditMitigationActionExecutionMetadata& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithActionName(const char* value) { SetActionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the mitigation action being applied by the
     * task.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }
    inline AuditMitigationActionExecutionMetadata& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithActionId(const char* value) { SetActionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the task being executed.</p>
     */
    inline const AuditMitigationActionsExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AuditMitigationActionsExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AuditMitigationActionsExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AuditMitigationActionExecutionMetadata& WithStatus(const AuditMitigationActionsExecutionStatus& value) { SetStatus(value); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithStatus(AuditMitigationActionsExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the task was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline AuditMitigationActionExecutionMetadata& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the task was completed or canceled. Blank if the task
     * is still running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline AuditMitigationActionExecutionMetadata& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, the code that indicates which type of error
     * occurred.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline AuditMitigationActionExecutionMetadata& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, a message that describes the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline AuditMitigationActionExecutionMetadata& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline AuditMitigationActionExecutionMetadata& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_findingId;
    bool m_findingIdHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    AuditMitigationActionsExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
