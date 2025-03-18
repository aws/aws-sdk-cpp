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
   * <p>A summary of information about the specified control operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/ControlOperationSummary">AWS
   * API Reference</a></p>
   */
  class ControlOperationSummary
  {
  public:
    AWS_CONTROLTOWER_API ControlOperationSummary() = default;
    AWS_CONTROLTOWER_API ControlOperationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API ControlOperationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>controlIdentifier</code> of a control.</p>
     */
    inline const Aws::String& GetControlIdentifier() const { return m_controlIdentifier; }
    inline bool ControlIdentifierHasBeenSet() const { return m_controlIdentifierHasBeenSet; }
    template<typename ControlIdentifierT = Aws::String>
    void SetControlIdentifier(ControlIdentifierT&& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = std::forward<ControlIdentifierT>(value); }
    template<typename ControlIdentifierT = Aws::String>
    ControlOperationSummary& WithControlIdentifier(ControlIdentifierT&& value) { SetControlIdentifier(std::forward<ControlIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>controlIdentifier</code> of an enabled control.</p>
     */
    inline const Aws::String& GetEnabledControlIdentifier() const { return m_enabledControlIdentifier; }
    inline bool EnabledControlIdentifierHasBeenSet() const { return m_enabledControlIdentifierHasBeenSet; }
    template<typename EnabledControlIdentifierT = Aws::String>
    void SetEnabledControlIdentifier(EnabledControlIdentifierT&& value) { m_enabledControlIdentifierHasBeenSet = true; m_enabledControlIdentifier = std::forward<EnabledControlIdentifierT>(value); }
    template<typename EnabledControlIdentifierT = Aws::String>
    ControlOperationSummary& WithEnabledControlIdentifier(EnabledControlIdentifierT&& value) { SetEnabledControlIdentifier(std::forward<EnabledControlIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the control operation was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ControlOperationSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of a control operation.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const { return m_operationIdentifier; }
    inline bool OperationIdentifierHasBeenSet() const { return m_operationIdentifierHasBeenSet; }
    template<typename OperationIdentifierT = Aws::String>
    void SetOperationIdentifier(OperationIdentifierT&& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = std::forward<OperationIdentifierT>(value); }
    template<typename OperationIdentifierT = Aws::String>
    ControlOperationSummary& WithOperationIdentifier(OperationIdentifierT&& value) { SetOperationIdentifier(std::forward<OperationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operation.</p>
     */
    inline ControlOperationType GetOperationType() const { return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(ControlOperationType value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline ControlOperationSummary& WithOperationType(ControlOperationType value) { SetOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a control operation began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ControlOperationSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the specified control operation.</p>
     */
    inline ControlOperationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ControlOperationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ControlOperationSummary& WithStatus(ControlOperationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A speficic message displayed as part of the control status.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ControlOperationSummary& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the target of a control operation.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const { return m_targetIdentifier; }
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
    template<typename TargetIdentifierT = Aws::String>
    void SetTargetIdentifier(TargetIdentifierT&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::forward<TargetIdentifierT>(value); }
    template<typename TargetIdentifierT = Aws::String>
    ControlOperationSummary& WithTargetIdentifier(TargetIdentifierT&& value) { SetTargetIdentifier(std::forward<TargetIdentifierT>(value)); return *this;}
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
