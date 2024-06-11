﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Represents the results of an event submitted to an event bus.</p> <p>If the
   * submission was successful, the entry has the event ID in it. Otherwise, you can
   * use the error code and error message to identify the problem with the entry.</p>
   * <p>For information about the errors that are common to all actions, see <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/CommonErrors.html">Common
   * Errors</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutEventsResultEntry">AWS
   * API Reference</a></p>
   */
  class PutEventsResultEntry
  {
  public:
    AWS_EVENTBRIDGE_API PutEventsResultEntry();
    AWS_EVENTBRIDGE_API PutEventsResultEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API PutEventsResultEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }
    inline PutEventsResultEntry& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}
    inline PutEventsResultEntry& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}
    inline PutEventsResultEntry& WithEventId(const char* value) { SetEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code that indicates why the event submission failed.</p>
     * <p>Retryable errors include:</p> <ul> <li> <p> <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/CommonErrors.html">InternalFailure</a>
     * </code> </p> <p>The request processing has failed because of an unknown error,
     * exception or failure.</p> </li> <li> <p> <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/CommonErrors.html">ThrottlingException</a>
     * </code> </p> <p>The request was denied due to request throttling.</p> </li>
     * </ul> <p>Non-retryable errors include:</p> <ul> <li> <p> <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/CommonErrors.html">AccessDeniedException</a>
     * </code> </p> <p>You do not have sufficient access to perform this action.</p>
     * </li> <li> <p> <code>InvalidAccountIdException</code> </p> <p>The account ID
     * provided is not valid.</p> </li> <li> <p> <code>InvalidArgument</code> </p> <p>A
     * specified parameter is not valid.</p> </li> <li> <p>
     * <code>MalformedDetail</code> </p> <p>The JSON provided is not valid.</p> </li>
     * <li> <p> <code>RedactionFailure</code> </p> <p>Redacting the CloudTrail event
     * failed.</p> </li> <li> <p> <code>NotAuthorizedForSourceException</code> </p>
     * <p>You do not have permissions to publish events with this source onto this
     * event bus.</p> </li> <li> <p> <code>NotAuthorizedForDetailTypeException</code>
     * </p> <p>You do not have permissions to publish events with this detail type onto
     * this event bus.</p> </li> </ul>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline PutEventsResultEntry& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline PutEventsResultEntry& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline PutEventsResultEntry& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message that explains why the event submission failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline PutEventsResultEntry& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline PutEventsResultEntry& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline PutEventsResultEntry& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
