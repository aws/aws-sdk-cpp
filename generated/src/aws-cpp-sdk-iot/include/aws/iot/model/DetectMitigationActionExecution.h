/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/DetectMitigationActionExecutionStatus.h>
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
   * <p> Describes which mitigation actions should be executed. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetectMitigationActionExecution">AWS
   * API Reference</a></p>
   */
  class DetectMitigationActionExecution
  {
  public:
    AWS_IOT_API DetectMitigationActionExecution() = default;
    AWS_IOT_API DetectMitigationActionExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DetectMitigationActionExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the task. </p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    DetectMitigationActionExecution& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline const Aws::String& GetViolationId() const { return m_violationId; }
    inline bool ViolationIdHasBeenSet() const { return m_violationIdHasBeenSet; }
    template<typename ViolationIdT = Aws::String>
    void SetViolationId(ViolationIdT&& value) { m_violationIdHasBeenSet = true; m_violationId = std::forward<ViolationIdT>(value); }
    template<typename ViolationIdT = Aws::String>
    DetectMitigationActionExecution& WithViolationId(ViolationIdT&& value) { SetViolationId(std::forward<ViolationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The friendly name that uniquely identifies the mitigation action. </p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    DetectMitigationActionExecution& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the thing. </p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    DetectMitigationActionExecution& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date a mitigation action was started. </p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStartDate() const { return m_executionStartDate; }
    inline bool ExecutionStartDateHasBeenSet() const { return m_executionStartDateHasBeenSet; }
    template<typename ExecutionStartDateT = Aws::Utils::DateTime>
    void SetExecutionStartDate(ExecutionStartDateT&& value) { m_executionStartDateHasBeenSet = true; m_executionStartDate = std::forward<ExecutionStartDateT>(value); }
    template<typename ExecutionStartDateT = Aws::Utils::DateTime>
    DetectMitigationActionExecution& WithExecutionStartDate(ExecutionStartDateT&& value) { SetExecutionStartDate(std::forward<ExecutionStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date a mitigation action ended. </p>
     */
    inline const Aws::Utils::DateTime& GetExecutionEndDate() const { return m_executionEndDate; }
    inline bool ExecutionEndDateHasBeenSet() const { return m_executionEndDateHasBeenSet; }
    template<typename ExecutionEndDateT = Aws::Utils::DateTime>
    void SetExecutionEndDate(ExecutionEndDateT&& value) { m_executionEndDateHasBeenSet = true; m_executionEndDate = std::forward<ExecutionEndDateT>(value); }
    template<typename ExecutionEndDateT = Aws::Utils::DateTime>
    DetectMitigationActionExecution& WithExecutionEndDate(ExecutionEndDateT&& value) { SetExecutionEndDate(std::forward<ExecutionEndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of a mitigation action. </p>
     */
    inline DetectMitigationActionExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DetectMitigationActionExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DetectMitigationActionExecution& WithStatus(DetectMitigationActionExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error code of a mitigation action. </p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    DetectMitigationActionExecution& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The message of a mitigation action. </p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DetectMitigationActionExecution& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_violationId;
    bool m_violationIdHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::Utils::DateTime m_executionStartDate{};
    bool m_executionStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_executionEndDate{};
    bool m_executionEndDateHasBeenSet = false;

    DetectMitigationActionExecutionStatus m_status{DetectMitigationActionExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
