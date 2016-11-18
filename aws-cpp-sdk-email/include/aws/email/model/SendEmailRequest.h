/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/Destination.h>
#include <aws/email/model/Message.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/MessageTag.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to send a single formatted email using Amazon SES. For
   * more information, see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-formatted.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API SendEmailRequest : public SESRequest
  {
  public:
    SendEmailRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <p> In all cases, the email address must be 7-bit
     * ASCII. If the text must contain any other characters, then you must use MIME
     * encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word
     * syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>.
     * For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC
     * 2047</a>. </p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <p> In all cases, the email address must be 7-bit
     * ASCII. If the text must contain any other characters, then you must use MIME
     * encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word
     * syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>.
     * For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC
     * 2047</a>. </p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <p> In all cases, the email address must be 7-bit
     * ASCII. If the text must contain any other characters, then you must use MIME
     * encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word
     * syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>.
     * For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC
     * 2047</a>. </p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <p> In all cases, the email address must be 7-bit
     * ASCII. If the text must contain any other characters, then you must use MIME
     * encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word
     * syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>.
     * For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC
     * 2047</a>. </p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <p> In all cases, the email address must be 7-bit
     * ASCII. If the text must contain any other characters, then you must use MIME
     * encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word
     * syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>.
     * For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC
     * 2047</a>. </p>
     */
    inline SendEmailRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <p> In all cases, the email address must be 7-bit
     * ASCII. If the text must contain any other characters, then you must use MIME
     * encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word
     * syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>.
     * For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC
     * 2047</a>. </p>
     */
    inline SendEmailRequest& WithSource(Aws::String&& value) { SetSource(value); return *this;}

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <p> In all cases, the email address must be 7-bit
     * ASCII. If the text must contain any other characters, then you must use MIME
     * encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word
     * syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>.
     * For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC
     * 2047</a>. </p>
     */
    inline SendEmailRequest& WithSource(const char* value) { SetSource(value); return *this;}

    /**
     * <p>The destination for this email, composed of To:, CC:, and BCC: fields.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination for this email, composed of To:, CC:, and BCC: fields.</p>
     */
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination for this email, composed of To:, CC:, and BCC: fields.</p>
     */
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination for this email, composed of To:, CC:, and BCC: fields.</p>
     */
    inline SendEmailRequest& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination for this email, composed of To:, CC:, and BCC: fields.</p>
     */
    inline SendEmailRequest& WithDestination(Destination&& value) { SetDestination(value); return *this;}

    /**
     * <p>The message to be sent.</p>
     */
    inline const Message& GetMessage() const{ return m_message; }

    /**
     * <p>The message to be sent.</p>
     */
    inline void SetMessage(const Message& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message to be sent.</p>
     */
    inline void SetMessage(Message&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message to be sent.</p>
     */
    inline SendEmailRequest& WithMessage(const Message& value) { SetMessage(value); return *this;}

    /**
     * <p>The message to be sent.</p>
     */
    inline SendEmailRequest& WithMessage(Message&& value) { SetMessage(value); return *this;}

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplyToAddresses() const{ return m_replyToAddresses; }

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline void SetReplyToAddresses(const Aws::Vector<Aws::String>& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = value; }

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline void SetReplyToAddresses(Aws::Vector<Aws::String>&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = value; }

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline SendEmailRequest& WithReplyToAddresses(const Aws::Vector<Aws::String>& value) { SetReplyToAddresses(value); return *this;}

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline SendEmailRequest& WithReplyToAddresses(Aws::Vector<Aws::String>&& value) { SetReplyToAddresses(value); return *this;}

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline SendEmailRequest& AddReplyToAddresses(const Aws::String& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline SendEmailRequest& AddReplyToAddresses(Aws::String&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline SendEmailRequest& AddReplyToAddresses(const char* value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }

    /**
     * <p>The email address to which bounces and complaints are to be forwarded when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline const Aws::String& GetReturnPath() const{ return m_returnPath; }

    /**
     * <p>The email address to which bounces and complaints are to be forwarded when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline void SetReturnPath(const Aws::String& value) { m_returnPathHasBeenSet = true; m_returnPath = value; }

    /**
     * <p>The email address to which bounces and complaints are to be forwarded when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline void SetReturnPath(Aws::String&& value) { m_returnPathHasBeenSet = true; m_returnPath = value; }

    /**
     * <p>The email address to which bounces and complaints are to be forwarded when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline void SetReturnPath(const char* value) { m_returnPathHasBeenSet = true; m_returnPath.assign(value); }

    /**
     * <p>The email address to which bounces and complaints are to be forwarded when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline SendEmailRequest& WithReturnPath(const Aws::String& value) { SetReturnPath(value); return *this;}

    /**
     * <p>The email address to which bounces and complaints are to be forwarded when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline SendEmailRequest& WithReturnPath(Aws::String&& value) { SetReturnPath(value); return *this;}

    /**
     * <p>The email address to which bounces and complaints are to be forwarded when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline SendEmailRequest& WithReturnPath(const char* value) { SetReturnPath(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline SendEmailRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline SendEmailRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline SendEmailRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline const Aws::String& GetReturnPathArn() const{ return m_returnPathArn; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline void SetReturnPathArn(const Aws::String& value) { m_returnPathArnHasBeenSet = true; m_returnPathArn = value; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline void SetReturnPathArn(Aws::String&& value) { m_returnPathArnHasBeenSet = true; m_returnPathArn = value; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline void SetReturnPathArn(const char* value) { m_returnPathArnHasBeenSet = true; m_returnPathArn.assign(value); }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline SendEmailRequest& WithReturnPathArn(const Aws::String& value) { SetReturnPathArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline SendEmailRequest& WithReturnPathArn(Aws::String&& value) { SetReturnPathArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline SendEmailRequest& WithReturnPathArn(const char* value) { SetReturnPathArn(value); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendEmail</code>. Tags correspond to characteristics of the
     * email that you define, so that you can publish email sending events.</p>
     */
    inline const Aws::Vector<MessageTag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendEmail</code>. Tags correspond to characteristics of the
     * email that you define, so that you can publish email sending events.</p>
     */
    inline void SetTags(const Aws::Vector<MessageTag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendEmail</code>. Tags correspond to characteristics of the
     * email that you define, so that you can publish email sending events.</p>
     */
    inline void SetTags(Aws::Vector<MessageTag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendEmail</code>. Tags correspond to characteristics of the
     * email that you define, so that you can publish email sending events.</p>
     */
    inline SendEmailRequest& WithTags(const Aws::Vector<MessageTag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendEmail</code>. Tags correspond to characteristics of the
     * email that you define, so that you can publish email sending events.</p>
     */
    inline SendEmailRequest& WithTags(Aws::Vector<MessageTag>&& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendEmail</code>. Tags correspond to characteristics of the
     * email that you define, so that you can publish email sending events.</p>
     */
    inline SendEmailRequest& AddTags(const MessageTag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendEmail</code>. Tags correspond to characteristics of the
     * email that you define, so that you can publish email sending events.</p>
     */
    inline SendEmailRequest& AddTags(MessageTag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendEmail</code>.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendEmail</code>.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendEmail</code>.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendEmail</code>.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendEmail</code>.</p>
     */
    inline SendEmailRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendEmail</code>.</p>
     */
    inline SendEmailRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendEmail</code>.</p>
     */
    inline SendEmailRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}

  private:
    Aws::String m_source;
    bool m_sourceHasBeenSet;
    Destination m_destination;
    bool m_destinationHasBeenSet;
    Message m_message;
    bool m_messageHasBeenSet;
    Aws::Vector<Aws::String> m_replyToAddresses;
    bool m_replyToAddressesHasBeenSet;
    Aws::String m_returnPath;
    bool m_returnPathHasBeenSet;
    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet;
    Aws::String m_returnPathArn;
    bool m_returnPathArnHasBeenSet;
    Aws::Vector<MessageTag> m_tags;
    bool m_tagsHasBeenSet;
    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
