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
    AWS_IOT_API DetectMitigationActionExecution();
    AWS_IOT_API DetectMitigationActionExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DetectMitigationActionExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier of the task. </p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline DetectMitigationActionExecution& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline DetectMitigationActionExecution& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline DetectMitigationActionExecution& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline const Aws::String& GetViolationId() const{ return m_violationId; }

    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline bool ViolationIdHasBeenSet() const { return m_violationIdHasBeenSet; }

    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline void SetViolationId(const Aws::String& value) { m_violationIdHasBeenSet = true; m_violationId = value; }

    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline void SetViolationId(Aws::String&& value) { m_violationIdHasBeenSet = true; m_violationId = std::move(value); }

    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline void SetViolationId(const char* value) { m_violationIdHasBeenSet = true; m_violationId.assign(value); }

    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline DetectMitigationActionExecution& WithViolationId(const Aws::String& value) { SetViolationId(value); return *this;}

    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline DetectMitigationActionExecution& WithViolationId(Aws::String&& value) { SetViolationId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline DetectMitigationActionExecution& WithViolationId(const char* value) { SetViolationId(value); return *this;}


    /**
     * <p> The friendly name that uniquely identifies the mitigation action. </p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p> The friendly name that uniquely identifies the mitigation action. </p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p> The friendly name that uniquely identifies the mitigation action. </p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p> The friendly name that uniquely identifies the mitigation action. </p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p> The friendly name that uniquely identifies the mitigation action. </p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p> The friendly name that uniquely identifies the mitigation action. </p>
     */
    inline DetectMitigationActionExecution& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p> The friendly name that uniquely identifies the mitigation action. </p>
     */
    inline DetectMitigationActionExecution& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p> The friendly name that uniquely identifies the mitigation action. </p>
     */
    inline DetectMitigationActionExecution& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p> The name of the thing. </p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p> The name of the thing. </p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p> The name of the thing. </p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p> The name of the thing. </p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p> The name of the thing. </p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p> The name of the thing. </p>
     */
    inline DetectMitigationActionExecution& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p> The name of the thing. </p>
     */
    inline DetectMitigationActionExecution& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p> The name of the thing. </p>
     */
    inline DetectMitigationActionExecution& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p> The date a mitigation action was started. </p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStartDate() const{ return m_executionStartDate; }

    /**
     * <p> The date a mitigation action was started. </p>
     */
    inline bool ExecutionStartDateHasBeenSet() const { return m_executionStartDateHasBeenSet; }

    /**
     * <p> The date a mitigation action was started. </p>
     */
    inline void SetExecutionStartDate(const Aws::Utils::DateTime& value) { m_executionStartDateHasBeenSet = true; m_executionStartDate = value; }

    /**
     * <p> The date a mitigation action was started. </p>
     */
    inline void SetExecutionStartDate(Aws::Utils::DateTime&& value) { m_executionStartDateHasBeenSet = true; m_executionStartDate = std::move(value); }

    /**
     * <p> The date a mitigation action was started. </p>
     */
    inline DetectMitigationActionExecution& WithExecutionStartDate(const Aws::Utils::DateTime& value) { SetExecutionStartDate(value); return *this;}

    /**
     * <p> The date a mitigation action was started. </p>
     */
    inline DetectMitigationActionExecution& WithExecutionStartDate(Aws::Utils::DateTime&& value) { SetExecutionStartDate(std::move(value)); return *this;}


    /**
     * <p> The date a mitigation action ended. </p>
     */
    inline const Aws::Utils::DateTime& GetExecutionEndDate() const{ return m_executionEndDate; }

    /**
     * <p> The date a mitigation action ended. </p>
     */
    inline bool ExecutionEndDateHasBeenSet() const { return m_executionEndDateHasBeenSet; }

    /**
     * <p> The date a mitigation action ended. </p>
     */
    inline void SetExecutionEndDate(const Aws::Utils::DateTime& value) { m_executionEndDateHasBeenSet = true; m_executionEndDate = value; }

    /**
     * <p> The date a mitigation action ended. </p>
     */
    inline void SetExecutionEndDate(Aws::Utils::DateTime&& value) { m_executionEndDateHasBeenSet = true; m_executionEndDate = std::move(value); }

    /**
     * <p> The date a mitigation action ended. </p>
     */
    inline DetectMitigationActionExecution& WithExecutionEndDate(const Aws::Utils::DateTime& value) { SetExecutionEndDate(value); return *this;}

    /**
     * <p> The date a mitigation action ended. </p>
     */
    inline DetectMitigationActionExecution& WithExecutionEndDate(Aws::Utils::DateTime&& value) { SetExecutionEndDate(std::move(value)); return *this;}


    /**
     * <p> The status of a mitigation action. </p>
     */
    inline const DetectMitigationActionExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of a mitigation action. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of a mitigation action. </p>
     */
    inline void SetStatus(const DetectMitigationActionExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of a mitigation action. </p>
     */
    inline void SetStatus(DetectMitigationActionExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of a mitigation action. </p>
     */
    inline DetectMitigationActionExecution& WithStatus(const DetectMitigationActionExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of a mitigation action. </p>
     */
    inline DetectMitigationActionExecution& WithStatus(DetectMitigationActionExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The error code of a mitigation action. </p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p> The error code of a mitigation action. </p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p> The error code of a mitigation action. </p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p> The error code of a mitigation action. </p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p> The error code of a mitigation action. </p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p> The error code of a mitigation action. </p>
     */
    inline DetectMitigationActionExecution& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p> The error code of a mitigation action. </p>
     */
    inline DetectMitigationActionExecution& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p> The error code of a mitigation action. </p>
     */
    inline DetectMitigationActionExecution& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p> The message of a mitigation action. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p> The message of a mitigation action. </p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p> The message of a mitigation action. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p> The message of a mitigation action. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p> The message of a mitigation action. </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p> The message of a mitigation action. </p>
     */
    inline DetectMitigationActionExecution& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p> The message of a mitigation action. </p>
     */
    inline DetectMitigationActionExecution& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p> The message of a mitigation action. </p>
     */
    inline DetectMitigationActionExecution& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_violationId;
    bool m_violationIdHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::Utils::DateTime m_executionStartDate;
    bool m_executionStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_executionEndDate;
    bool m_executionEndDateHasBeenSet = false;

    DetectMitigationActionExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
