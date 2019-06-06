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
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/KinesisFirehoseDestination.h>
#include <aws/email/model/CloudWatchDestination.h>
#include <aws/email/model/SNSDestination.h>
#include <aws/email/model/EventType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>Contains information about the event destination that the specified email
   * sending events will be published to.</p> <note> <p>When you create or update an
   * event destination, you must provide one, and only one, destination. The
   * destination can be Amazon CloudWatch, Amazon Kinesis Firehose or Amazon Simple
   * Notification Service (Amazon SNS).</p> </note> <p>Event destinations are
   * associated with configuration sets, which enable you to publish email sending
   * events to Amazon CloudWatch, Amazon Kinesis Firehose, or Amazon Simple
   * Notification Service (Amazon SNS). For information about using configuration
   * sets, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/EventDestination">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API EventDestination
  {
  public:
    EventDestination();
    EventDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    EventDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the event destination. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the event destination. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the event destination. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the event destination. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the event destination. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the event destination. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline EventDestination& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event destination. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline EventDestination& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event destination. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline EventDestination& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Sets whether Amazon SES publishes events to this destination when you send an
     * email with the associated configuration set. Set to <code>true</code> to enable
     * publishing to this destination; set to <code>false</code> to prevent publishing
     * to this destination. The default value is <code>false</code>.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Sets whether Amazon SES publishes events to this destination when you send an
     * email with the associated configuration set. Set to <code>true</code> to enable
     * publishing to this destination; set to <code>false</code> to prevent publishing
     * to this destination. The default value is <code>false</code>.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Sets whether Amazon SES publishes events to this destination when you send an
     * email with the associated configuration set. Set to <code>true</code> to enable
     * publishing to this destination; set to <code>false</code> to prevent publishing
     * to this destination. The default value is <code>false</code>.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Sets whether Amazon SES publishes events to this destination when you send an
     * email with the associated configuration set. Set to <code>true</code> to enable
     * publishing to this destination; set to <code>false</code> to prevent publishing
     * to this destination. The default value is <code>false</code>.</p>
     */
    inline EventDestination& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The type of email sending events to publish to the event destination.</p>
     */
    inline const Aws::Vector<EventType>& GetMatchingEventTypes() const{ return m_matchingEventTypes; }

    /**
     * <p>The type of email sending events to publish to the event destination.</p>
     */
    inline bool MatchingEventTypesHasBeenSet() const { return m_matchingEventTypesHasBeenSet; }

    /**
     * <p>The type of email sending events to publish to the event destination.</p>
     */
    inline void SetMatchingEventTypes(const Aws::Vector<EventType>& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = value; }

    /**
     * <p>The type of email sending events to publish to the event destination.</p>
     */
    inline void SetMatchingEventTypes(Aws::Vector<EventType>&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = std::move(value); }

    /**
     * <p>The type of email sending events to publish to the event destination.</p>
     */
    inline EventDestination& WithMatchingEventTypes(const Aws::Vector<EventType>& value) { SetMatchingEventTypes(value); return *this;}

    /**
     * <p>The type of email sending events to publish to the event destination.</p>
     */
    inline EventDestination& WithMatchingEventTypes(Aws::Vector<EventType>&& value) { SetMatchingEventTypes(std::move(value)); return *this;}

    /**
     * <p>The type of email sending events to publish to the event destination.</p>
     */
    inline EventDestination& AddMatchingEventTypes(const EventType& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(value); return *this; }

    /**
     * <p>The type of email sending events to publish to the event destination.</p>
     */
    inline EventDestination& AddMatchingEventTypes(EventType&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that contains the delivery stream ARN and the IAM role ARN
     * associated with an Amazon Kinesis Firehose event destination.</p>
     */
    inline const KinesisFirehoseDestination& GetKinesisFirehoseDestination() const{ return m_kinesisFirehoseDestination; }

    /**
     * <p>An object that contains the delivery stream ARN and the IAM role ARN
     * associated with an Amazon Kinesis Firehose event destination.</p>
     */
    inline bool KinesisFirehoseDestinationHasBeenSet() const { return m_kinesisFirehoseDestinationHasBeenSet; }

    /**
     * <p>An object that contains the delivery stream ARN and the IAM role ARN
     * associated with an Amazon Kinesis Firehose event destination.</p>
     */
    inline void SetKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = value; }

    /**
     * <p>An object that contains the delivery stream ARN and the IAM role ARN
     * associated with an Amazon Kinesis Firehose event destination.</p>
     */
    inline void SetKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = std::move(value); }

    /**
     * <p>An object that contains the delivery stream ARN and the IAM role ARN
     * associated with an Amazon Kinesis Firehose event destination.</p>
     */
    inline EventDestination& WithKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { SetKinesisFirehoseDestination(value); return *this;}

    /**
     * <p>An object that contains the delivery stream ARN and the IAM role ARN
     * associated with an Amazon Kinesis Firehose event destination.</p>
     */
    inline EventDestination& WithKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { SetKinesisFirehoseDestination(std::move(value)); return *this;}


    /**
     * <p>An object that contains the names, default values, and sources of the
     * dimensions associated with an Amazon CloudWatch event destination.</p>
     */
    inline const CloudWatchDestination& GetCloudWatchDestination() const{ return m_cloudWatchDestination; }

    /**
     * <p>An object that contains the names, default values, and sources of the
     * dimensions associated with an Amazon CloudWatch event destination.</p>
     */
    inline bool CloudWatchDestinationHasBeenSet() const { return m_cloudWatchDestinationHasBeenSet; }

    /**
     * <p>An object that contains the names, default values, and sources of the
     * dimensions associated with an Amazon CloudWatch event destination.</p>
     */
    inline void SetCloudWatchDestination(const CloudWatchDestination& value) { m_cloudWatchDestinationHasBeenSet = true; m_cloudWatchDestination = value; }

    /**
     * <p>An object that contains the names, default values, and sources of the
     * dimensions associated with an Amazon CloudWatch event destination.</p>
     */
    inline void SetCloudWatchDestination(CloudWatchDestination&& value) { m_cloudWatchDestinationHasBeenSet = true; m_cloudWatchDestination = std::move(value); }

    /**
     * <p>An object that contains the names, default values, and sources of the
     * dimensions associated with an Amazon CloudWatch event destination.</p>
     */
    inline EventDestination& WithCloudWatchDestination(const CloudWatchDestination& value) { SetCloudWatchDestination(value); return *this;}

    /**
     * <p>An object that contains the names, default values, and sources of the
     * dimensions associated with an Amazon CloudWatch event destination.</p>
     */
    inline EventDestination& WithCloudWatchDestination(CloudWatchDestination&& value) { SetCloudWatchDestination(std::move(value)); return *this;}


    /**
     * <p>An object that contains the topic ARN associated with an Amazon Simple
     * Notification Service (Amazon SNS) event destination.</p>
     */
    inline const SNSDestination& GetSNSDestination() const{ return m_sNSDestination; }

    /**
     * <p>An object that contains the topic ARN associated with an Amazon Simple
     * Notification Service (Amazon SNS) event destination.</p>
     */
    inline bool SNSDestinationHasBeenSet() const { return m_sNSDestinationHasBeenSet; }

    /**
     * <p>An object that contains the topic ARN associated with an Amazon Simple
     * Notification Service (Amazon SNS) event destination.</p>
     */
    inline void SetSNSDestination(const SNSDestination& value) { m_sNSDestinationHasBeenSet = true; m_sNSDestination = value; }

    /**
     * <p>An object that contains the topic ARN associated with an Amazon Simple
     * Notification Service (Amazon SNS) event destination.</p>
     */
    inline void SetSNSDestination(SNSDestination&& value) { m_sNSDestinationHasBeenSet = true; m_sNSDestination = std::move(value); }

    /**
     * <p>An object that contains the topic ARN associated with an Amazon Simple
     * Notification Service (Amazon SNS) event destination.</p>
     */
    inline EventDestination& WithSNSDestination(const SNSDestination& value) { SetSNSDestination(value); return *this;}

    /**
     * <p>An object that contains the topic ARN associated with an Amazon Simple
     * Notification Service (Amazon SNS) event destination.</p>
     */
    inline EventDestination& WithSNSDestination(SNSDestination&& value) { SetSNSDestination(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::Vector<EventType> m_matchingEventTypes;
    bool m_matchingEventTypesHasBeenSet;

    KinesisFirehoseDestination m_kinesisFirehoseDestination;
    bool m_kinesisFirehoseDestinationHasBeenSet;

    CloudWatchDestination m_cloudWatchDestination;
    bool m_cloudWatchDestinationHasBeenSet;

    SNSDestination m_sNSDestination;
    bool m_sNSDestinationHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
