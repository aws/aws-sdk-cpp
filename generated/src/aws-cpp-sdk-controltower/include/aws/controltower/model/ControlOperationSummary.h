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
    AWS_CONTROLTOWER_API ControlOperationSummary();
    AWS_CONTROLTOWER_API ControlOperationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API ControlOperationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>controlIdentifier</code> of a control.</p>
     */
    inline const Aws::String& GetControlIdentifier() const{ return m_controlIdentifier; }
    inline bool ControlIdentifierHasBeenSet() const { return m_controlIdentifierHasBeenSet; }
    inline void SetControlIdentifier(const Aws::String& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = value; }
    inline void SetControlIdentifier(Aws::String&& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = std::move(value); }
    inline void SetControlIdentifier(const char* value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier.assign(value); }
    inline ControlOperationSummary& WithControlIdentifier(const Aws::String& value) { SetControlIdentifier(value); return *this;}
    inline ControlOperationSummary& WithControlIdentifier(Aws::String&& value) { SetControlIdentifier(std::move(value)); return *this;}
    inline ControlOperationSummary& WithControlIdentifier(const char* value) { SetControlIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>controlIdentifier</code> of an enabled control.</p>
     */
    inline const Aws::String& GetEnabledControlIdentifier() const{ return m_enabledControlIdentifier; }
    inline bool EnabledControlIdentifierHasBeenSet() const { return m_enabledControlIdentifierHasBeenSet; }
    inline void SetEnabledControlIdentifier(const Aws::String& value) { m_enabledControlIdentifierHasBeenSet = true; m_enabledControlIdentifier = value; }
    inline void SetEnabledControlIdentifier(Aws::String&& value) { m_enabledControlIdentifierHasBeenSet = true; m_enabledControlIdentifier = std::move(value); }
    inline void SetEnabledControlIdentifier(const char* value) { m_enabledControlIdentifierHasBeenSet = true; m_enabledControlIdentifier.assign(value); }
    inline ControlOperationSummary& WithEnabledControlIdentifier(const Aws::String& value) { SetEnabledControlIdentifier(value); return *this;}
    inline ControlOperationSummary& WithEnabledControlIdentifier(Aws::String&& value) { SetEnabledControlIdentifier(std::move(value)); return *this;}
    inline ControlOperationSummary& WithEnabledControlIdentifier(const char* value) { SetEnabledControlIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the control operation was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ControlOperationSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ControlOperationSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of a control operation.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const{ return m_operationIdentifier; }
    inline bool OperationIdentifierHasBeenSet() const { return m_operationIdentifierHasBeenSet; }
    inline void SetOperationIdentifier(const Aws::String& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = value; }
    inline void SetOperationIdentifier(Aws::String&& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = std::move(value); }
    inline void SetOperationIdentifier(const char* value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier.assign(value); }
    inline ControlOperationSummary& WithOperationIdentifier(const Aws::String& value) { SetOperationIdentifier(value); return *this;}
    inline ControlOperationSummary& WithOperationIdentifier(Aws::String&& value) { SetOperationIdentifier(std::move(value)); return *this;}
    inline ControlOperationSummary& WithOperationIdentifier(const char* value) { SetOperationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operation.</p>
     */
    inline const ControlOperationType& GetOperationType() const{ return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(const ControlOperationType& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline void SetOperationType(ControlOperationType&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }
    inline ControlOperationSummary& WithOperationType(const ControlOperationType& value) { SetOperationType(value); return *this;}
    inline ControlOperationSummary& WithOperationType(ControlOperationType&& value) { SetOperationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a control operation began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ControlOperationSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ControlOperationSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the specified control operation.</p>
     */
    inline const ControlOperationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ControlOperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ControlOperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ControlOperationSummary& WithStatus(const ControlOperationStatus& value) { SetStatus(value); return *this;}
    inline ControlOperationSummary& WithStatus(ControlOperationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A speficic message displayed as part of the control status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ControlOperationSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ControlOperationSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ControlOperationSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the target of a control operation.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const{ return m_targetIdentifier; }
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
    inline void SetTargetIdentifier(const Aws::String& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = value; }
    inline void SetTargetIdentifier(Aws::String&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::move(value); }
    inline void SetTargetIdentifier(const char* value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier.assign(value); }
    inline ControlOperationSummary& WithTargetIdentifier(const Aws::String& value) { SetTargetIdentifier(value); return *this;}
    inline ControlOperationSummary& WithTargetIdentifier(Aws::String&& value) { SetTargetIdentifier(std::move(value)); return *this;}
    inline ControlOperationSummary& WithTargetIdentifier(const char* value) { SetTargetIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_controlIdentifier;
    bool m_controlIdentifierHasBeenSet = false;

    Aws::String m_enabledControlIdentifier;
    bool m_enabledControlIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_operationIdentifier;
    bool m_operationIdentifierHasBeenSet = false;

    ControlOperationType m_operationType;
    bool m_operationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    ControlOperationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_targetIdentifier;
    bool m_targetIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
