/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/EventType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cognito-idp/model/EventResponseType.h>
#include <aws/cognito-idp/model/EventRiskType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/EventContextDataType.h>
#include <aws/cognito-idp/model/EventFeedbackType.h>
#include <aws/cognito-idp/model/ChallengeResponseType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>One authentication event that Amazon Cognito logged in a user pool with
   * threat protection active. Contains user and device metadata and a risk
   * assessment from your user pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AuthEventType">AWS
   * API Reference</a></p>
   */
  class AuthEventType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AuthEventType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API AuthEventType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AuthEventType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The event ID.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    AuthEventType& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication event.</p>
     */
    inline EventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(EventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline AuthEventType& WithEventType(EventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    AuthEventType& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event response.</p>
     */
    inline EventResponseType GetEventResponse() const { return m_eventResponse; }
    inline bool EventResponseHasBeenSet() const { return m_eventResponseHasBeenSet; }
    inline void SetEventResponse(EventResponseType value) { m_eventResponseHasBeenSet = true; m_eventResponse = value; }
    inline AuthEventType& WithEventResponse(EventResponseType value) { SetEventResponse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threat evaluation from your user pool about an event. Contains
     * information about whether your user pool detected compromised credentials,
     * whether the event triggered an automated response, and the level of risk.</p>
     */
    inline const EventRiskType& GetEventRisk() const { return m_eventRisk; }
    inline bool EventRiskHasBeenSet() const { return m_eventRiskHasBeenSet; }
    template<typename EventRiskT = EventRiskType>
    void SetEventRisk(EventRiskT&& value) { m_eventRiskHasBeenSet = true; m_eventRisk = std::forward<EventRiskT>(value); }
    template<typename EventRiskT = EventRiskType>
    AuthEventType& WithEventRisk(EventRiskT&& value) { SetEventRisk(std::forward<EventRiskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the challenges that the user was requested to answer, for example
     * <code>Password</code>, and the result, for example <code>Success</code>.</p>
     */
    inline const Aws::Vector<ChallengeResponseType>& GetChallengeResponses() const { return m_challengeResponses; }
    inline bool ChallengeResponsesHasBeenSet() const { return m_challengeResponsesHasBeenSet; }
    template<typename ChallengeResponsesT = Aws::Vector<ChallengeResponseType>>
    void SetChallengeResponses(ChallengeResponsesT&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses = std::forward<ChallengeResponsesT>(value); }
    template<typename ChallengeResponsesT = Aws::Vector<ChallengeResponseType>>
    AuthEventType& WithChallengeResponses(ChallengeResponsesT&& value) { SetChallengeResponses(std::forward<ChallengeResponsesT>(value)); return *this;}
    template<typename ChallengeResponsesT = ChallengeResponseType>
    AuthEventType& AddChallengeResponses(ChallengeResponsesT&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace_back(std::forward<ChallengeResponsesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user context data captured at the time of an event request. This value
     * provides additional information about the client from which event the request is
     * received.</p>
     */
    inline const EventContextDataType& GetEventContextData() const { return m_eventContextData; }
    inline bool EventContextDataHasBeenSet() const { return m_eventContextDataHasBeenSet; }
    template<typename EventContextDataT = EventContextDataType>
    void SetEventContextData(EventContextDataT&& value) { m_eventContextDataHasBeenSet = true; m_eventContextData = std::forward<EventContextDataT>(value); }
    template<typename EventContextDataT = EventContextDataType>
    AuthEventType& WithEventContextData(EventContextDataT&& value) { SetEventContextData(std::forward<EventContextDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>UpdateAuthEventFeedback</code> or
     * <code>AdminUpdateAuthEventFeedback</code> feedback that you or your user
     * provided in response to the event. A value of <code>Valid</code> indicates that
     * you disagreed with the level of risk that your user pool assigned, and evaluated
     * a session to be valid, or likely safe. A value of <code>Invalid</code> indicates
     * that you agreed with the user pool risk level and evaluated a session to be
     * invalid, or likely malicious.</p>
     */
    inline const EventFeedbackType& GetEventFeedback() const { return m_eventFeedback; }
    inline bool EventFeedbackHasBeenSet() const { return m_eventFeedbackHasBeenSet; }
    template<typename EventFeedbackT = EventFeedbackType>
    void SetEventFeedback(EventFeedbackT&& value) { m_eventFeedbackHasBeenSet = true; m_eventFeedback = std::forward<EventFeedbackT>(value); }
    template<typename EventFeedbackT = EventFeedbackType>
    AuthEventType& WithEventFeedback(EventFeedbackT&& value) { SetEventFeedback(std::forward<EventFeedbackT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    EventType m_eventType{EventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    EventResponseType m_eventResponse{EventResponseType::NOT_SET};
    bool m_eventResponseHasBeenSet = false;

    EventRiskType m_eventRisk;
    bool m_eventRiskHasBeenSet = false;

    Aws::Vector<ChallengeResponseType> m_challengeResponses;
    bool m_challengeResponsesHasBeenSet = false;

    EventContextDataType m_eventContextData;
    bool m_eventContextDataHasBeenSet = false;

    EventFeedbackType m_eventFeedback;
    bool m_eventFeedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
