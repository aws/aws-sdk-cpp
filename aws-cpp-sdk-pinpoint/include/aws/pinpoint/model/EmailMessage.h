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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/RawEmail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/SimpleEmail.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the default settings and content for a one-time email message
   * that's sent directly to an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EmailMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EmailMessage
  {
  public:
    EmailMessage();
    EmailMessage(Aws::Utils::Json::JsonView jsonValue);
    EmailMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The body of the email message.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The body of the email message.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The body of the email message.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The body of the email message.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The body of the email message.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The body of the email message.</p>
     */
    inline EmailMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The body of the email message.</p>
     */
    inline EmailMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The body of the email message.</p>
     */
    inline EmailMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The email address to forward bounces and complaints to, if feedback
     * forwarding is enabled.</p>
     */
    inline const Aws::String& GetFeedbackForwardingAddress() const{ return m_feedbackForwardingAddress; }

    /**
     * <p>The email address to forward bounces and complaints to, if feedback
     * forwarding is enabled.</p>
     */
    inline bool FeedbackForwardingAddressHasBeenSet() const { return m_feedbackForwardingAddressHasBeenSet; }

    /**
     * <p>The email address to forward bounces and complaints to, if feedback
     * forwarding is enabled.</p>
     */
    inline void SetFeedbackForwardingAddress(const Aws::String& value) { m_feedbackForwardingAddressHasBeenSet = true; m_feedbackForwardingAddress = value; }

    /**
     * <p>The email address to forward bounces and complaints to, if feedback
     * forwarding is enabled.</p>
     */
    inline void SetFeedbackForwardingAddress(Aws::String&& value) { m_feedbackForwardingAddressHasBeenSet = true; m_feedbackForwardingAddress = std::move(value); }

    /**
     * <p>The email address to forward bounces and complaints to, if feedback
     * forwarding is enabled.</p>
     */
    inline void SetFeedbackForwardingAddress(const char* value) { m_feedbackForwardingAddressHasBeenSet = true; m_feedbackForwardingAddress.assign(value); }

    /**
     * <p>The email address to forward bounces and complaints to, if feedback
     * forwarding is enabled.</p>
     */
    inline EmailMessage& WithFeedbackForwardingAddress(const Aws::String& value) { SetFeedbackForwardingAddress(value); return *this;}

    /**
     * <p>The email address to forward bounces and complaints to, if feedback
     * forwarding is enabled.</p>
     */
    inline EmailMessage& WithFeedbackForwardingAddress(Aws::String&& value) { SetFeedbackForwardingAddress(std::move(value)); return *this;}

    /**
     * <p>The email address to forward bounces and complaints to, if feedback
     * forwarding is enabled.</p>
     */
    inline EmailMessage& WithFeedbackForwardingAddress(const char* value) { SetFeedbackForwardingAddress(value); return *this;}


    /**
     * <p>The verified email address to send the email message from. The default value
     * is the FromAddress specified for the email channel.</p>
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }

    /**
     * <p>The verified email address to send the email message from. The default value
     * is the FromAddress specified for the email channel.</p>
     */
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }

    /**
     * <p>The verified email address to send the email message from. The default value
     * is the FromAddress specified for the email channel.</p>
     */
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }

    /**
     * <p>The verified email address to send the email message from. The default value
     * is the FromAddress specified for the email channel.</p>
     */
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }

    /**
     * <p>The verified email address to send the email message from. The default value
     * is the FromAddress specified for the email channel.</p>
     */
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }

    /**
     * <p>The verified email address to send the email message from. The default value
     * is the FromAddress specified for the email channel.</p>
     */
    inline EmailMessage& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}

    /**
     * <p>The verified email address to send the email message from. The default value
     * is the FromAddress specified for the email channel.</p>
     */
    inline EmailMessage& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}

    /**
     * <p>The verified email address to send the email message from. The default value
     * is the FromAddress specified for the email channel.</p>
     */
    inline EmailMessage& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}


    /**
     * <p>The email message, represented as a raw MIME message.</p>
     */
    inline const RawEmail& GetRawEmail() const{ return m_rawEmail; }

    /**
     * <p>The email message, represented as a raw MIME message.</p>
     */
    inline bool RawEmailHasBeenSet() const { return m_rawEmailHasBeenSet; }

    /**
     * <p>The email message, represented as a raw MIME message.</p>
     */
    inline void SetRawEmail(const RawEmail& value) { m_rawEmailHasBeenSet = true; m_rawEmail = value; }

    /**
     * <p>The email message, represented as a raw MIME message.</p>
     */
    inline void SetRawEmail(RawEmail&& value) { m_rawEmailHasBeenSet = true; m_rawEmail = std::move(value); }

    /**
     * <p>The email message, represented as a raw MIME message.</p>
     */
    inline EmailMessage& WithRawEmail(const RawEmail& value) { SetRawEmail(value); return *this;}

    /**
     * <p>The email message, represented as a raw MIME message.</p>
     */
    inline EmailMessage& WithRawEmail(RawEmail&& value) { SetRawEmail(std::move(value)); return *this;}


    /**
     * <p>The reply-to email address(es) for the email message. If a recipient replies
     * to the email, each reply-to address receives the reply.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplyToAddresses() const{ return m_replyToAddresses; }

    /**
     * <p>The reply-to email address(es) for the email message. If a recipient replies
     * to the email, each reply-to address receives the reply.</p>
     */
    inline bool ReplyToAddressesHasBeenSet() const { return m_replyToAddressesHasBeenSet; }

    /**
     * <p>The reply-to email address(es) for the email message. If a recipient replies
     * to the email, each reply-to address receives the reply.</p>
     */
    inline void SetReplyToAddresses(const Aws::Vector<Aws::String>& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = value; }

    /**
     * <p>The reply-to email address(es) for the email message. If a recipient replies
     * to the email, each reply-to address receives the reply.</p>
     */
    inline void SetReplyToAddresses(Aws::Vector<Aws::String>&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = std::move(value); }

    /**
     * <p>The reply-to email address(es) for the email message. If a recipient replies
     * to the email, each reply-to address receives the reply.</p>
     */
    inline EmailMessage& WithReplyToAddresses(const Aws::Vector<Aws::String>& value) { SetReplyToAddresses(value); return *this;}

    /**
     * <p>The reply-to email address(es) for the email message. If a recipient replies
     * to the email, each reply-to address receives the reply.</p>
     */
    inline EmailMessage& WithReplyToAddresses(Aws::Vector<Aws::String>&& value) { SetReplyToAddresses(std::move(value)); return *this;}

    /**
     * <p>The reply-to email address(es) for the email message. If a recipient replies
     * to the email, each reply-to address receives the reply.</p>
     */
    inline EmailMessage& AddReplyToAddresses(const Aws::String& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }

    /**
     * <p>The reply-to email address(es) for the email message. If a recipient replies
     * to the email, each reply-to address receives the reply.</p>
     */
    inline EmailMessage& AddReplyToAddresses(Aws::String&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The reply-to email address(es) for the email message. If a recipient replies
     * to the email, each reply-to address receives the reply.</p>
     */
    inline EmailMessage& AddReplyToAddresses(const char* value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }


    /**
     * <p>The email message, composed of a subject, a text part, and an HTML part.</p>
     */
    inline const SimpleEmail& GetSimpleEmail() const{ return m_simpleEmail; }

    /**
     * <p>The email message, composed of a subject, a text part, and an HTML part.</p>
     */
    inline bool SimpleEmailHasBeenSet() const { return m_simpleEmailHasBeenSet; }

    /**
     * <p>The email message, composed of a subject, a text part, and an HTML part.</p>
     */
    inline void SetSimpleEmail(const SimpleEmail& value) { m_simpleEmailHasBeenSet = true; m_simpleEmail = value; }

    /**
     * <p>The email message, composed of a subject, a text part, and an HTML part.</p>
     */
    inline void SetSimpleEmail(SimpleEmail&& value) { m_simpleEmailHasBeenSet = true; m_simpleEmail = std::move(value); }

    /**
     * <p>The email message, composed of a subject, a text part, and an HTML part.</p>
     */
    inline EmailMessage& WithSimpleEmail(const SimpleEmail& value) { SetSimpleEmail(value); return *this;}

    /**
     * <p>The email message, composed of a subject, a text part, and an HTML part.</p>
     */
    inline EmailMessage& WithSimpleEmail(SimpleEmail&& value) { SetSimpleEmail(std::move(value)); return *this;}


    /**
     * <p>The default message variables to use in the email message. You can override
     * the default variables with individual address variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * <p>The default message variables to use in the email message. You can override
     * the default variables with individual address variables.</p>
     */
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }

    /**
     * <p>The default message variables to use in the email message. You can override
     * the default variables with individual address variables.</p>
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * <p>The default message variables to use in the email message. You can override
     * the default variables with individual address variables.</p>
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * <p>The default message variables to use in the email message. You can override
     * the default variables with individual address variables.</p>
     */
    inline EmailMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * <p>The default message variables to use in the email message. You can override
     * the default variables with individual address variables.</p>
     */
    inline EmailMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * <p>The default message variables to use in the email message. You can override
     * the default variables with individual address variables.</p>
     */
    inline EmailMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * <p>The default message variables to use in the email message. You can override
     * the default variables with individual address variables.</p>
     */
    inline EmailMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The default message variables to use in the email message. You can override
     * the default variables with individual address variables.</p>
     */
    inline EmailMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the email message. You can override
     * the default variables with individual address variables.</p>
     */
    inline EmailMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the email message. You can override
     * the default variables with individual address variables.</p>
     */
    inline EmailMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the email message. You can override
     * the default variables with individual address variables.</p>
     */
    inline EmailMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet;

    Aws::String m_feedbackForwardingAddress;
    bool m_feedbackForwardingAddressHasBeenSet;

    Aws::String m_fromAddress;
    bool m_fromAddressHasBeenSet;

    RawEmail m_rawEmail;
    bool m_rawEmailHasBeenSet;

    Aws::Vector<Aws::String> m_replyToAddresses;
    bool m_replyToAddressesHasBeenSet;

    SimpleEmail m_simpleEmail;
    bool m_simpleEmailHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
