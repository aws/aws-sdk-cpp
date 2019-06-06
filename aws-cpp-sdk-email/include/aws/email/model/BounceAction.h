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
   * <p>When included in a receipt rule, this action rejects the received email by
   * returning a bounce response to the sender and, optionally, publishes a
   * notification to Amazon Simple Notification Service (Amazon SNS).</p> <p>For
   * information about sending a bounce message in response to a received email, see
   * the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-action-bounce.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/BounceAction">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API BounceAction
  {
  public:
    BounceAction();
    BounceAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    BounceAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * bounce action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * bounce action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * bounce action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * bounce action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * bounce action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * bounce action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline BounceAction& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * bounce action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline BounceAction& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * bounce action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline BounceAction& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>The SMTP reply code, as defined by <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p>
     */
    inline const Aws::String& GetSmtpReplyCode() const{ return m_smtpReplyCode; }

    /**
     * <p>The SMTP reply code, as defined by <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p>
     */
    inline bool SmtpReplyCodeHasBeenSet() const { return m_smtpReplyCodeHasBeenSet; }

    /**
     * <p>The SMTP reply code, as defined by <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p>
     */
    inline void SetSmtpReplyCode(const Aws::String& value) { m_smtpReplyCodeHasBeenSet = true; m_smtpReplyCode = value; }

    /**
     * <p>The SMTP reply code, as defined by <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p>
     */
    inline void SetSmtpReplyCode(Aws::String&& value) { m_smtpReplyCodeHasBeenSet = true; m_smtpReplyCode = std::move(value); }

    /**
     * <p>The SMTP reply code, as defined by <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p>
     */
    inline void SetSmtpReplyCode(const char* value) { m_smtpReplyCodeHasBeenSet = true; m_smtpReplyCode.assign(value); }

    /**
     * <p>The SMTP reply code, as defined by <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p>
     */
    inline BounceAction& WithSmtpReplyCode(const Aws::String& value) { SetSmtpReplyCode(value); return *this;}

    /**
     * <p>The SMTP reply code, as defined by <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p>
     */
    inline BounceAction& WithSmtpReplyCode(Aws::String&& value) { SetSmtpReplyCode(std::move(value)); return *this;}

    /**
     * <p>The SMTP reply code, as defined by <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p>
     */
    inline BounceAction& WithSmtpReplyCode(const char* value) { SetSmtpReplyCode(value); return *this;}


    /**
     * <p>The SMTP enhanced status code, as defined by <a
     * href="https://tools.ietf.org/html/rfc3463">RFC 3463</a>.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The SMTP enhanced status code, as defined by <a
     * href="https://tools.ietf.org/html/rfc3463">RFC 3463</a>.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The SMTP enhanced status code, as defined by <a
     * href="https://tools.ietf.org/html/rfc3463">RFC 3463</a>.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The SMTP enhanced status code, as defined by <a
     * href="https://tools.ietf.org/html/rfc3463">RFC 3463</a>.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The SMTP enhanced status code, as defined by <a
     * href="https://tools.ietf.org/html/rfc3463">RFC 3463</a>.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * <p>The SMTP enhanced status code, as defined by <a
     * href="https://tools.ietf.org/html/rfc3463">RFC 3463</a>.</p>
     */
    inline BounceAction& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The SMTP enhanced status code, as defined by <a
     * href="https://tools.ietf.org/html/rfc3463">RFC 3463</a>.</p>
     */
    inline BounceAction& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>The SMTP enhanced status code, as defined by <a
     * href="https://tools.ietf.org/html/rfc3463">RFC 3463</a>.</p>
     */
    inline BounceAction& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}


    /**
     * <p>Human-readable text to include in the bounce message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Human-readable text to include in the bounce message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Human-readable text to include in the bounce message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Human-readable text to include in the bounce message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Human-readable text to include in the bounce message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Human-readable text to include in the bounce message.</p>
     */
    inline BounceAction& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Human-readable text to include in the bounce message.</p>
     */
    inline BounceAction& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Human-readable text to include in the bounce message.</p>
     */
    inline BounceAction& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The email address of the sender of the bounced email. This is the address
     * from which the bounce message will be sent.</p>
     */
    inline const Aws::String& GetSender() const{ return m_sender; }

    /**
     * <p>The email address of the sender of the bounced email. This is the address
     * from which the bounce message will be sent.</p>
     */
    inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }

    /**
     * <p>The email address of the sender of the bounced email. This is the address
     * from which the bounce message will be sent.</p>
     */
    inline void SetSender(const Aws::String& value) { m_senderHasBeenSet = true; m_sender = value; }

    /**
     * <p>The email address of the sender of the bounced email. This is the address
     * from which the bounce message will be sent.</p>
     */
    inline void SetSender(Aws::String&& value) { m_senderHasBeenSet = true; m_sender = std::move(value); }

    /**
     * <p>The email address of the sender of the bounced email. This is the address
     * from which the bounce message will be sent.</p>
     */
    inline void SetSender(const char* value) { m_senderHasBeenSet = true; m_sender.assign(value); }

    /**
     * <p>The email address of the sender of the bounced email. This is the address
     * from which the bounce message will be sent.</p>
     */
    inline BounceAction& WithSender(const Aws::String& value) { SetSender(value); return *this;}

    /**
     * <p>The email address of the sender of the bounced email. This is the address
     * from which the bounce message will be sent.</p>
     */
    inline BounceAction& WithSender(Aws::String&& value) { SetSender(std::move(value)); return *this;}

    /**
     * <p>The email address of the sender of the bounced email. This is the address
     * from which the bounce message will be sent.</p>
     */
    inline BounceAction& WithSender(const char* value) { SetSender(value); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;

    Aws::String m_smtpReplyCode;
    bool m_smtpReplyCodeHasBeenSet;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_sender;
    bool m_senderHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
