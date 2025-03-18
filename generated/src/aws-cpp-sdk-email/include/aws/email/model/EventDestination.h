/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains information about an event destination.</p>  <p>When you
   * create or update an event destination, you must provide one, and only one,
   * destination. The destination can be Amazon CloudWatch, Amazon Kinesis Firehose
   * or Amazon Simple Notification Service (Amazon SNS).</p>  <p>Event
   * destinations are associated with configuration sets, which enable you to publish
   * email sending events to Amazon CloudWatch, Amazon Kinesis Firehose, or Amazon
   * Simple Notification Service (Amazon SNS). For information about using
   * configuration sets, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/EventDestination">AWS
   * API Reference</a></p>
   */
  class EventDestination
  {
  public:
    AWS_SES_API EventDestination() = default;
    AWS_SES_API EventDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API EventDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the event destination. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers
     * (0-9), underscores (_), or dashes (-).</p> </li> <li> <p>Contain 64 characters
     * or fewer.</p> </li> </ul>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EventDestination& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets whether Amazon SES publishes events to this destination when you send an
     * email with the associated configuration set. Set to <code>true</code> to enable
     * publishing to this destination; set to <code>false</code> to prevent publishing
     * to this destination. The default value is <code>false</code>.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline EventDestination& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of email sending events to publish to the event destination.</p>
     * <ul> <li> <p> <code>send</code> - The call was successful and Amazon SES is
     * attempting to deliver the email.</p> </li> <li> <p> <code>reject</code> - Amazon
     * SES determined that the email contained a virus and rejected it.</p> </li> <li>
     * <p> <code>bounce</code> - The recipient's mail server permanently rejected the
     * email. This corresponds to a hard bounce.</p> </li> <li> <p>
     * <code>complaint</code> - The recipient marked the email as spam.</p> </li> <li>
     * <p> <code>delivery</code> - Amazon SES successfully delivered the email to the
     * recipient's mail server.</p> </li> <li> <p> <code>open</code> - The recipient
     * received the email and opened it in their email client.</p> </li> <li> <p>
     * <code>click</code> - The recipient clicked one or more links in the email.</p>
     * </li> <li> <p> <code>renderingFailure</code> - Amazon SES did not send the email
     * because of a template rendering issue.</p> </li> </ul>
     */
    inline const Aws::Vector<EventType>& GetMatchingEventTypes() const { return m_matchingEventTypes; }
    inline bool MatchingEventTypesHasBeenSet() const { return m_matchingEventTypesHasBeenSet; }
    template<typename MatchingEventTypesT = Aws::Vector<EventType>>
    void SetMatchingEventTypes(MatchingEventTypesT&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = std::forward<MatchingEventTypesT>(value); }
    template<typename MatchingEventTypesT = Aws::Vector<EventType>>
    EventDestination& WithMatchingEventTypes(MatchingEventTypesT&& value) { SetMatchingEventTypes(std::forward<MatchingEventTypesT>(value)); return *this;}
    inline EventDestination& AddMatchingEventTypes(EventType value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains the delivery stream ARN and the IAM role ARN
     * associated with an Amazon Kinesis Firehose event destination.</p>
     */
    inline const KinesisFirehoseDestination& GetKinesisFirehoseDestination() const { return m_kinesisFirehoseDestination; }
    inline bool KinesisFirehoseDestinationHasBeenSet() const { return m_kinesisFirehoseDestinationHasBeenSet; }
    template<typename KinesisFirehoseDestinationT = KinesisFirehoseDestination>
    void SetKinesisFirehoseDestination(KinesisFirehoseDestinationT&& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = std::forward<KinesisFirehoseDestinationT>(value); }
    template<typename KinesisFirehoseDestinationT = KinesisFirehoseDestination>
    EventDestination& WithKinesisFirehoseDestination(KinesisFirehoseDestinationT&& value) { SetKinesisFirehoseDestination(std::forward<KinesisFirehoseDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the names, default values, and sources of the
     * dimensions associated with an Amazon CloudWatch event destination.</p>
     */
    inline const CloudWatchDestination& GetCloudWatchDestination() const { return m_cloudWatchDestination; }
    inline bool CloudWatchDestinationHasBeenSet() const { return m_cloudWatchDestinationHasBeenSet; }
    template<typename CloudWatchDestinationT = CloudWatchDestination>
    void SetCloudWatchDestination(CloudWatchDestinationT&& value) { m_cloudWatchDestinationHasBeenSet = true; m_cloudWatchDestination = std::forward<CloudWatchDestinationT>(value); }
    template<typename CloudWatchDestinationT = CloudWatchDestination>
    EventDestination& WithCloudWatchDestination(CloudWatchDestinationT&& value) { SetCloudWatchDestination(std::forward<CloudWatchDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the topic ARN associated with an Amazon Simple
     * Notification Service (Amazon SNS) event destination.</p>
     */
    inline const SNSDestination& GetSNSDestination() const { return m_sNSDestination; }
    inline bool SNSDestinationHasBeenSet() const { return m_sNSDestinationHasBeenSet; }
    template<typename SNSDestinationT = SNSDestination>
    void SetSNSDestination(SNSDestinationT&& value) { m_sNSDestinationHasBeenSet = true; m_sNSDestination = std::forward<SNSDestinationT>(value); }
    template<typename SNSDestinationT = SNSDestination>
    EventDestination& WithSNSDestination(SNSDestinationT&& value) { SetSNSDestination(std::forward<SNSDestinationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<EventType> m_matchingEventTypes;
    bool m_matchingEventTypesHasBeenSet = false;

    KinesisFirehoseDestination m_kinesisFirehoseDestination;
    bool m_kinesisFirehoseDestinationHasBeenSet = false;

    CloudWatchDestination m_cloudWatchDestination;
    bool m_cloudWatchDestinationHasBeenSet = false;

    SNSDestination m_sNSDestination;
    bool m_sNSDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
