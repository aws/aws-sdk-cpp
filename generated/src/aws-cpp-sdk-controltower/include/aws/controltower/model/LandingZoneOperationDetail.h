/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/controltower/model/LandingZoneOperationType.h>
#include <aws/controltower/model/LandingZoneOperationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    /**
     * <p>The landing zone operation end time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The landing zone operation end time.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The landing zone operation end time.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The landing zone operation end time.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The landing zone operation end time.</p>
     */
    inline LandingZoneOperationDetail& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The landing zone operation end time.</p>
     */
    inline LandingZoneOperationDetail& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The landing zone operation type. </p> <p>Valid values:</p> <ul> <li> <p>
     * <code>DELETE</code>: The <code>DeleteLandingZone</code> operation. </p> </li>
     * <li> <p> <code>CREATE</code>: The <code>CreateLandingZone</code> operation. </p>
     * </li> <li> <p> <code>UPDATE</code>: The <code>UpdateLandingZone</code>
     * operation. </p> </li> <li> <p> <code>RESET</code>: The
     * <code>ResetLandingZone</code> operation. </p> </li> </ul>
     */
    inline const LandingZoneOperationType& GetOperationType() const{ return m_operationType; }

    /**
     * <p>The landing zone operation type. </p> <p>Valid values:</p> <ul> <li> <p>
     * <code>DELETE</code>: The <code>DeleteLandingZone</code> operation. </p> </li>
     * <li> <p> <code>CREATE</code>: The <code>CreateLandingZone</code> operation. </p>
     * </li> <li> <p> <code>UPDATE</code>: The <code>UpdateLandingZone</code>
     * operation. </p> </li> <li> <p> <code>RESET</code>: The
     * <code>ResetLandingZone</code> operation. </p> </li> </ul>
     */
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }

    /**
     * <p>The landing zone operation type. </p> <p>Valid values:</p> <ul> <li> <p>
     * <code>DELETE</code>: The <code>DeleteLandingZone</code> operation. </p> </li>
     * <li> <p> <code>CREATE</code>: The <code>CreateLandingZone</code> operation. </p>
     * </li> <li> <p> <code>UPDATE</code>: The <code>UpdateLandingZone</code>
     * operation. </p> </li> <li> <p> <code>RESET</code>: The
     * <code>ResetLandingZone</code> operation. </p> </li> </ul>
     */
    inline void SetOperationType(const LandingZoneOperationType& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }

    /**
     * <p>The landing zone operation type. </p> <p>Valid values:</p> <ul> <li> <p>
     * <code>DELETE</code>: The <code>DeleteLandingZone</code> operation. </p> </li>
     * <li> <p> <code>CREATE</code>: The <code>CreateLandingZone</code> operation. </p>
     * </li> <li> <p> <code>UPDATE</code>: The <code>UpdateLandingZone</code>
     * operation. </p> </li> <li> <p> <code>RESET</code>: The
     * <code>ResetLandingZone</code> operation. </p> </li> </ul>
     */
    inline void SetOperationType(LandingZoneOperationType&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }

    /**
     * <p>The landing zone operation type. </p> <p>Valid values:</p> <ul> <li> <p>
     * <code>DELETE</code>: The <code>DeleteLandingZone</code> operation. </p> </li>
     * <li> <p> <code>CREATE</code>: The <code>CreateLandingZone</code> operation. </p>
     * </li> <li> <p> <code>UPDATE</code>: The <code>UpdateLandingZone</code>
     * operation. </p> </li> <li> <p> <code>RESET</code>: The
     * <code>ResetLandingZone</code> operation. </p> </li> </ul>
     */
    inline LandingZoneOperationDetail& WithOperationType(const LandingZoneOperationType& value) { SetOperationType(value); return *this;}

    /**
     * <p>The landing zone operation type. </p> <p>Valid values:</p> <ul> <li> <p>
     * <code>DELETE</code>: The <code>DeleteLandingZone</code> operation. </p> </li>
     * <li> <p> <code>CREATE</code>: The <code>CreateLandingZone</code> operation. </p>
     * </li> <li> <p> <code>UPDATE</code>: The <code>UpdateLandingZone</code>
     * operation. </p> </li> <li> <p> <code>RESET</code>: The
     * <code>ResetLandingZone</code> operation. </p> </li> </ul>
     */
    inline LandingZoneOperationDetail& WithOperationType(LandingZoneOperationType&& value) { SetOperationType(std::move(value)); return *this;}


    /**
     * <p>The landing zone operation start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The landing zone operation start time.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The landing zone operation start time.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The landing zone operation start time.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The landing zone operation start time.</p>
     */
    inline LandingZoneOperationDetail& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The landing zone operation start time.</p>
     */
    inline LandingZoneOperationDetail& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Valid values:</p> <ul> <li> <p> <code>SUCCEEDED</code>: The landing zone
     * operation succeeded. </p> </li> <li> <p> <code>IN_PROGRESS</code>: The landing
     * zone operation is in progress. </p> </li> <li> <p> <code>FAILED</code>: The
     * landing zone operation failed. </p> </li> </ul>
     */
    inline const LandingZoneOperationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Valid values:</p> <ul> <li> <p> <code>SUCCEEDED</code>: The landing zone
     * operation succeeded. </p> </li> <li> <p> <code>IN_PROGRESS</code>: The landing
     * zone operation is in progress. </p> </li> <li> <p> <code>FAILED</code>: The
     * landing zone operation failed. </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Valid values:</p> <ul> <li> <p> <code>SUCCEEDED</code>: The landing zone
     * operation succeeded. </p> </li> <li> <p> <code>IN_PROGRESS</code>: The landing
     * zone operation is in progress. </p> </li> <li> <p> <code>FAILED</code>: The
     * landing zone operation failed. </p> </li> </ul>
     */
    inline void SetStatus(const LandingZoneOperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Valid values:</p> <ul> <li> <p> <code>SUCCEEDED</code>: The landing zone
     * operation succeeded. </p> </li> <li> <p> <code>IN_PROGRESS</code>: The landing
     * zone operation is in progress. </p> </li> <li> <p> <code>FAILED</code>: The
     * landing zone operation failed. </p> </li> </ul>
     */
    inline void SetStatus(LandingZoneOperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Valid values:</p> <ul> <li> <p> <code>SUCCEEDED</code>: The landing zone
     * operation succeeded. </p> </li> <li> <p> <code>IN_PROGRESS</code>: The landing
     * zone operation is in progress. </p> </li> <li> <p> <code>FAILED</code>: The
     * landing zone operation failed. </p> </li> </ul>
     */
    inline LandingZoneOperationDetail& WithStatus(const LandingZoneOperationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Valid values:</p> <ul> <li> <p> <code>SUCCEEDED</code>: The landing zone
     * operation succeeded. </p> </li> <li> <p> <code>IN_PROGRESS</code>: The landing
     * zone operation is in progress. </p> </li> <li> <p> <code>FAILED</code>: The
     * landing zone operation failed. </p> </li> </ul>
     */
    inline LandingZoneOperationDetail& WithStatus(LandingZoneOperationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If the operation result is FAILED, this string contains a message explaining
     * why the operation failed.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>If the operation result is FAILED, this string contains a message explaining
     * why the operation failed.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>If the operation result is FAILED, this string contains a message explaining
     * why the operation failed.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>If the operation result is FAILED, this string contains a message explaining
     * why the operation failed.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>If the operation result is FAILED, this string contains a message explaining
     * why the operation failed.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>If the operation result is FAILED, this string contains a message explaining
     * why the operation failed.</p>
     */
    inline LandingZoneOperationDetail& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>If the operation result is FAILED, this string contains a message explaining
     * why the operation failed.</p>
     */
    inline LandingZoneOperationDetail& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>If the operation result is FAILED, this string contains a message explaining
     * why the operation failed.</p>
     */
    inline LandingZoneOperationDetail& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

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
