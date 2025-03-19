/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/controltower/model/ControlOperationType.h>
#include <aws/controltower/model/ControlOperationStatus.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>An operation performed by the control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/ControlOperation">AWS
   * API Reference</a></p>
   */
  class ControlOperation
  {
  public:
    AWS_CONTROLTOWER_API ControlOperation() = default;
    AWS_CONTROLTOWER_API ControlOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API ControlOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>controlIdentifier</code> of the control for the operation.</p>
     */
    inline const Aws::String& GetControlIdentifier() const { return m_controlIdentifier; }
    inline bool ControlIdentifierHasBeenSet() const { return m_controlIdentifierHasBeenSet; }
    template<typename ControlIdentifierT = Aws::String>
    void SetControlIdentifier(ControlIdentifierT&& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = std::forward<ControlIdentifierT>(value); }
    template<typename ControlIdentifierT = Aws::String>
    ControlOperation& WithControlIdentifier(ControlIdentifierT&& value) { SetControlIdentifier(std::forward<ControlIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>controlIdentifier</code> of the enabled control.</p>
     */
    inline const Aws::String& GetEnabledControlIdentifier() const { return m_enabledControlIdentifier; }
    inline bool EnabledControlIdentifierHasBeenSet() const { return m_enabledControlIdentifierHasBeenSet; }
    template<typename EnabledControlIdentifierT = Aws::String>
    void SetEnabledControlIdentifier(EnabledControlIdentifierT&& value) { m_enabledControlIdentifierHasBeenSet = true; m_enabledControlIdentifier = std::forward<EnabledControlIdentifierT>(value); }
    template<typename EnabledControlIdentifierT = Aws::String>
    ControlOperation& WithEnabledControlIdentifier(EnabledControlIdentifierT&& value) { SetEnabledControlIdentifier(std::forward<EnabledControlIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the operation finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ControlOperation& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the specified operation.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const { return m_operationIdentifier; }
    inline bool OperationIdentifierHasBeenSet() const { return m_operationIdentifierHasBeenSet; }
    template<typename OperationIdentifierT = Aws::String>
    void SetOperationIdentifier(OperationIdentifierT&& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = std::forward<OperationIdentifierT>(value); }
    template<typename OperationIdentifierT = Aws::String>
    ControlOperation& WithOperationIdentifier(OperationIdentifierT&& value) { SetOperationIdentifier(std::forward<OperationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One of <code>ENABLE_CONTROL</code> or <code>DISABLE_CONTROL</code>.</p>
     */
    inline ControlOperationType GetOperationType() const { return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(ControlOperationType value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline ControlOperation& WithOperationType(ControlOperationType value) { SetOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the operation began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ControlOperation& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One of <code>IN_PROGRESS</code>, <code>SUCEEDED</code>, or
     * <code>FAILED</code>.</p>
     */
    inline ControlOperationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ControlOperationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ControlOperation& WithStatus(ControlOperationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the operation result is <code>FAILED</code>, this string contains a
     * message explaining why the operation failed.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ControlOperation& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target upon which the control operation is working.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const { return m_targetIdentifier; }
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
    template<typename TargetIdentifierT = Aws::String>
    void SetTargetIdentifier(TargetIdentifierT&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::forward<TargetIdentifierT>(value); }
    template<typename TargetIdentifierT = Aws::String>
    ControlOperation& WithTargetIdentifier(TargetIdentifierT&& value) { SetTargetIdentifier(std::forward<TargetIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_controlIdentifier;
    bool m_controlIdentifierHasBeenSet = false;

    Aws::String m_enabledControlIdentifier;
    bool m_enabledControlIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_operationIdentifier;
    bool m_operationIdentifierHasBeenSet = false;

    ControlOperationType m_operationType{ControlOperationType::NOT_SET};
    bool m_operationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    ControlOperationStatus m_status{ControlOperationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_targetIdentifier;
    bool m_targetIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
