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
   * Email Message.<p><h3>See Also:</h3>   <a
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
     * The body of the email message.
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * The body of the email message.
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * The body of the email message.
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * The body of the email message.
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * The body of the email message.
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * The body of the email message.
     */
    inline EmailMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * The body of the email message.
     */
    inline EmailMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * The body of the email message.
     */
    inline EmailMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * The email address that bounces and complaints will be forwarded to when feedback
     * forwarding is enabled.
     */
    inline const Aws::String& GetFeedbackForwardingAddress() const{ return m_feedbackForwardingAddress; }

    /**
     * The email address that bounces and complaints will be forwarded to when feedback
     * forwarding is enabled.
     */
    inline bool FeedbackForwardingAddressHasBeenSet() const { return m_feedbackForwardingAddressHasBeenSet; }

    /**
     * The email address that bounces and complaints will be forwarded to when feedback
     * forwarding is enabled.
     */
    inline void SetFeedbackForwardingAddress(const Aws::String& value) { m_feedbackForwardingAddressHasBeenSet = true; m_feedbackForwardingAddress = value; }

    /**
     * The email address that bounces and complaints will be forwarded to when feedback
     * forwarding is enabled.
     */
    inline void SetFeedbackForwardingAddress(Aws::String&& value) { m_feedbackForwardingAddressHasBeenSet = true; m_feedbackForwardingAddress = std::move(value); }

    /**
     * The email address that bounces and complaints will be forwarded to when feedback
     * forwarding is enabled.
     */
    inline void SetFeedbackForwardingAddress(const char* value) { m_feedbackForwardingAddressHasBeenSet = true; m_feedbackForwardingAddress.assign(value); }

    /**
     * The email address that bounces and complaints will be forwarded to when feedback
     * forwarding is enabled.
     */
    inline EmailMessage& WithFeedbackForwardingAddress(const Aws::String& value) { SetFeedbackForwardingAddress(value); return *this;}

    /**
     * The email address that bounces and complaints will be forwarded to when feedback
     * forwarding is enabled.
     */
    inline EmailMessage& WithFeedbackForwardingAddress(Aws::String&& value) { SetFeedbackForwardingAddress(std::move(value)); return *this;}

    /**
     * The email address that bounces and complaints will be forwarded to when feedback
     * forwarding is enabled.
     */
    inline EmailMessage& WithFeedbackForwardingAddress(const char* value) { SetFeedbackForwardingAddress(value); return *this;}


    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline EmailMessage& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline EmailMessage& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline EmailMessage& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}


    /**
     * An email represented as a raw MIME message.
     */
    inline const RawEmail& GetRawEmail() const{ return m_rawEmail; }

    /**
     * An email represented as a raw MIME message.
     */
    inline bool RawEmailHasBeenSet() const { return m_rawEmailHasBeenSet; }

    /**
     * An email represented as a raw MIME message.
     */
    inline void SetRawEmail(const RawEmail& value) { m_rawEmailHasBeenSet = true; m_rawEmail = value; }

    /**
     * An email represented as a raw MIME message.
     */
    inline void SetRawEmail(RawEmail&& value) { m_rawEmailHasBeenSet = true; m_rawEmail = std::move(value); }

    /**
     * An email represented as a raw MIME message.
     */
    inline EmailMessage& WithRawEmail(const RawEmail& value) { SetRawEmail(value); return *this;}

    /**
     * An email represented as a raw MIME message.
     */
    inline EmailMessage& WithRawEmail(RawEmail&& value) { SetRawEmail(std::move(value)); return *this;}


    /**
     * The reply-to email address(es) for the email. If the recipient replies to the
     * email, each reply-to address will receive the reply.
     */
    inline const Aws::Vector<Aws::String>& GetReplyToAddresses() const{ return m_replyToAddresses; }

    /**
     * The reply-to email address(es) for the email. If the recipient replies to the
     * email, each reply-to address will receive the reply.
     */
    inline bool ReplyToAddressesHasBeenSet() const { return m_replyToAddressesHasBeenSet; }

    /**
     * The reply-to email address(es) for the email. If the recipient replies to the
     * email, each reply-to address will receive the reply.
     */
    inline void SetReplyToAddresses(const Aws::Vector<Aws::String>& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = value; }

    /**
     * The reply-to email address(es) for the email. If the recipient replies to the
     * email, each reply-to address will receive the reply.
     */
    inline void SetReplyToAddresses(Aws::Vector<Aws::String>&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = std::move(value); }

    /**
     * The reply-to email address(es) for the email. If the recipient replies to the
     * email, each reply-to address will receive the reply.
     */
    inline EmailMessage& WithReplyToAddresses(const Aws::Vector<Aws::String>& value) { SetReplyToAddresses(value); return *this;}

    /**
     * The reply-to email address(es) for the email. If the recipient replies to the
     * email, each reply-to address will receive the reply.
     */
    inline EmailMessage& WithReplyToAddresses(Aws::Vector<Aws::String>&& value) { SetReplyToAddresses(std::move(value)); return *this;}

    /**
     * The reply-to email address(es) for the email. If the recipient replies to the
     * email, each reply-to address will receive the reply.
     */
    inline EmailMessage& AddReplyToAddresses(const Aws::String& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }

    /**
     * The reply-to email address(es) for the email. If the recipient replies to the
     * email, each reply-to address will receive the reply.
     */
    inline EmailMessage& AddReplyToAddresses(Aws::String&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(std::move(value)); return *this; }

    /**
     * The reply-to email address(es) for the email. If the recipient replies to the
     * email, each reply-to address will receive the reply.
     */
    inline EmailMessage& AddReplyToAddresses(const char* value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }


    /**
     * An email composed of a subject, a text part and a html part.
     */
    inline const SimpleEmail& GetSimpleEmail() const{ return m_simpleEmail; }

    /**
     * An email composed of a subject, a text part and a html part.
     */
    inline bool SimpleEmailHasBeenSet() const { return m_simpleEmailHasBeenSet; }

    /**
     * An email composed of a subject, a text part and a html part.
     */
    inline void SetSimpleEmail(const SimpleEmail& value) { m_simpleEmailHasBeenSet = true; m_simpleEmail = value; }

    /**
     * An email composed of a subject, a text part and a html part.
     */
    inline void SetSimpleEmail(SimpleEmail&& value) { m_simpleEmailHasBeenSet = true; m_simpleEmail = std::move(value); }

    /**
     * An email composed of a subject, a text part and a html part.
     */
    inline EmailMessage& WithSimpleEmail(const SimpleEmail& value) { SetSimpleEmail(value); return *this;}

    /**
     * An email composed of a subject, a text part and a html part.
     */
    inline EmailMessage& WithSimpleEmail(SimpleEmail&& value) { SetSimpleEmail(std::move(value)); return *this;}


    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
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
