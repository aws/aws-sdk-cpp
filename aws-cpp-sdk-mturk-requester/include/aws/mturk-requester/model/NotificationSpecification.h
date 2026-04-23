/*
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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/NotificationTransport.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/EventType.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p>The NotificationSpecification data structure describes a HIT event
   * notification for a HIT type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/NotificationSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API NotificationSpecification
  {
  public:
    NotificationSpecification();
    NotificationSpecification(Aws::Utils::Json::JsonView jsonValue);
    NotificationSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The target for notification messages. The Destination’s format is determined
     * by the specified Transport: </p> <ul> <li> <p>When Transport is Email, the
     * Destination is your email address.</p> </li> <li> <p>When Transport is SQS, the
     * Destination is your queue URL.</p> </li> <li> <p>When Transport is SNS, the
     * Destination is the ARN of your topic.</p> </li> </ul>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p> The target for notification messages. The Destination’s format is determined
     * by the specified Transport: </p> <ul> <li> <p>When Transport is Email, the
     * Destination is your email address.</p> </li> <li> <p>When Transport is SQS, the
     * Destination is your queue URL.</p> </li> <li> <p>When Transport is SNS, the
     * Destination is the ARN of your topic.</p> </li> </ul>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p> The target for notification messages. The Destination’s format is determined
     * by the specified Transport: </p> <ul> <li> <p>When Transport is Email, the
     * Destination is your email address.</p> </li> <li> <p>When Transport is SQS, the
     * Destination is your queue URL.</p> </li> <li> <p>When Transport is SNS, the
     * Destination is the ARN of your topic.</p> </li> </ul>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p> The target for notification messages. The Destination’s format is determined
     * by the specified Transport: </p> <ul> <li> <p>When Transport is Email, the
     * Destination is your email address.</p> </li> <li> <p>When Transport is SQS, the
     * Destination is your queue URL.</p> </li> <li> <p>When Transport is SNS, the
     * Destination is the ARN of your topic.</p> </li> </ul>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p> The target for notification messages. The Destination’s format is determined
     * by the specified Transport: </p> <ul> <li> <p>When Transport is Email, the
     * Destination is your email address.</p> </li> <li> <p>When Transport is SQS, the
     * Destination is your queue URL.</p> </li> <li> <p>When Transport is SNS, the
     * Destination is the ARN of your topic.</p> </li> </ul>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p> The target for notification messages. The Destination’s format is determined
     * by the specified Transport: </p> <ul> <li> <p>When Transport is Email, the
     * Destination is your email address.</p> </li> <li> <p>When Transport is SQS, the
     * Destination is your queue URL.</p> </li> <li> <p>When Transport is SNS, the
     * Destination is the ARN of your topic.</p> </li> </ul>
     */
    inline NotificationSpecification& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p> The target for notification messages. The Destination’s format is determined
     * by the specified Transport: </p> <ul> <li> <p>When Transport is Email, the
     * Destination is your email address.</p> </li> <li> <p>When Transport is SQS, the
     * Destination is your queue URL.</p> </li> <li> <p>When Transport is SNS, the
     * Destination is the ARN of your topic.</p> </li> </ul>
     */
    inline NotificationSpecification& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p> The target for notification messages. The Destination’s format is determined
     * by the specified Transport: </p> <ul> <li> <p>When Transport is Email, the
     * Destination is your email address.</p> </li> <li> <p>When Transport is SQS, the
     * Destination is your queue URL.</p> </li> <li> <p>When Transport is SNS, the
     * Destination is the ARN of your topic.</p> </li> </ul>
     */
    inline NotificationSpecification& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p> The method Amazon Mechanical Turk uses to send the notification. Valid
     * Values: Email | SQS | SNS. </p>
     */
    inline const NotificationTransport& GetTransport() const{ return m_transport; }

    /**
     * <p> The method Amazon Mechanical Turk uses to send the notification. Valid
     * Values: Email | SQS | SNS. </p>
     */
    inline bool TransportHasBeenSet() const { return m_transportHasBeenSet; }

    /**
     * <p> The method Amazon Mechanical Turk uses to send the notification. Valid
     * Values: Email | SQS | SNS. </p>
     */
    inline void SetTransport(const NotificationTransport& value) { m_transportHasBeenSet = true; m_transport = value; }

    /**
     * <p> The method Amazon Mechanical Turk uses to send the notification. Valid
     * Values: Email | SQS | SNS. </p>
     */
    inline void SetTransport(NotificationTransport&& value) { m_transportHasBeenSet = true; m_transport = std::move(value); }

    /**
     * <p> The method Amazon Mechanical Turk uses to send the notification. Valid
     * Values: Email | SQS | SNS. </p>
     */
    inline NotificationSpecification& WithTransport(const NotificationTransport& value) { SetTransport(value); return *this;}

    /**
     * <p> The method Amazon Mechanical Turk uses to send the notification. Valid
     * Values: Email | SQS | SNS. </p>
     */
    inline NotificationSpecification& WithTransport(NotificationTransport&& value) { SetTransport(std::move(value)); return *this;}


    /**
     * <p>The version of the Notification API to use. Valid value is 2006-05-05.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the Notification API to use. Valid value is 2006-05-05.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the Notification API to use. Valid value is 2006-05-05.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the Notification API to use. Valid value is 2006-05-05.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the Notification API to use. Valid value is 2006-05-05.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the Notification API to use. Valid value is 2006-05-05.</p>
     */
    inline NotificationSpecification& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the Notification API to use. Valid value is 2006-05-05.</p>
     */
    inline NotificationSpecification& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the Notification API to use. Valid value is 2006-05-05.</p>
     */
    inline NotificationSpecification& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p> The list of events that should cause notifications to be sent. Valid Values:
     * AssignmentAccepted | AssignmentAbandoned | AssignmentReturned |
     * AssignmentSubmitted | AssignmentRejected | AssignmentApproved | HITCreated |
     * HITExtended | HITDisposed | HITReviewable | HITExpired | Ping. The Ping event is
     * only valid for the SendTestEventNotification operation. </p>
     */
    inline const Aws::Vector<EventType>& GetEventTypes() const{ return m_eventTypes; }

    /**
     * <p> The list of events that should cause notifications to be sent. Valid Values:
     * AssignmentAccepted | AssignmentAbandoned | AssignmentReturned |
     * AssignmentSubmitted | AssignmentRejected | AssignmentApproved | HITCreated |
     * HITExtended | HITDisposed | HITReviewable | HITExpired | Ping. The Ping event is
     * only valid for the SendTestEventNotification operation. </p>
     */
    inline bool EventTypesHasBeenSet() const { return m_eventTypesHasBeenSet; }

    /**
     * <p> The list of events that should cause notifications to be sent. Valid Values:
     * AssignmentAccepted | AssignmentAbandoned | AssignmentReturned |
     * AssignmentSubmitted | AssignmentRejected | AssignmentApproved | HITCreated |
     * HITExtended | HITDisposed | HITReviewable | HITExpired | Ping. The Ping event is
     * only valid for the SendTestEventNotification operation. </p>
     */
    inline void SetEventTypes(const Aws::Vector<EventType>& value) { m_eventTypesHasBeenSet = true; m_eventTypes = value; }

    /**
     * <p> The list of events that should cause notifications to be sent. Valid Values:
     * AssignmentAccepted | AssignmentAbandoned | AssignmentReturned |
     * AssignmentSubmitted | AssignmentRejected | AssignmentApproved | HITCreated |
     * HITExtended | HITDisposed | HITReviewable | HITExpired | Ping. The Ping event is
     * only valid for the SendTestEventNotification operation. </p>
     */
    inline void SetEventTypes(Aws::Vector<EventType>&& value) { m_eventTypesHasBeenSet = true; m_eventTypes = std::move(value); }

    /**
     * <p> The list of events that should cause notifications to be sent. Valid Values:
     * AssignmentAccepted | AssignmentAbandoned | AssignmentReturned |
     * AssignmentSubmitted | AssignmentRejected | AssignmentApproved | HITCreated |
     * HITExtended | HITDisposed | HITReviewable | HITExpired | Ping. The Ping event is
     * only valid for the SendTestEventNotification operation. </p>
     */
    inline NotificationSpecification& WithEventTypes(const Aws::Vector<EventType>& value) { SetEventTypes(value); return *this;}

    /**
     * <p> The list of events that should cause notifications to be sent. Valid Values:
     * AssignmentAccepted | AssignmentAbandoned | AssignmentReturned |
     * AssignmentSubmitted | AssignmentRejected | AssignmentApproved | HITCreated |
     * HITExtended | HITDisposed | HITReviewable | HITExpired | Ping. The Ping event is
     * only valid for the SendTestEventNotification operation. </p>
     */
    inline NotificationSpecification& WithEventTypes(Aws::Vector<EventType>&& value) { SetEventTypes(std::move(value)); return *this;}

    /**
     * <p> The list of events that should cause notifications to be sent. Valid Values:
     * AssignmentAccepted | AssignmentAbandoned | AssignmentReturned |
     * AssignmentSubmitted | AssignmentRejected | AssignmentApproved | HITCreated |
     * HITExtended | HITDisposed | HITReviewable | HITExpired | Ping. The Ping event is
     * only valid for the SendTestEventNotification operation. </p>
     */
    inline NotificationSpecification& AddEventTypes(const EventType& value) { m_eventTypesHasBeenSet = true; m_eventTypes.push_back(value); return *this; }

    /**
     * <p> The list of events that should cause notifications to be sent. Valid Values:
     * AssignmentAccepted | AssignmentAbandoned | AssignmentReturned |
     * AssignmentSubmitted | AssignmentRejected | AssignmentApproved | HITCreated |
     * HITExtended | HITDisposed | HITReviewable | HITExpired | Ping. The Ping event is
     * only valid for the SendTestEventNotification operation. </p>
     */
    inline NotificationSpecification& AddEventTypes(EventType&& value) { m_eventTypesHasBeenSet = true; m_eventTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_destination;
    bool m_destinationHasBeenSet;

    NotificationTransport m_transport;
    bool m_transportHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::Vector<EventType> m_eventTypes;
    bool m_eventTypesHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
