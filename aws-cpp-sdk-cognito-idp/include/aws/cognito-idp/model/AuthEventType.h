﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The authentication event type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AuthEventType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AuthEventType
  {
  public:
    AuthEventType();
    AuthEventType(const Aws::Utils::Json::JsonValue& jsonValue);
    AuthEventType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The event ID.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The event ID.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The event ID.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The event ID.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The event ID.</p>
     */
    inline AuthEventType& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The event ID.</p>
     */
    inline AuthEventType& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The event ID.</p>
     */
    inline AuthEventType& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The event type.</p>
     */
    inline const EventType& GetEventType() const{ return m_eventType; }

    /**
     * <p>The event type.</p>
     */
    inline void SetEventType(const EventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The event type.</p>
     */
    inline void SetEventType(EventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The event type.</p>
     */
    inline AuthEventType& WithEventType(const EventType& value) { SetEventType(value); return *this;}

    /**
     * <p>The event type.</p>
     */
    inline AuthEventType& WithEventType(EventType&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p>The creation date</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The creation date</p>
     */
    inline AuthEventType& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date</p>
     */
    inline AuthEventType& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The event response.</p>
     */
    inline const EventResponseType& GetEventResponse() const{ return m_eventResponse; }

    /**
     * <p>The event response.</p>
     */
    inline void SetEventResponse(const EventResponseType& value) { m_eventResponseHasBeenSet = true; m_eventResponse = value; }

    /**
     * <p>The event response.</p>
     */
    inline void SetEventResponse(EventResponseType&& value) { m_eventResponseHasBeenSet = true; m_eventResponse = std::move(value); }

    /**
     * <p>The event response.</p>
     */
    inline AuthEventType& WithEventResponse(const EventResponseType& value) { SetEventResponse(value); return *this;}

    /**
     * <p>The event response.</p>
     */
    inline AuthEventType& WithEventResponse(EventResponseType&& value) { SetEventResponse(std::move(value)); return *this;}


    /**
     * <p>The event risk.</p>
     */
    inline const EventRiskType& GetEventRisk() const{ return m_eventRisk; }

    /**
     * <p>The event risk.</p>
     */
    inline void SetEventRisk(const EventRiskType& value) { m_eventRiskHasBeenSet = true; m_eventRisk = value; }

    /**
     * <p>The event risk.</p>
     */
    inline void SetEventRisk(EventRiskType&& value) { m_eventRiskHasBeenSet = true; m_eventRisk = std::move(value); }

    /**
     * <p>The event risk.</p>
     */
    inline AuthEventType& WithEventRisk(const EventRiskType& value) { SetEventRisk(value); return *this;}

    /**
     * <p>The event risk.</p>
     */
    inline AuthEventType& WithEventRisk(EventRiskType&& value) { SetEventRisk(std::move(value)); return *this;}


    /**
     * <p>The challenge responses.</p>
     */
    inline const Aws::Vector<ChallengeResponseType>& GetChallengeResponses() const{ return m_challengeResponses; }

    /**
     * <p>The challenge responses.</p>
     */
    inline void SetChallengeResponses(const Aws::Vector<ChallengeResponseType>& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses = value; }

    /**
     * <p>The challenge responses.</p>
     */
    inline void SetChallengeResponses(Aws::Vector<ChallengeResponseType>&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses = std::move(value); }

    /**
     * <p>The challenge responses.</p>
     */
    inline AuthEventType& WithChallengeResponses(const Aws::Vector<ChallengeResponseType>& value) { SetChallengeResponses(value); return *this;}

    /**
     * <p>The challenge responses.</p>
     */
    inline AuthEventType& WithChallengeResponses(Aws::Vector<ChallengeResponseType>&& value) { SetChallengeResponses(std::move(value)); return *this;}

    /**
     * <p>The challenge responses.</p>
     */
    inline AuthEventType& AddChallengeResponses(const ChallengeResponseType& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.push_back(value); return *this; }

    /**
     * <p>The challenge responses.</p>
     */
    inline AuthEventType& AddChallengeResponses(ChallengeResponseType&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.push_back(std::move(value)); return *this; }


    /**
     * <p>The user context data captured at the time of an event request. It provides
     * additional information about the client from which event the request is
     * received.</p>
     */
    inline const EventContextDataType& GetEventContextData() const{ return m_eventContextData; }

    /**
     * <p>The user context data captured at the time of an event request. It provides
     * additional information about the client from which event the request is
     * received.</p>
     */
    inline void SetEventContextData(const EventContextDataType& value) { m_eventContextDataHasBeenSet = true; m_eventContextData = value; }

    /**
     * <p>The user context data captured at the time of an event request. It provides
     * additional information about the client from which event the request is
     * received.</p>
     */
    inline void SetEventContextData(EventContextDataType&& value) { m_eventContextDataHasBeenSet = true; m_eventContextData = std::move(value); }

    /**
     * <p>The user context data captured at the time of an event request. It provides
     * additional information about the client from which event the request is
     * received.</p>
     */
    inline AuthEventType& WithEventContextData(const EventContextDataType& value) { SetEventContextData(value); return *this;}

    /**
     * <p>The user context data captured at the time of an event request. It provides
     * additional information about the client from which event the request is
     * received.</p>
     */
    inline AuthEventType& WithEventContextData(EventContextDataType&& value) { SetEventContextData(std::move(value)); return *this;}


    /**
     * <p>A flag specifying the user feedback captured at the time of an event request
     * is good or bad. </p>
     */
    inline const EventFeedbackType& GetEventFeedback() const{ return m_eventFeedback; }

    /**
     * <p>A flag specifying the user feedback captured at the time of an event request
     * is good or bad. </p>
     */
    inline void SetEventFeedback(const EventFeedbackType& value) { m_eventFeedbackHasBeenSet = true; m_eventFeedback = value; }

    /**
     * <p>A flag specifying the user feedback captured at the time of an event request
     * is good or bad. </p>
     */
    inline void SetEventFeedback(EventFeedbackType&& value) { m_eventFeedbackHasBeenSet = true; m_eventFeedback = std::move(value); }

    /**
     * <p>A flag specifying the user feedback captured at the time of an event request
     * is good or bad. </p>
     */
    inline AuthEventType& WithEventFeedback(const EventFeedbackType& value) { SetEventFeedback(value); return *this;}

    /**
     * <p>A flag specifying the user feedback captured at the time of an event request
     * is good or bad. </p>
     */
    inline AuthEventType& WithEventFeedback(EventFeedbackType&& value) { SetEventFeedback(std::move(value)); return *this;}

  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;

    EventType m_eventType;
    bool m_eventTypeHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    EventResponseType m_eventResponse;
    bool m_eventResponseHasBeenSet;

    EventRiskType m_eventRisk;
    bool m_eventRiskHasBeenSet;

    Aws::Vector<ChallengeResponseType> m_challengeResponses;
    bool m_challengeResponsesHasBeenSet;

    EventContextDataType m_eventContextData;
    bool m_eventContextDataHasBeenSet;

    EventFeedbackType m_eventFeedback;
    bool m_eventFeedbackHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
