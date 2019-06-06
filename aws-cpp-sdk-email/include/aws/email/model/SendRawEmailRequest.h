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
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/RawMessage.h>
#include <aws/email/model/MessageTag.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to send a single raw email using Amazon SES. For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendRawEmailRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API SendRawEmailRequest : public SESRequest
  {
  public:
    SendRawEmailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendRawEmail"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <note> <p>Amazon SES does not support the
     * SMTPUTF8 extension, as described in<a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note> <p>If you specify
     * the <code>Source</code> parameter and have feedback forwarding enabled, then
     * bounces and complaints will be sent to this email address. This takes precedence
     * over any Return-Path header that you might include in the raw text of the
     * message.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <note> <p>Amazon SES does not support the
     * SMTPUTF8 extension, as described in<a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note> <p>If you specify
     * the <code>Source</code> parameter and have feedback forwarding enabled, then
     * bounces and complaints will be sent to this email address. This takes precedence
     * over any Return-Path header that you might include in the raw text of the
     * message.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <note> <p>Amazon SES does not support the
     * SMTPUTF8 extension, as described in<a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note> <p>If you specify
     * the <code>Source</code> parameter and have feedback forwarding enabled, then
     * bounces and complaints will be sent to this email address. This takes precedence
     * over any Return-Path header that you might include in the raw text of the
     * message.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <note> <p>Amazon SES does not support the
     * SMTPUTF8 extension, as described in<a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note> <p>If you specify
     * the <code>Source</code> parameter and have feedback forwarding enabled, then
     * bounces and complaints will be sent to this email address. This takes precedence
     * over any Return-Path header that you might include in the raw text of the
     * message.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <note> <p>Amazon SES does not support the
     * SMTPUTF8 extension, as described in<a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note> <p>If you specify
     * the <code>Source</code> parameter and have feedback forwarding enabled, then
     * bounces and complaints will be sent to this email address. This takes precedence
     * over any Return-Path header that you might include in the raw text of the
     * message.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <note> <p>Amazon SES does not support the
     * SMTPUTF8 extension, as described in<a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note> <p>If you specify
     * the <code>Source</code> parameter and have feedback forwarding enabled, then
     * bounces and complaints will be sent to this email address. This takes precedence
     * over any Return-Path header that you might include in the raw text of the
     * message.</p>
     */
    inline SendRawEmailRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <note> <p>Amazon SES does not support the
     * SMTPUTF8 extension, as described in<a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note> <p>If you specify
     * the <code>Source</code> parameter and have feedback forwarding enabled, then
     * bounces and complaints will be sent to this email address. This takes precedence
     * over any Return-Path header that you might include in the raw text of the
     * message.</p>
     */
    inline SendRawEmailRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p> <note> <p>Amazon SES does not support the
     * SMTPUTF8 extension, as described in<a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note> <p>If you specify
     * the <code>Source</code> parameter and have feedback forwarding enabled, then
     * bounces and complaints will be sent to this email address. This takes precedence
     * over any Return-Path header that you might include in the raw text of the
     * message.</p>
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
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline void SetDestinations(const Aws::Vector<Aws::String>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline void SetDestinations(Aws::Vector<Aws::String>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline SendRawEmailRequest& WithDestinations(const Aws::Vector<Aws::String>& value) { SetDestinations(value); return *this;}

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline SendRawEmailRequest& WithDestinations(Aws::Vector<Aws::String>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline SendRawEmailRequest& AddDestinations(const Aws::String& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline SendRawEmailRequest& AddDestinations(Aws::String&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline SendRawEmailRequest& AddDestinations(const char* value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }


    /**
     * <p>The raw email message itself. The message has to meet the following
     * criteria:</p> <ul> <li> <p>The message has to contain a header and a body,
     * separated by a blank line.</p> </li> <li> <p>All of the required header fields
     * must be present in the message.</p> </li> <li> <p>Each part of a multipart MIME
     * message must be formatted properly.</p> </li> <li> <p>Attachments must be of a
     * content type that Amazon SES supports. For a list on unsupported content types,
     * see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Unsupported
     * Attachment Types</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> <li>
     * <p>The entire message must be base64-encoded.</p> </li> <li> <p>If any of the
     * MIME parts in your message contain content that is outside of the 7-bit ASCII
     * character range, we highly recommend that you encode that content. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Sending
     * Raw Email</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> <li> <p>Per <a
     * href="https://tools.ietf.org/html/rfc5321#section-4.5.3.1.6">RFC 5321</a>, the
     * maximum length of each line of text, including the &lt;CRLF&gt;, must not exceed
     * 1,000 characters.</p> </li> </ul>
     */
    inline const RawMessage& GetRawMessage() const{ return m_rawMessage; }

    /**
     * <p>The raw email message itself. The message has to meet the following
     * criteria:</p> <ul> <li> <p>The message has to contain a header and a body,
     * separated by a blank line.</p> </li> <li> <p>All of the required header fields
     * must be present in the message.</p> </li> <li> <p>Each part of a multipart MIME
     * message must be formatted properly.</p> </li> <li> <p>Attachments must be of a
     * content type that Amazon SES supports. For a list on unsupported content types,
     * see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Unsupported
     * Attachment Types</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> <li>
     * <p>The entire message must be base64-encoded.</p> </li> <li> <p>If any of the
     * MIME parts in your message contain content that is outside of the 7-bit ASCII
     * character range, we highly recommend that you encode that content. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Sending
     * Raw Email</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> <li> <p>Per <a
     * href="https://tools.ietf.org/html/rfc5321#section-4.5.3.1.6">RFC 5321</a>, the
     * maximum length of each line of text, including the &lt;CRLF&gt;, must not exceed
     * 1,000 characters.</p> </li> </ul>
     */
    inline bool RawMessageHasBeenSet() const { return m_rawMessageHasBeenSet; }

    /**
     * <p>The raw email message itself. The message has to meet the following
     * criteria:</p> <ul> <li> <p>The message has to contain a header and a body,
     * separated by a blank line.</p> </li> <li> <p>All of the required header fields
     * must be present in the message.</p> </li> <li> <p>Each part of a multipart MIME
     * message must be formatted properly.</p> </li> <li> <p>Attachments must be of a
     * content type that Amazon SES supports. For a list on unsupported content types,
     * see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Unsupported
     * Attachment Types</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> <li>
     * <p>The entire message must be base64-encoded.</p> </li> <li> <p>If any of the
     * MIME parts in your message contain content that is outside of the 7-bit ASCII
     * character range, we highly recommend that you encode that content. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Sending
     * Raw Email</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> <li> <p>Per <a
     * href="https://tools.ietf.org/html/rfc5321#section-4.5.3.1.6">RFC 5321</a>, the
     * maximum length of each line of text, including the &lt;CRLF&gt;, must not exceed
     * 1,000 characters.</p> </li> </ul>
     */
    inline void SetRawMessage(const RawMessage& value) { m_rawMessageHasBeenSet = true; m_rawMessage = value; }

    /**
     * <p>The raw email message itself. The message has to meet the following
     * criteria:</p> <ul> <li> <p>The message has to contain a header and a body,
     * separated by a blank line.</p> </li> <li> <p>All of the required header fields
     * must be present in the message.</p> </li> <li> <p>Each part of a multipart MIME
     * message must be formatted properly.</p> </li> <li> <p>Attachments must be of a
     * content type that Amazon SES supports. For a list on unsupported content types,
     * see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Unsupported
     * Attachment Types</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> <li>
     * <p>The entire message must be base64-encoded.</p> </li> <li> <p>If any of the
     * MIME parts in your message contain content that is outside of the 7-bit ASCII
     * character range, we highly recommend that you encode that content. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Sending
     * Raw Email</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> <li> <p>Per <a
     * href="https://tools.ietf.org/html/rfc5321#section-4.5.3.1.6">RFC 5321</a>, the
     * maximum length of each line of text, including the &lt;CRLF&gt;, must not exceed
     * 1,000 characters.</p> </li> </ul>
     */
    inline void SetRawMessage(RawMessage&& value) { m_rawMessageHasBeenSet = true; m_rawMessage = std::move(value); }

    /**
     * <p>The raw email message itself. The message has to meet the following
     * criteria:</p> <ul> <li> <p>The message has to contain a header and a body,
     * separated by a blank line.</p> </li> <li> <p>All of the required header fields
     * must be present in the message.</p> </li> <li> <p>Each part of a multipart MIME
     * message must be formatted properly.</p> </li> <li> <p>Attachments must be of a
     * content type that Amazon SES supports. For a list on unsupported content types,
     * see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Unsupported
     * Attachment Types</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> <li>
     * <p>The entire message must be base64-encoded.</p> </li> <li> <p>If any of the
     * MIME parts in your message contain content that is outside of the 7-bit ASCII
     * character range, we highly recommend that you encode that content. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Sending
     * Raw Email</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> <li> <p>Per <a
     * href="https://tools.ietf.org/html/rfc5321#section-4.5.3.1.6">RFC 5321</a>, the
     * maximum length of each line of text, including the &lt;CRLF&gt;, must not exceed
     * 1,000 characters.</p> </li> </ul>
     */
    inline SendRawEmailRequest& WithRawMessage(const RawMessage& value) { SetRawMessage(value); return *this;}

    /**
     * <p>The raw email message itself. The message has to meet the following
     * criteria:</p> <ul> <li> <p>The message has to contain a header and a body,
     * separated by a blank line.</p> </li> <li> <p>All of the required header fields
     * must be present in the message.</p> </li> <li> <p>Each part of a multipart MIME
     * message must be formatted properly.</p> </li> <li> <p>Attachments must be of a
     * content type that Amazon SES supports. For a list on unsupported content types,
     * see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Unsupported
     * Attachment Types</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> <li>
     * <p>The entire message must be base64-encoded.</p> </li> <li> <p>If any of the
     * MIME parts in your message contain content that is outside of the 7-bit ASCII
     * character range, we highly recommend that you encode that content. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Sending
     * Raw Email</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> <li> <p>Per <a
     * href="https://tools.ietf.org/html/rfc5321#section-4.5.3.1.6">RFC 5321</a>, the
     * maximum length of each line of text, including the &lt;CRLF&gt;, must not exceed
     * 1,000 characters.</p> </li> </ul>
     */
    inline SendRawEmailRequest& WithRawMessage(RawMessage&& value) { SetRawMessage(std::move(value)); return *this;}


    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note> <p>For information
     * about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
     */
    inline const Aws::String& GetFromArn() const{ return m_fromArn; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note> <p>For information
     * about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
     */
    inline bool FromArnHasBeenSet() const { return m_fromArnHasBeenSet; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note> <p>For information
     * about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
     */
    inline void SetFromArn(const Aws::String& value) { m_fromArnHasBeenSet = true; m_fromArn = value; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note> <p>For information
     * about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
     */
    inline void SetFromArn(Aws::String&& value) { m_fromArnHasBeenSet = true; m_fromArn = std::move(value); }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note> <p>For information
     * about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
     */
    inline void SetFromArn(const char* value) { m_fromArnHasBeenSet = true; m_fromArn.assign(value); }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note> <p>For information
     * about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
     */
    inline SendRawEmailRequest& WithFromArn(const Aws::String& value) { SetFromArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note> <p>For information
     * about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
     */
    inline SendRawEmailRequest& WithFromArn(Aws::String&& value) { SetFromArn(std::move(value)); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p> <note> <p>For information
     * about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
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
     * <code>SourceArn</code> parameter.</p> <note> <p>For information about when to
     * use this parameter, see the description of <code>SendRawEmail</code> in this
     * guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
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
     * <code>SourceArn</code> parameter.</p> <note> <p>For information about when to
     * use this parameter, see the description of <code>SendRawEmail</code> in this
     * guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

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
     * <code>SourceArn</code> parameter.</p> <note> <p>For information about when to
     * use this parameter, see the description of <code>SendRawEmail</code> in this
     * guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
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
     * <code>SourceArn</code> parameter.</p> <note> <p>For information about when to
     * use this parameter, see the description of <code>SendRawEmail</code> in this
     * guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

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
     * <code>SourceArn</code> parameter.</p> <note> <p>For information about when to
     * use this parameter, see the description of <code>SendRawEmail</code> in this
     * guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
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
     * <code>SourceArn</code> parameter.</p> <note> <p>For information about when to
     * use this parameter, see the description of <code>SendRawEmail</code> in this
     * guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
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
     * <code>SourceArn</code> parameter.</p> <note> <p>For information about when to
     * use this parameter, see the description of <code>SendRawEmail</code> in this
     * guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
     */
    inline SendRawEmailRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

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
     * <code>SourceArn</code> parameter.</p> <note> <p>For information about when to
     * use this parameter, see the description of <code>SendRawEmail</code> in this
     * guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
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
     * <note> <p>For information about when to use this parameter, see the description
     * of <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
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
     * <note> <p>For information about when to use this parameter, see the description
     * of <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
     */
    inline bool ReturnPathArnHasBeenSet() const { return m_returnPathArnHasBeenSet; }

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
     * <note> <p>For information about when to use this parameter, see the description
     * of <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
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
     * <note> <p>For information about when to use this parameter, see the description
     * of <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
     */
    inline void SetReturnPathArn(Aws::String&& value) { m_returnPathArnHasBeenSet = true; m_returnPathArn = std::move(value); }

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
     * <note> <p>For information about when to use this parameter, see the description
     * of <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
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
     * <note> <p>For information about when to use this parameter, see the description
     * of <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
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
     * <note> <p>For information about when to use this parameter, see the description
     * of <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
     */
    inline SendRawEmailRequest& WithReturnPathArn(Aws::String&& value) { SetReturnPathArn(std::move(value)); return *this;}

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
     * <note> <p>For information about when to use this parameter, see the description
     * of <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> </note>
     */
    inline SendRawEmailRequest& WithReturnPathArn(const char* value) { SetReturnPathArn(value); return *this;}


    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendRawEmail</code>. Tags correspond to characteristics of
     * the email that you define, so that you can publish email sending events.</p>
     */
    inline const Aws::Vector<MessageTag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendRawEmail</code>. Tags correspond to characteristics of
     * the email that you define, so that you can publish email sending events.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendRawEmail</code>. Tags correspond to characteristics of
     * the email that you define, so that you can publish email sending events.</p>
     */
    inline void SetTags(const Aws::Vector<MessageTag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendRawEmail</code>. Tags correspond to characteristics of
     * the email that you define, so that you can publish email sending events.</p>
     */
    inline void SetTags(Aws::Vector<MessageTag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendRawEmail</code>. Tags correspond to characteristics of
     * the email that you define, so that you can publish email sending events.</p>
     */
    inline SendRawEmailRequest& WithTags(const Aws::Vector<MessageTag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendRawEmail</code>. Tags correspond to characteristics of
     * the email that you define, so that you can publish email sending events.</p>
     */
    inline SendRawEmailRequest& WithTags(Aws::Vector<MessageTag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendRawEmail</code>. Tags correspond to characteristics of
     * the email that you define, so that you can publish email sending events.</p>
     */
    inline SendRawEmailRequest& AddTags(const MessageTag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendRawEmail</code>. Tags correspond to characteristics of
     * the email that you define, so that you can publish email sending events.</p>
     */
    inline SendRawEmailRequest& AddTags(MessageTag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendRawEmail</code>.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendRawEmail</code>.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendRawEmail</code>.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendRawEmail</code>.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendRawEmail</code>.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendRawEmail</code>.</p>
     */
    inline SendRawEmailRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendRawEmail</code>.</p>
     */
    inline SendRawEmailRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendRawEmail</code>.</p>
     */
    inline SendRawEmailRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}

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

    Aws::Vector<MessageTag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
