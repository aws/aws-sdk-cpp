/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/BaselineOperationType.h>
#include <aws/controltower/model/BaselineOperationStatus.h>
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
   * <p>An object of shape <code>BaselineOperation</code>, returning details about
   * the specified <code>Baseline</code> operation ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/BaselineOperation">AWS
   * API Reference</a></p>
   */
  class BaselineOperation
  {
  public:
    AWS_CONTROLTOWER_API BaselineOperation();
    AWS_CONTROLTOWER_API BaselineOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API BaselineOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The end time of the operation (if applicable), in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the operation (if applicable), in ISO 8601 format.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the operation (if applicable), in ISO 8601 format.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the operation (if applicable), in ISO 8601 format.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the operation (if applicable), in ISO 8601 format.</p>
     */
    inline BaselineOperation& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the operation (if applicable), in ISO 8601 format.</p>
     */
    inline BaselineOperation& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The identifier of the specified operation.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const{ return m_operationIdentifier; }

    /**
     * <p>The identifier of the specified operation.</p>
     */
    inline bool OperationIdentifierHasBeenSet() const { return m_operationIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the specified operation.</p>
     */
    inline void SetOperationIdentifier(const Aws::String& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = value; }

    /**
     * <p>The identifier of the specified operation.</p>
     */
    inline void SetOperationIdentifier(Aws::String&& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = std::move(value); }

    /**
     * <p>The identifier of the specified operation.</p>
     */
    inline void SetOperationIdentifier(const char* value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier.assign(value); }

    /**
     * <p>The identifier of the specified operation.</p>
     */
    inline BaselineOperation& WithOperationIdentifier(const Aws::String& value) { SetOperationIdentifier(value); return *this;}

    /**
     * <p>The identifier of the specified operation.</p>
     */
    inline BaselineOperation& WithOperationIdentifier(Aws::String&& value) { SetOperationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the specified operation.</p>
     */
    inline BaselineOperation& WithOperationIdentifier(const char* value) { SetOperationIdentifier(value); return *this;}


    /**
     * <p>An enumerated type (<code>enum</code>) with possible values of
     * <code>ENABLE_BASELINE</code>, <code>DISABLE_BASELINE</code>,
     * <code>UPDATE_ENABLED_BASELINE</code>, or
     * <code>RESET_ENABLED_BASELINE</code>.</p>
     */
    inline const BaselineOperationType& GetOperationType() const{ return m_operationType; }

    /**
     * <p>An enumerated type (<code>enum</code>) with possible values of
     * <code>ENABLE_BASELINE</code>, <code>DISABLE_BASELINE</code>,
     * <code>UPDATE_ENABLED_BASELINE</code>, or
     * <code>RESET_ENABLED_BASELINE</code>.</p>
     */
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }

    /**
     * <p>An enumerated type (<code>enum</code>) with possible values of
     * <code>ENABLE_BASELINE</code>, <code>DISABLE_BASELINE</code>,
     * <code>UPDATE_ENABLED_BASELINE</code>, or
     * <code>RESET_ENABLED_BASELINE</code>.</p>
     */
    inline void SetOperationType(const BaselineOperationType& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }

    /**
     * <p>An enumerated type (<code>enum</code>) with possible values of
     * <code>ENABLE_BASELINE</code>, <code>DISABLE_BASELINE</code>,
     * <code>UPDATE_ENABLED_BASELINE</code>, or
     * <code>RESET_ENABLED_BASELINE</code>.</p>
     */
    inline void SetOperationType(BaselineOperationType&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }

    /**
     * <p>An enumerated type (<code>enum</code>) with possible values of
     * <code>ENABLE_BASELINE</code>, <code>DISABLE_BASELINE</code>,
     * <code>UPDATE_ENABLED_BASELINE</code>, or
     * <code>RESET_ENABLED_BASELINE</code>.</p>
     */
    inline BaselineOperation& WithOperationType(const BaselineOperationType& value) { SetOperationType(value); return *this;}

    /**
     * <p>An enumerated type (<code>enum</code>) with possible values of
     * <code>ENABLE_BASELINE</code>, <code>DISABLE_BASELINE</code>,
     * <code>UPDATE_ENABLED_BASELINE</code>, or
     * <code>RESET_ENABLED_BASELINE</code>.</p>
     */
    inline BaselineOperation& WithOperationType(BaselineOperationType&& value) { SetOperationType(std::move(value)); return *this;}


    /**
     * <p>The start time of the operation, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the operation, in ISO 8601 format.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the operation, in ISO 8601 format.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the operation, in ISO 8601 format.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the operation, in ISO 8601 format.</p>
     */
    inline BaselineOperation& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the operation, in ISO 8601 format.</p>
     */
    inline BaselineOperation& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>An enumerated type (<code>enum</code>) with possible values of
     * <code>SUCCEEDED</code>, <code>FAILED</code>, or <code>IN_PROGRESS</code>.</p>
     */
    inline const BaselineOperationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>An enumerated type (<code>enum</code>) with possible values of
     * <code>SUCCEEDED</code>, <code>FAILED</code>, or <code>IN_PROGRESS</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>An enumerated type (<code>enum</code>) with possible values of
     * <code>SUCCEEDED</code>, <code>FAILED</code>, or <code>IN_PROGRESS</code>.</p>
     */
    inline void SetStatus(const BaselineOperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>An enumerated type (<code>enum</code>) with possible values of
     * <code>SUCCEEDED</code>, <code>FAILED</code>, or <code>IN_PROGRESS</code>.</p>
     */
    inline void SetStatus(BaselineOperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>An enumerated type (<code>enum</code>) with possible values of
     * <code>SUCCEEDED</code>, <code>FAILED</code>, or <code>IN_PROGRESS</code>.</p>
     */
    inline BaselineOperation& WithStatus(const BaselineOperationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>An enumerated type (<code>enum</code>) with possible values of
     * <code>SUCCEEDED</code>, <code>FAILED</code>, or <code>IN_PROGRESS</code>.</p>
     */
    inline BaselineOperation& WithStatus(BaselineOperationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A status message that gives more information about the operation's status, if
     * applicable.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A status message that gives more information about the operation's status, if
     * applicable.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A status message that gives more information about the operation's status, if
     * applicable.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A status message that gives more information about the operation's status, if
     * applicable.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A status message that gives more information about the operation's status, if
     * applicable.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A status message that gives more information about the operation's status, if
     * applicable.</p>
     */
    inline BaselineOperation& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A status message that gives more information about the operation's status, if
     * applicable.</p>
     */
    inline BaselineOperation& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A status message that gives more information about the operation's status, if
     * applicable.</p>
     */
    inline BaselineOperation& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_operationIdentifier;
    bool m_operationIdentifierHasBeenSet = false;

    BaselineOperationType m_operationType;
    bool m_operationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    BaselineOperationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
