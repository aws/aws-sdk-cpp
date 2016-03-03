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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/RawMessage.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   */
  class AWS_SES_API SendRawEmailRequest : public SESRequest
  {
  public:
    SendRawEmailRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <p> By default, the string must be 7-bit ASCII.
     * If the text must contain any other characters, then you must use MIME
     * encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word
     * syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>.
     * For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC
     * 2047</a>. </p> <note>If you specify the <code>Source</code> parameter and have
     * feedback forwarding enabled, then bounces and complaints will be sent to this
     * email address. This takes precedence over any <i>Return-Path</i> header that you
     * might include in the raw text of the message. </note>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <p> By default, the string must be 7-bit ASCII.
     * If the text must contain any other characters, then you must use MIME
     * encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word
     * syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>.
     * For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC
     * 2047</a>. </p> <note>If you specify the <code>Source</code> parameter and have
     * feedback forwarding enabled, then bounces and complaints will be sent to this
     * email address. This takes precedence over any <i>Return-Path</i> header that you
     * might include in the raw text of the message. </note>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <p> By default, the string must be 7-bit ASCII.
     * If the text must contain any other characters, then you must use MIME
     * encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word
     * syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>.
     * For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC
     * 2047</a>. </p> <note>If you specify the <code>Source</code> parameter and have
     * feedback forwarding enabled, then bounces and complaints will be sent to this
     * email address. This takes precedence over any <i>Return-Path</i> header that you
     * might include in the raw text of the message. </note>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <p> By default, the string must be 7-bit ASCII.
     * If the text must contain any other characters, then you must use MIME
     * encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word
     * syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>.
     * For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC
     * 2047</a>. </p> <note>If you specify the <code>Source</code> parameter and have
     * feedback forwarding enabled, then bounces and complaints will be sent to this
     * email address. This takes precedence over any <i>Return-Path</i> header that you
     * might include in the raw text of the message. </note>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <p> By default, the string must be 7-bit ASCII.
     * If the text must contain any other characters, then you must use MIME
     * encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word
     * syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>.
     * For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC
     * 2047</a>. </p> <note>If you specify the <code>Source</code> parameter and have
     * feedback forwarding enabled, then bounces and complaints will be sent to this
     * email address. This takes precedence over any <i>Return-Path</i> header that you
     * might include in the raw text of the message. </note>
     */
    inline SendRawEmailRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <p> By default, the string must be 7-bit ASCII.
     * If the text must contain any other characters, then you must use MIME
     * encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word
     * syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>.
     * For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC
     * 2047</a>. </p> <note>If you specify the <code>Source</code> parameter and have
     * feedback forwarding enabled, then bounces and complaints will be sent to this
     * email address. This takes precedence over any <i>Return-Path</i> header that you
     * might include in the raw text of the message. </note>
     */
    inline SendRawEmailRequest& WithSource(Aws::String&& value) { SetSource(value); return *this;}

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <p> By default, the string must be 7-bit ASCII.
     * If the text must contain any other characters, then you must use MIME
     * encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word
     * syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>.
     * For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC
     * 2047</a>. </p> <note>If you specify the <code>Source</code> parameter and have
     * feedback forwarding enabled, then bounces and complaints will be sent to this
     * email address. This takes precedence over any <i>Return-Path</i> header that you
     * might include in the raw text of the message. </note>
     */
    inline SendRawEmailRequest& WithSource(const char* value) { SetSource(value); return *this;}

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline void SetDestinations(const Aws::Vector<Aws::String>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline void SetDestinations(Aws::Vector<Aws::String>&& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline SendRawEmailRequest& WithDestinations(const Aws::Vector<Aws::String>& value) { SetDestinations(value); return *this;}

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline SendRawEmailRequest& WithDestinations(Aws::Vector<Aws::String>&& value) { SetDestinations(value); return *this;}

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline SendRawEmailRequest& AddDestinations(const Aws::String& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline SendRawEmailRequest& AddDestinations(Aws::String&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline SendRawEmailRequest& AddDestinations(const char* value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>The raw text of the message. The client is responsible for ensuring the
     * following:</p> <p> <ul> <li>Message must contain a header and a body, separated
     * by a blank line.</li> <li>All required header fields must be present.</li>
     * <li>Each part of a multipart MIME message must be formatted properly.</li>
     * <li>MIME content types must be among those supported by Amazon SES. For more
     * information, go to the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Amazon
     * SES Developer Guide</a>. </li> <li>Content must be base64-encoded, if MIME
     * requires it.</li> </ul> </p>
     */
    inline const RawMessage& GetRawMessage() const{ return m_rawMessage; }

    /**
     * <p>The raw text of the message. The client is responsible for ensuring the
     * following:</p> <p> <ul> <li>Message must contain a header and a body, separated
     * by a blank line.</li> <li>All required header fields must be present.</li>
     * <li>Each part of a multipart MIME message must be formatted properly.</li>
     * <li>MIME content types must be among those supported by Amazon SES. For more
     * information, go to the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Amazon
     * SES Developer Guide</a>. </li> <li>Content must be base64-encoded, if MIME
     * requires it.</li> </ul> </p>
     */
    inline void SetRawMessage(const RawMessage& value) { m_rawMessageHasBeenSet = true; m_rawMessage = value; }

    /**
     * <p>The raw text of the message. The client is responsible for ensuring the
     * following:</p> <p> <ul> <li>Message must contain a header and a body, separated
     * by a blank line.</li> <li>All required header fields must be present.</li>
     * <li>Each part of a multipart MIME message must be formatted properly.</li>
     * <li>MIME content types must be among those supported by Amazon SES. For more
     * information, go to the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Amazon
     * SES Developer Guide</a>. </li> <li>Content must be base64-encoded, if MIME
     * requires it.</li> </ul> </p>
     */
    inline void SetRawMessage(RawMessage&& value) { m_rawMessageHasBeenSet = true; m_rawMessage = value; }

    /**
     * <p>The raw text of the message. The client is responsible for ensuring the
     * following:</p> <p> <ul> <li>Message must contain a header and a body, separated
     * by a blank line.</li> <li>All required header fields must be present.</li>
     * <li>Each part of a multipart MIME message must be formatted properly.</li>
     * <li>MIME content types must be among those supported by Amazon SES. For more
     * information, go to the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Amazon
     * SES Developer Guide</a>. </li> <li>Content must be base64-encoded, if MIME
     * requires it.</li> </ul> </p>
     */
    inline SendRawEmailRequest& WithRawMessage(const RawMessage& value) { SetRawMessage(value); return *this;}

    /**
     * <p>The raw text of the message. The client is responsible for ensuring the
     * following:</p> <p> <ul> <li>Message must contain a header and a body, separated
     * by a blank line.</li> <li>All required header fields must be present.</li>
     * <li>Each part of a multipart MIME message must be formatted properly.</li>
     * <li>MIME content types must be among those supported by Amazon SES. For more
     * information, go to the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Amazon
     * SES Developer Guide</a>. </li> <li>Content must be base64-encoded, if MIME
     * requires it.</li> </ul> </p>
     */
    inline SendRawEmailRequest& WithRawMessage(RawMessage&& value) { SetRawMessage(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note>For information about
     * when to use this parameter, see the description of <code>SendRawEmail</code> in
     * this guide, or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
     */
    inline const Aws::String& GetFromArn() const{ return m_fromArn; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note>For information about
     * when to use this parameter, see the description of <code>SendRawEmail</code> in
     * this guide, or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
     */
    inline void SetFromArn(const Aws::String& value) { m_fromArnHasBeenSet = true; m_fromArn = value; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note>For information about
     * when to use this parameter, see the description of <code>SendRawEmail</code> in
     * this guide, or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
     */
    inline void SetFromArn(Aws::String&& value) { m_fromArnHasBeenSet = true; m_fromArn = value; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note>For information about
     * when to use this parameter, see the description of <code>SendRawEmail</code> in
     * this guide, or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
     */
    inline void SetFromArn(const char* value) { m_fromArnHasBeenSet = true; m_fromArn.assign(value); }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note>For information about
     * when to use this parameter, see the description of <code>SendRawEmail</code> in
     * this guide, or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
     */
    inline SendRawEmailRequest& WithFromArn(const Aws::String& value) { SetFromArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note>For information about
     * when to use this parameter, see the description of <code>SendRawEmail</code> in
     * this guide, or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
     */
    inline SendRawEmailRequest& WithFromArn(Aws::String&& value) { SetFromArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note>For information about
     * when to use this parameter, see the description of <code>SendRawEmail</code> in
     * this guide, or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
     */
    inline SendRawEmailRequest& WithFromArn(const char* value) { SetFromArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>Instead of
     * using this parameter, you can use the X-header <code>X-SES-SOURCE-ARN</code> in
     * the raw message of the email. If you use both the <code>SourceArn</code>
     * parameter and the corresponding X-header, Amazon SES uses the value of the
     * <code>SourceArn</code> parameter.</p> <note>For information about when to use
     * this parameter, see the description of <code>SendRawEmail</code> in this guide,
     * or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
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
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>Instead of
     * using this parameter, you can use the X-header <code>X-SES-SOURCE-ARN</code> in
     * the raw message of the email. If you use both the <code>SourceArn</code>
     * parameter and the corresponding X-header, Amazon SES uses the value of the
     * <code>SourceArn</code> parameter.</p> <note>For information about when to use
     * this parameter, see the description of <code>SendRawEmail</code> in this guide,
     * or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
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
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>Instead of
     * using this parameter, you can use the X-header <code>X-SES-SOURCE-ARN</code> in
     * the raw message of the email. If you use both the <code>SourceArn</code>
     * parameter and the corresponding X-header, Amazon SES uses the value of the
     * <code>SourceArn</code> parameter.</p> <note>For information about when to use
     * this parameter, see the description of <code>SendRawEmail</code> in this guide,
     * or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
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
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>Instead of
     * using this parameter, you can use the X-header <code>X-SES-SOURCE-ARN</code> in
     * the raw message of the email. If you use both the <code>SourceArn</code>
     * parameter and the corresponding X-header, Amazon SES uses the value of the
     * <code>SourceArn</code> parameter.</p> <note>For information about when to use
     * this parameter, see the description of <code>SendRawEmail</code> in this guide,
     * or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
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
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>Instead of
     * using this parameter, you can use the X-header <code>X-SES-SOURCE-ARN</code> in
     * the raw message of the email. If you use both the <code>SourceArn</code>
     * parameter and the corresponding X-header, Amazon SES uses the value of the
     * <code>SourceArn</code> parameter.</p> <note>For information about when to use
     * this parameter, see the description of <code>SendRawEmail</code> in this guide,
     * or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
     */
    inline SendRawEmailRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>Instead of
     * using this parameter, you can use the X-header <code>X-SES-SOURCE-ARN</code> in
     * the raw message of the email. If you use both the <code>SourceArn</code>
     * parameter and the corresponding X-header, Amazon SES uses the value of the
     * <code>SourceArn</code> parameter.</p> <note>For information about when to use
     * this parameter, see the description of <code>SendRawEmail</code> in this guide,
     * or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
     */
    inline SendRawEmailRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>Instead of
     * using this parameter, you can use the X-header <code>X-SES-SOURCE-ARN</code> in
     * the raw message of the email. If you use both the <code>SourceArn</code>
     * parameter and the corresponding X-header, Amazon SES uses the value of the
     * <code>SourceArn</code> parameter.</p> <note>For information about when to use
     * this parameter, see the description of <code>SendRawEmail</code> in this guide,
     * or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
     */
    inline SendRawEmailRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}

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
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>Instead
     * of using this parameter, you can use the X-header
     * <code>X-SES-RETURN-PATH-ARN</code> in the raw message of the email. If you use
     * both the <code>ReturnPathArn</code> parameter and the corresponding X-header,
     * Amazon SES uses the value of the <code>ReturnPathArn</code> parameter.</p>
     * <note>For information about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
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
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>Instead
     * of using this parameter, you can use the X-header
     * <code>X-SES-RETURN-PATH-ARN</code> in the raw message of the email. If you use
     * both the <code>ReturnPathArn</code> parameter and the corresponding X-header,
     * Amazon SES uses the value of the <code>ReturnPathArn</code> parameter.</p>
     * <note>For information about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
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
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>Instead
     * of using this parameter, you can use the X-header
     * <code>X-SES-RETURN-PATH-ARN</code> in the raw message of the email. If you use
     * both the <code>ReturnPathArn</code> parameter and the corresponding X-header,
     * Amazon SES uses the value of the <code>ReturnPathArn</code> parameter.</p>
     * <note>For information about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
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
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>Instead
     * of using this parameter, you can use the X-header
     * <code>X-SES-RETURN-PATH-ARN</code> in the raw message of the email. If you use
     * both the <code>ReturnPathArn</code> parameter and the corresponding X-header,
     * Amazon SES uses the value of the <code>ReturnPathArn</code> parameter.</p>
     * <note>For information about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
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
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>Instead
     * of using this parameter, you can use the X-header
     * <code>X-SES-RETURN-PATH-ARN</code> in the raw message of the email. If you use
     * both the <code>ReturnPathArn</code> parameter and the corresponding X-header,
     * Amazon SES uses the value of the <code>ReturnPathArn</code> parameter.</p>
     * <note>For information about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
     */
    inline SendRawEmailRequest& WithReturnPathArn(const Aws::String& value) { SetReturnPathArn(value); return *this;}

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
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>Instead
     * of using this parameter, you can use the X-header
     * <code>X-SES-RETURN-PATH-ARN</code> in the raw message of the email. If you use
     * both the <code>ReturnPathArn</code> parameter and the corresponding X-header,
     * Amazon SES uses the value of the <code>ReturnPathArn</code> parameter.</p>
     * <note>For information about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
     */
    inline SendRawEmailRequest& WithReturnPathArn(Aws::String&& value) { SetReturnPathArn(value); return *this;}

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
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>Instead
     * of using this parameter, you can use the X-header
     * <code>X-SES-RETURN-PATH-ARN</code> in the raw message of the email. If you use
     * both the <code>ReturnPathArn</code> parameter and the corresponding X-header,
     * Amazon SES uses the value of the <code>ReturnPathArn</code> parameter.</p>
     * <note>For information about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>. </note>
     */
    inline SendRawEmailRequest& WithReturnPathArn(const char* value) { SetReturnPathArn(value); return *this;}

  private:
    Aws::String m_source;
    bool m_sourceHasBeenSet;
    Aws::Vector<Aws::String> m_destinations;
    bool m_destinationsHasBeenSet;
    RawMessage m_rawMessage;
    bool m_rawMessageHasBeenSet;
    Aws::String m_fromArn;
    bool m_fromArnHasBeenSet;
    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet;
    Aws::String m_returnPathArn;
    bool m_returnPathArnHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
