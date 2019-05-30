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
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/Destination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/EmailContent.h>
#include <aws/pinpoint-email/model/MessageTag.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to send an email message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/SendEmailRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API SendEmailRequest : public PinpointEmailRequest
  {
  public:
    SendEmailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendEmail"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The email address that you want to use as the "From" address for the email.
     * The address that you specify has to be verified. </p>
     */
    inline const Aws::String& GetFromEmailAddress() const{ return m_fromEmailAddress; }

    /**
     * <p>The email address that you want to use as the "From" address for the email.
     * The address that you specify has to be verified. </p>
     */
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }

    /**
     * <p>The email address that you want to use as the "From" address for the email.
     * The address that you specify has to be verified. </p>
     */
    inline void SetFromEmailAddress(const Aws::String& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = value; }

    /**
     * <p>The email address that you want to use as the "From" address for the email.
     * The address that you specify has to be verified. </p>
     */
    inline void SetFromEmailAddress(Aws::String&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::move(value); }

    /**
     * <p>The email address that you want to use as the "From" address for the email.
     * The address that you specify has to be verified. </p>
     */
    inline void SetFromEmailAddress(const char* value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.assign(value); }

    /**
     * <p>The email address that you want to use as the "From" address for the email.
     * The address that you specify has to be verified. </p>
     */
    inline SendEmailRequest& WithFromEmailAddress(const Aws::String& value) { SetFromEmailAddress(value); return *this;}

    /**
     * <p>The email address that you want to use as the "From" address for the email.
     * The address that you specify has to be verified. </p>
     */
    inline SendEmailRequest& WithFromEmailAddress(Aws::String&& value) { SetFromEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address that you want to use as the "From" address for the email.
     * The address that you specify has to be verified. </p>
     */
    inline SendEmailRequest& WithFromEmailAddress(const char* value) { SetFromEmailAddress(value); return *this;}


    /**
     * <p>An object that contains the recipients of the email message.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>An object that contains the recipients of the email message.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>An object that contains the recipients of the email message.</p>
     */
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>An object that contains the recipients of the email message.</p>
     */
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>An object that contains the recipients of the email message.</p>
     */
    inline SendEmailRequest& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>An object that contains the recipients of the email message.</p>
     */
    inline SendEmailRequest& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplyToAddresses() const{ return m_replyToAddresses; }

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline bool ReplyToAddressesHasBeenSet() const { return m_replyToAddressesHasBeenSet; }

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline void SetReplyToAddresses(const Aws::Vector<Aws::String>& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = value; }

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline void SetReplyToAddresses(Aws::Vector<Aws::String>&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = std::move(value); }

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline SendEmailRequest& WithReplyToAddresses(const Aws::Vector<Aws::String>& value) { SetReplyToAddresses(value); return *this;}

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline SendEmailRequest& WithReplyToAddresses(Aws::Vector<Aws::String>&& value) { SetReplyToAddresses(std::move(value)); return *this;}

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline SendEmailRequest& AddReplyToAddresses(const Aws::String& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline SendEmailRequest& AddReplyToAddresses(Aws::String&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline SendEmailRequest& AddReplyToAddresses(const char* value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }


    /**
     * <p>The address that Amazon Pinpoint should send bounce and complaint
     * notifications to.</p>
     */
    inline const Aws::String& GetFeedbackForwardingEmailAddress() const{ return m_feedbackForwardingEmailAddress; }

    /**
     * <p>The address that Amazon Pinpoint should send bounce and complaint
     * notifications to.</p>
     */
    inline bool FeedbackForwardingEmailAddressHasBeenSet() const { return m_feedbackForwardingEmailAddressHasBeenSet; }

    /**
     * <p>The address that Amazon Pinpoint should send bounce and complaint
     * notifications to.</p>
     */
    inline void SetFeedbackForwardingEmailAddress(const Aws::String& value) { m_feedbackForwardingEmailAddressHasBeenSet = true; m_feedbackForwardingEmailAddress = value; }

    /**
     * <p>The address that Amazon Pinpoint should send bounce and complaint
     * notifications to.</p>
     */
    inline void SetFeedbackForwardingEmailAddress(Aws::String&& value) { m_feedbackForwardingEmailAddressHasBeenSet = true; m_feedbackForwardingEmailAddress = std::move(value); }

    /**
     * <p>The address that Amazon Pinpoint should send bounce and complaint
     * notifications to.</p>
     */
    inline void SetFeedbackForwardingEmailAddress(const char* value) { m_feedbackForwardingEmailAddressHasBeenSet = true; m_feedbackForwardingEmailAddress.assign(value); }

    /**
     * <p>The address that Amazon Pinpoint should send bounce and complaint
     * notifications to.</p>
     */
    inline SendEmailRequest& WithFeedbackForwardingEmailAddress(const Aws::String& value) { SetFeedbackForwardingEmailAddress(value); return *this;}

    /**
     * <p>The address that Amazon Pinpoint should send bounce and complaint
     * notifications to.</p>
     */
    inline SendEmailRequest& WithFeedbackForwardingEmailAddress(Aws::String&& value) { SetFeedbackForwardingEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The address that Amazon Pinpoint should send bounce and complaint
     * notifications to.</p>
     */
    inline SendEmailRequest& WithFeedbackForwardingEmailAddress(const char* value) { SetFeedbackForwardingEmailAddress(value); return *this;}


    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message or a Raw message.</p>
     */
    inline const EmailContent& GetContent() const{ return m_content; }

    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message or a Raw message.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message or a Raw message.</p>
     */
    inline void SetContent(const EmailContent& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message or a Raw message.</p>
     */
    inline void SetContent(EmailContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message or a Raw message.</p>
     */
    inline SendEmailRequest& WithContent(const EmailContent& value) { SetContent(value); return *this;}

    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message or a Raw message.</p>
     */
    inline SendEmailRequest& WithContent(EmailContent&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline const Aws::Vector<MessageTag>& GetEmailTags() const{ return m_emailTags; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline bool EmailTagsHasBeenSet() const { return m_emailTagsHasBeenSet; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline void SetEmailTags(const Aws::Vector<MessageTag>& value) { m_emailTagsHasBeenSet = true; m_emailTags = value; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline void SetEmailTags(Aws::Vector<MessageTag>&& value) { m_emailTagsHasBeenSet = true; m_emailTags = std::move(value); }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline SendEmailRequest& WithEmailTags(const Aws::Vector<MessageTag>& value) { SetEmailTags(value); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline SendEmailRequest& WithEmailTags(Aws::Vector<MessageTag>&& value) { SetEmailTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline SendEmailRequest& AddEmailTags(const MessageTag& value) { m_emailTagsHasBeenSet = true; m_emailTags.push_back(value); return *this; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline SendEmailRequest& AddEmailTags(MessageTag&& value) { m_emailTagsHasBeenSet = true; m_emailTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the configuration set that you want to use when sending the
     * email.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set that you want to use when sending the
     * email.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set that you want to use when sending the
     * email.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set that you want to use when sending the
     * email.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set that you want to use when sending the
     * email.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set that you want to use when sending the
     * email.</p>
     */
    inline SendEmailRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set that you want to use when sending the
     * email.</p>
     */
    inline SendEmailRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set that you want to use when sending the
     * email.</p>
     */
    inline SendEmailRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}

  private:

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet;

    Destination m_destination;
    bool m_destinationHasBeenSet;

    Aws::Vector<Aws::String> m_replyToAddresses;
    bool m_replyToAddressesHasBeenSet;

    Aws::String m_feedbackForwardingEmailAddress;
    bool m_feedbackForwardingEmailAddressHasBeenSet;

    EmailContent m_content;
    bool m_contentHasBeenSet;

    Aws::Vector<MessageTag> m_emailTags;
    bool m_emailTagsHasBeenSet;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
