/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/LandingZoneOperationType.h>
#include <aws/controltower/model/LandingZoneOperationStatus.h>
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
   * <p>Information about a landing zone operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/LandingZoneOperationDetail">AWS
   * API Reference</a></p>
   */
  class LandingZoneOperationDetail
  {
  public:
    AWS_CONTROLTOWER_API LandingZoneOperationDetail() = default;
    AWS_CONTROLTOWER_API LandingZoneOperationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API LandingZoneOperationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The landing zone operation end time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    LandingZoneOperationDetail& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>operationIdentifier</code> of the landing zone operation.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const { return m_operationIdentifier; }
    inline bool OperationIdentifierHasBeenSet() const { return m_operationIdentifierHasBeenSet; }
    template<typename OperationIdentifierT = Aws::String>
    void SetOperationIdentifier(OperationIdentifierT&& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = std::forward<OperationIdentifierT>(value); }
    template<typename OperationIdentifierT = Aws::String>
    LandingZoneOperationDetail& WithOperationIdentifier(OperationIdentifierT&& value) { SetOperationIdentifier(std::forward<OperationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The landing zone operation type. </p> <p>Valid values:</p> <ul> <li> <p>
     * <code>DELETE</code>: The <code>DeleteLandingZone</code> operation. </p> </li>
     * <li> <p> <code>CREATE</code>: The <code>CreateLandingZone</code> operation. </p>
     * </li> <li> <p> <code>UPDATE</code>: The <code>UpdateLandingZone</code>
     * operation. </p> </li> <li> <p> <code>RESET</code>: The
     * <code>ResetLandingZone</code> operation. </p> </li> </ul>
     */
    inline LandingZoneOperationType GetOperationType() const { return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(LandingZoneOperationType value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline LandingZoneOperationDetail& WithOperationType(LandingZoneOperationType value) { SetOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The landing zone operation start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    LandingZoneOperationDetail& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Valid values:</p> <ul> <li> <p> <code>SUCCEEDED</code>: The landing zone
     * operation succeeded. </p> </li> <li> <p> <code>IN_PROGRESS</code>: The landing
     * zone operation is in progress. </p> </li> <li> <p> <code>FAILED</code>: The
     * landing zone operation failed. </p> </li> </ul>
     */
    inline LandingZoneOperationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LandingZoneOperationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LandingZoneOperationDetail& WithStatus(LandingZoneOperationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the operation result is FAILED, this string contains a message explaining
     * why the operation failed.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    LandingZoneOperationDetail& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_operationIdentifier;
    bool m_operationIdentifierHasBeenSet = false;

    LandingZoneOperationType m_operationType{LandingZoneOperationType::NOT_SET};
    bool m_operationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    LandingZoneOperationStatus m_status{LandingZoneOperationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
