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
    AWS_CONTROLTOWER_API LandingZoneOperationDetail();
    AWS_CONTROLTOWER_API LandingZoneOperationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API LandingZoneOperationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The landing zone operation end time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline LandingZoneOperationDetail& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline LandingZoneOperationDetail& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>operationIdentifier</code> of the landing zone operation.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const{ return m_operationIdentifier; }
    inline bool OperationIdentifierHasBeenSet() const { return m_operationIdentifierHasBeenSet; }
    inline void SetOperationIdentifier(const Aws::String& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = value; }
    inline void SetOperationIdentifier(Aws::String&& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = std::move(value); }
    inline void SetOperationIdentifier(const char* value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier.assign(value); }
    inline LandingZoneOperationDetail& WithOperationIdentifier(const Aws::String& value) { SetOperationIdentifier(value); return *this;}
    inline LandingZoneOperationDetail& WithOperationIdentifier(Aws::String&& value) { SetOperationIdentifier(std::move(value)); return *this;}
    inline LandingZoneOperationDetail& WithOperationIdentifier(const char* value) { SetOperationIdentifier(value); return *this;}
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
    inline const LandingZoneOperationType& GetOperationType() const{ return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(const LandingZoneOperationType& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline void SetOperationType(LandingZoneOperationType&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }
    inline LandingZoneOperationDetail& WithOperationType(const LandingZoneOperationType& value) { SetOperationType(value); return *this;}
    inline LandingZoneOperationDetail& WithOperationType(LandingZoneOperationType&& value) { SetOperationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The landing zone operation start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline LandingZoneOperationDetail& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline LandingZoneOperationDetail& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Valid values:</p> <ul> <li> <p> <code>SUCCEEDED</code>: The landing zone
     * operation succeeded. </p> </li> <li> <p> <code>IN_PROGRESS</code>: The landing
     * zone operation is in progress. </p> </li> <li> <p> <code>FAILED</code>: The
     * landing zone operation failed. </p> </li> </ul>
     */
    inline const LandingZoneOperationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LandingZoneOperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LandingZoneOperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline LandingZoneOperationDetail& WithStatus(const LandingZoneOperationStatus& value) { SetStatus(value); return *this;}
    inline LandingZoneOperationDetail& WithStatus(LandingZoneOperationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the operation result is FAILED, this string contains a message explaining
     * why the operation failed.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline LandingZoneOperationDetail& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline LandingZoneOperationDetail& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline LandingZoneOperationDetail& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_operationIdentifier;
    bool m_operationIdentifierHasBeenSet = false;

    LandingZoneOperationType m_operationType;
    bool m_operationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    LandingZoneOperationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
