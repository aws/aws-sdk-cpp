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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/KinesisFirehoseDestination.h>
#include <aws/pinpoint-email/model/CloudWatchDestination.h>
#include <aws/pinpoint-email/model/SnsDestination.h>
#include <aws/pinpoint-email/model/PinpointDestination.h>
#include <aws/pinpoint-email/model/EventType.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that defines the event destination. Specifically, it defines which
   * services receive events from emails sent using the configuration set that the
   * event destination is associated with. Also defines the types of events that are
   * sent to the event destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/EventDestinationDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API EventDestinationDefinition
  {
  public:
    EventDestinationDefinition();
    EventDestinationDefinition(Aws::Utils::Json::JsonView jsonValue);
    EventDestinationDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If <code>true</code>, the event destination is enabled. When the event
     * destination is enabled, the specified event types are sent to the destinations
     * in this <code>EventDestinationDefinition</code>.</p> <p>If <code>false</code>,
     * the event destination is disabled. When the event destination is disabled,
     * events aren't sent to the specified destinations.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>If <code>true</code>, the event destination is enabled. When the event
     * destination is enabled, the specified event types are sent to the destinations
     * in this <code>EventDestinationDefinition</code>.</p> <p>If <code>false</code>,
     * the event destination is disabled. When the event destination is disabled,
     * events aren't sent to the specified destinations.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>If <code>true</code>, the event destination is enabled. When the event
     * destination is enabled, the specified event types are sent to the destinations
     * in this <code>EventDestinationDefinition</code>.</p> <p>If <code>false</code>,
     * the event destination is disabled. When the event destination is disabled,
     * events aren't sent to the specified destinations.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>If <code>true</code>, the event destination is enabled. When the event
     * destination is enabled, the specified event types are sent to the destinations
     * in this <code>EventDestinationDefinition</code>.</p> <p>If <code>false</code>,
     * the event destination is disabled. When the event destination is disabled,
     * events aren't sent to the specified destinations.</p>
     */
    inline EventDestinationDefinition& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>An array that specifies which events Amazon Pinpoint should send to the
     * destinations in this <code>EventDestinationDefinition</code>.</p>
     */
    inline const Aws::Vector<EventType>& GetMatchingEventTypes() const{ return m_matchingEventTypes; }

    /**
     * <p>An array that specifies which events Amazon Pinpoint should send to the
     * destinations in this <code>EventDestinationDefinition</code>.</p>
     */
    inline bool MatchingEventTypesHasBeenSet() const { return m_matchingEventTypesHasBeenSet; }

    /**
     * <p>An array that specifies which events Amazon Pinpoint should send to the
     * destinations in this <code>EventDestinationDefinition</code>.</p>
     */
    inline void SetMatchingEventTypes(const Aws::Vector<EventType>& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = value; }

    /**
     * <p>An array that specifies which events Amazon Pinpoint should send to the
     * destinations in this <code>EventDestinationDefinition</code>.</p>
     */
    inline void SetMatchingEventTypes(Aws::Vector<EventType>&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = std::move(value); }

    /**
     * <p>An array that specifies which events Amazon Pinpoint should send to the
     * destinations in this <code>EventDestinationDefinition</code>.</p>
     */
    inline EventDestinationDefinition& WithMatchingEventTypes(const Aws::Vector<EventType>& value) { SetMatchingEventTypes(value); return *this;}

    /**
     * <p>An array that specifies which events Amazon Pinpoint should send to the
     * destinations in this <code>EventDestinationDefinition</code>.</p>
     */
    inline EventDestinationDefinition& WithMatchingEventTypes(Aws::Vector<EventType>&& value) { SetMatchingEventTypes(std::move(value)); return *this;}

    /**
     * <p>An array that specifies which events Amazon Pinpoint should send to the
     * destinations in this <code>EventDestinationDefinition</code>.</p>
     */
    inline EventDestinationDefinition& AddMatchingEventTypes(const EventType& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(value); return *this; }

    /**
     * <p>An array that specifies which events Amazon Pinpoint should send to the
     * destinations in this <code>EventDestinationDefinition</code>.</p>
     */
    inline EventDestinationDefinition& AddMatchingEventTypes(EventType&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
     */
    inline const KinesisFirehoseDestination& GetKinesisFirehoseDestination() const{ return m_kinesisFirehoseDestination; }

    /**
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
     */
    inline bool KinesisFirehoseDestinationHasBeenSet() const { return m_kinesisFirehoseDestinationHasBeenSet; }

    /**
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
     */
    inline void SetKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = value; }

    /**
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
     */
    inline void SetKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = std::move(value); }

    /**
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
     */
    inline EventDestinationDefinition& WithKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { SetKinesisFirehoseDestination(value); return *this;}

    /**
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
     */
    inline EventDestinationDefinition& WithKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { SetKinesisFirehoseDestination(std::move(value)); return *this;}


    /**
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline const CloudWatchDestination& GetCloudWatchDestination() const{ return m_cloudWatchDestination; }

    /**
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline bool CloudWatchDestinationHasBeenSet() const { return m_cloudWatchDestinationHasBeenSet; }

    /**
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline void SetCloudWatchDestination(const CloudWatchDestination& value) { m_cloudWatchDestinationHasBeenSet = true; m_cloudWatchDestination = value; }

    /**
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline void SetCloudWatchDestination(CloudWatchDestination&& value) { m_cloudWatchDestinationHasBeenSet = true; m_cloudWatchDestination = std::move(value); }

    /**
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline EventDestinationDefinition& WithCloudWatchDestination(const CloudWatchDestination& value) { SetCloudWatchDestination(value); return *this;}

    /**
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline EventDestinationDefinition& WithCloudWatchDestination(CloudWatchDestination&& value) { SetCloudWatchDestination(std::move(value)); return *this;}


    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notification when certain email events occur.</p>
     */
    inline const SnsDestination& GetSnsDestination() const{ return m_snsDestination; }

    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notification when certain email events occur.</p>
     */
    inline bool SnsDestinationHasBeenSet() const { return m_snsDestinationHasBeenSet; }

    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notification when certain email events occur.</p>
     */
    inline void SetSnsDestination(const SnsDestination& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = value; }

    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notification when certain email events occur.</p>
     */
    inline void SetSnsDestination(SnsDestination&& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = std::move(value); }

    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notification when certain email events occur.</p>
     */
    inline EventDestinationDefinition& WithSnsDestination(const SnsDestination& value) { SetSnsDestination(value); return *this;}

    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notification when certain email events occur.</p>
     */
    inline EventDestinationDefinition& WithSnsDestination(SnsDestination&& value) { SetSnsDestination(std::move(value)); return *this;}


    /**
     * <p>An object that defines a Amazon Pinpoint destination for email events. You
     * can use Amazon Pinpoint events to create attributes in Amazon Pinpoint projects.
     * You can use these attributes to create segments for your campaigns.</p>
     */
    inline const PinpointDestination& GetPinpointDestination() const{ return m_pinpointDestination; }

    /**
     * <p>An object that defines a Amazon Pinpoint destination for email events. You
     * can use Amazon Pinpoint events to create attributes in Amazon Pinpoint projects.
     * You can use these attributes to create segments for your campaigns.</p>
     */
    inline bool PinpointDestinationHasBeenSet() const { return m_pinpointDestinationHasBeenSet; }

    /**
     * <p>An object that defines a Amazon Pinpoint destination for email events. You
     * can use Amazon Pinpoint events to create attributes in Amazon Pinpoint projects.
     * You can use these attributes to create segments for your campaigns.</p>
     */
    inline void SetPinpointDestination(const PinpointDestination& value) { m_pinpointDestinationHasBeenSet = true; m_pinpointDestination = value; }

    /**
     * <p>An object that defines a Amazon Pinpoint destination for email events. You
     * can use Amazon Pinpoint events to create attributes in Amazon Pinpoint projects.
     * You can use these attributes to create segments for your campaigns.</p>
     */
    inline void SetPinpointDestination(PinpointDestination&& value) { m_pinpointDestinationHasBeenSet = true; m_pinpointDestination = std::move(value); }

    /**
     * <p>An object that defines a Amazon Pinpoint destination for email events. You
     * can use Amazon Pinpoint events to create attributes in Amazon Pinpoint projects.
     * You can use these attributes to create segments for your campaigns.</p>
     */
    inline EventDestinationDefinition& WithPinpointDestination(const PinpointDestination& value) { SetPinpointDestination(value); return *this;}

    /**
     * <p>An object that defines a Amazon Pinpoint destination for email events. You
     * can use Amazon Pinpoint events to create attributes in Amazon Pinpoint projects.
     * You can use these attributes to create segments for your campaigns.</p>
     */
    inline EventDestinationDefinition& WithPinpointDestination(PinpointDestination&& value) { SetPinpointDestination(std::move(value)); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::Vector<EventType> m_matchingEventTypes;
    bool m_matchingEventTypesHasBeenSet;

    KinesisFirehoseDestination m_kinesisFirehoseDestination;
    bool m_kinesisFirehoseDestinationHasBeenSet;

    CloudWatchDestination m_cloudWatchDestination;
    bool m_cloudWatchDestinationHasBeenSet;

    SnsDestination m_snsDestination;
    bool m_snsDestinationHasBeenSet;

    PinpointDestination m_pinpointDestination;
    bool m_pinpointDestinationHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
