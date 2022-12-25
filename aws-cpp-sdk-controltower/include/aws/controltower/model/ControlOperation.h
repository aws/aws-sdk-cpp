/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/controltower/model/ControlOperationType.h>
#include <aws/controltower/model/ControlOperationStatus.h>
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
   * <p>An operation performed by the control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/ControlOperation">AWS
   * API Reference</a></p>
   */
  class ControlOperation
  {
  public:
    AWS_CONTROLTOWER_API ControlOperation();
    AWS_CONTROLTOWER_API ControlOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API ControlOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time that the operation finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time that the operation finished.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time that the operation finished.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time that the operation finished.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time that the operation finished.</p>
     */
    inline ControlOperation& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time that the operation finished.</p>
     */
    inline ControlOperation& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>One of <code>ENABLE_CONTROL</code> or <code>DISABLE_CONTROL</code>.</p>
     */
    inline const ControlOperationType& GetOperationType() const{ return m_operationType; }

    /**
     * <p>One of <code>ENABLE_CONTROL</code> or <code>DISABLE_CONTROL</code>.</p>
     */
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }

    /**
     * <p>One of <code>ENABLE_CONTROL</code> or <code>DISABLE_CONTROL</code>.</p>
     */
    inline void SetOperationType(const ControlOperationType& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }

    /**
     * <p>One of <code>ENABLE_CONTROL</code> or <code>DISABLE_CONTROL</code>.</p>
     */
    inline void SetOperationType(ControlOperationType&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }

    /**
     * <p>One of <code>ENABLE_CONTROL</code> or <code>DISABLE_CONTROL</code>.</p>
     */
    inline ControlOperation& WithOperationType(const ControlOperationType& value) { SetOperationType(value); return *this;}

    /**
     * <p>One of <code>ENABLE_CONTROL</code> or <code>DISABLE_CONTROL</code>.</p>
     */
    inline ControlOperation& WithOperationType(ControlOperationType&& value) { SetOperationType(std::move(value)); return *this;}


    /**
     * <p>The time that the operation began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time that the operation began.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time that the operation began.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time that the operation began.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time that the operation began.</p>
     */
    inline ControlOperation& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time that the operation began.</p>
     */
    inline ControlOperation& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>One of <code>IN_PROGRESS</code>, <code>SUCEEDED</code>, or
     * <code>FAILED</code>.</p>
     */
    inline const ControlOperationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>One of <code>IN_PROGRESS</code>, <code>SUCEEDED</code>, or
     * <code>FAILED</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>One of <code>IN_PROGRESS</code>, <code>SUCEEDED</code>, or
     * <code>FAILED</code>.</p>
     */
    inline void SetStatus(const ControlOperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>One of <code>IN_PROGRESS</code>, <code>SUCEEDED</code>, or
     * <code>FAILED</code>.</p>
     */
    inline void SetStatus(ControlOperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>One of <code>IN_PROGRESS</code>, <code>SUCEEDED</code>, or
     * <code>FAILED</code>.</p>
     */
    inline ControlOperation& WithStatus(const ControlOperationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>One of <code>IN_PROGRESS</code>, <code>SUCEEDED</code>, or
     * <code>FAILED</code>.</p>
     */
    inline ControlOperation& WithStatus(ControlOperationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If the operation result is <code>FAILED</code>, this string contains a
     * message explaining why the operation failed.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>If the operation result is <code>FAILED</code>, this string contains a
     * message explaining why the operation failed.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>If the operation result is <code>FAILED</code>, this string contains a
     * message explaining why the operation failed.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>If the operation result is <code>FAILED</code>, this string contains a
     * message explaining why the operation failed.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>If the operation result is <code>FAILED</code>, this string contains a
     * message explaining why the operation failed.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>If the operation result is <code>FAILED</code>, this string contains a
     * message explaining why the operation failed.</p>
     */
    inline ControlOperation& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>If the operation result is <code>FAILED</code>, this string contains a
     * message explaining why the operation failed.</p>
     */
    inline ControlOperation& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>If the operation result is <code>FAILED</code>, this string contains a
     * message explaining why the operation failed.</p>
     */
    inline ControlOperation& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    ControlOperationType m_operationType;
    bool m_operationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    ControlOperationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
