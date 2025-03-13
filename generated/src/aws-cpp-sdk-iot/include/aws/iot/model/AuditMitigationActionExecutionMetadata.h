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
    AWS_IOT_API AuditMitigationActionExecutionMetadata() = default;
    AWS_IOT_API AuditMitigationActionExecutionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuditMitigationActionExecutionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the task that applies the mitigation action.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    AuditMitigationActionExecutionMetadata& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the findings to which the task and associated
     * mitigation action are applied.</p>
     */
    inline const Aws::String& GetFindingId() const { return m_findingId; }
    inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
    template<typename FindingIdT = Aws::String>
    void SetFindingId(FindingIdT&& value) { m_findingIdHasBeenSet = true; m_findingId = std::forward<FindingIdT>(value); }
    template<typename FindingIdT = Aws::String>
    AuditMitigationActionExecutionMetadata& WithFindingId(FindingIdT&& value) { SetFindingId(std::forward<FindingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the mitigation action being applied by the task.</p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    AuditMitigationActionExecutionMetadata& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the mitigation action being applied by the
     * task.</p>
     */
    inline const Aws::String& GetActionId() const { return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    AuditMitigationActionExecutionMetadata& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the task being executed.</p>
     */
    inline AuditMitigationActionsExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AuditMitigationActionsExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AuditMitigationActionExecutionMetadata& WithStatus(AuditMitigationActionsExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the task was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    AuditMitigationActionExecutionMetadata& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the task was completed or canceled. Blank if the task
     * is still running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    AuditMitigationActionExecutionMetadata& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, the code that indicates which type of error
     * occurred.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    AuditMitigationActionExecutionMetadata& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, a message that describes the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AuditMitigationActionExecutionMetadata& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
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

    AuditMitigationActionsExecutionStatus m_status{AuditMitigationActionsExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
