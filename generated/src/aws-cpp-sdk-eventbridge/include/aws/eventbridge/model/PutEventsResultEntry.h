/**
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
    AWS_EVENTBRIDGE_API PutEventsResultEntry() = default;
    AWS_EVENTBRIDGE_API PutEventsResultEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API PutEventsResultEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the event.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    PutEventsResultEntry& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
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
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    PutEventsResultEntry& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message that explains why the event submission failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    PutEventsResultEntry& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
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
