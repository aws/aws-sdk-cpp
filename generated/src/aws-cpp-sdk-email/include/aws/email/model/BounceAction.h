﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-action-bounce.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/BounceAction">AWS
   * API Reference</a></p>
   */
  class BounceAction
  {
  public:
    AWS_SES_API BounceAction();
    AWS_SES_API BounceAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API BounceAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * bounce action is taken. You can find the ARN of a topic by using the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_ListTopics.html">ListTopics</a>
     * operation in Amazon SNS.</p> <p>For more information about Amazon SNS topics,
     * see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }
    inline BounceAction& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}
    inline BounceAction& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}
    inline BounceAction& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SMTP reply code, as defined by <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p>
     */
    inline const Aws::String& GetSmtpReplyCode() const{ return m_smtpReplyCode; }
    inline bool SmtpReplyCodeHasBeenSet() const { return m_smtpReplyCodeHasBeenSet; }
    inline void SetSmtpReplyCode(const Aws::String& value) { m_smtpReplyCodeHasBeenSet = true; m_smtpReplyCode = value; }
    inline void SetSmtpReplyCode(Aws::String&& value) { m_smtpReplyCodeHasBeenSet = true; m_smtpReplyCode = std::move(value); }
    inline void SetSmtpReplyCode(const char* value) { m_smtpReplyCodeHasBeenSet = true; m_smtpReplyCode.assign(value); }
    inline BounceAction& WithSmtpReplyCode(const Aws::String& value) { SetSmtpReplyCode(value); return *this;}
    inline BounceAction& WithSmtpReplyCode(Aws::String&& value) { SetSmtpReplyCode(std::move(value)); return *this;}
    inline BounceAction& WithSmtpReplyCode(const char* value) { SetSmtpReplyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SMTP enhanced status code, as defined by <a
     * href="https://tools.ietf.org/html/rfc3463">RFC 3463</a>.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }
    inline BounceAction& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}
    inline BounceAction& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}
    inline BounceAction& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Human-readable text to include in the bounce message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline BounceAction& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline BounceAction& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline BounceAction& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the sender of the bounced email. This is the address
     * from which the bounce message is sent.</p>
     */
    inline const Aws::String& GetSender() const{ return m_sender; }
    inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }
    inline void SetSender(const Aws::String& value) { m_senderHasBeenSet = true; m_sender = value; }
    inline void SetSender(Aws::String&& value) { m_senderHasBeenSet = true; m_sender = std::move(value); }
    inline void SetSender(const char* value) { m_senderHasBeenSet = true; m_sender.assign(value); }
    inline BounceAction& WithSender(const Aws::String& value) { SetSender(value); return *this;}
    inline BounceAction& WithSender(Aws::String&& value) { SetSender(std::move(value)); return *this;}
    inline BounceAction& WithSender(const char* value) { SetSender(value); return *this;}
    ///@}
  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::String m_smtpReplyCode;
    bool m_smtpReplyCodeHasBeenSet = false;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_sender;
    bool m_senderHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
