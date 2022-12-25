/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/Message.h>
#include <aws/pinpoint-email/model/RawMessage.h>
#include <aws/pinpoint-email/model/Template.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that defines the entire content of the email, including the message
   * headers and the body content. You can create a simple email message, in which
   * you specify the subject and the text and HTML versions of the message body. You
   * can also create raw messages, in which you specify a complete MIME-formatted
   * message. Raw messages can include attachments and custom headers.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/EmailContent">AWS
   * API Reference</a></p>
   */
  class EmailContent
  {
  public:
    AWS_PINPOINTEMAIL_API EmailContent();
    AWS_PINPOINTEMAIL_API EmailContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API EmailContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The simple email message. The message consists of a subject and a message
     * body.</p>
     */
    inline const Message& GetSimple() const{ return m_simple; }

    /**
     * <p>The simple email message. The message consists of a subject and a message
     * body.</p>
     */
    inline bool SimpleHasBeenSet() const { return m_simpleHasBeenSet; }

    /**
     * <p>The simple email message. The message consists of a subject and a message
     * body.</p>
     */
    inline void SetSimple(const Message& value) { m_simpleHasBeenSet = true; m_simple = value; }

    /**
     * <p>The simple email message. The message consists of a subject and a message
     * body.</p>
     */
    inline void SetSimple(Message&& value) { m_simpleHasBeenSet = true; m_simple = std::move(value); }

    /**
     * <p>The simple email message. The message consists of a subject and a message
     * body.</p>
     */
    inline EmailContent& WithSimple(const Message& value) { SetSimple(value); return *this;}

    /**
     * <p>The simple email message. The message consists of a subject and a message
     * body.</p>
     */
    inline EmailContent& WithSimple(Message&& value) { SetSimple(std::move(value)); return *this;}


    /**
     * <p>The raw email message. The message has to meet the following criteria:</p>
     * <ul> <li> <p>The message has to contain a header and a body, separated by one
     * blank line.</p> </li> <li> <p>All of the required header fields must be present
     * in the message.</p> </li> <li> <p>Each part of a multipart MIME message must be
     * formatted properly.</p> </li> <li> <p>If you include attachments, they must be
     * in a file format that Amazon Pinpoint supports. </p> </li> <li> <p>The entire
     * message must be Base64 encoded.</p> </li> <li> <p>If any of the MIME parts in
     * your message contain content that is outside of the 7-bit ASCII character range,
     * you should encode that content to ensure that recipients' email clients render
     * the message properly.</p> </li> <li> <p>The length of any single line of text in
     * the message can't exceed 1,000 characters. This restriction is defined in <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p> </li> </ul>
     */
    inline const RawMessage& GetRaw() const{ return m_raw; }

    /**
     * <p>The raw email message. The message has to meet the following criteria:</p>
     * <ul> <li> <p>The message has to contain a header and a body, separated by one
     * blank line.</p> </li> <li> <p>All of the required header fields must be present
     * in the message.</p> </li> <li> <p>Each part of a multipart MIME message must be
     * formatted properly.</p> </li> <li> <p>If you include attachments, they must be
     * in a file format that Amazon Pinpoint supports. </p> </li> <li> <p>The entire
     * message must be Base64 encoded.</p> </li> <li> <p>If any of the MIME parts in
     * your message contain content that is outside of the 7-bit ASCII character range,
     * you should encode that content to ensure that recipients' email clients render
     * the message properly.</p> </li> <li> <p>The length of any single line of text in
     * the message can't exceed 1,000 characters. This restriction is defined in <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p> </li> </ul>
     */
    inline bool RawHasBeenSet() const { return m_rawHasBeenSet; }

    /**
     * <p>The raw email message. The message has to meet the following criteria:</p>
     * <ul> <li> <p>The message has to contain a header and a body, separated by one
     * blank line.</p> </li> <li> <p>All of the required header fields must be present
     * in the message.</p> </li> <li> <p>Each part of a multipart MIME message must be
     * formatted properly.</p> </li> <li> <p>If you include attachments, they must be
     * in a file format that Amazon Pinpoint supports. </p> </li> <li> <p>The entire
     * message must be Base64 encoded.</p> </li> <li> <p>If any of the MIME parts in
     * your message contain content that is outside of the 7-bit ASCII character range,
     * you should encode that content to ensure that recipients' email clients render
     * the message properly.</p> </li> <li> <p>The length of any single line of text in
     * the message can't exceed 1,000 characters. This restriction is defined in <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p> </li> </ul>
     */
    inline void SetRaw(const RawMessage& value) { m_rawHasBeenSet = true; m_raw = value; }

    /**
     * <p>The raw email message. The message has to meet the following criteria:</p>
     * <ul> <li> <p>The message has to contain a header and a body, separated by one
     * blank line.</p> </li> <li> <p>All of the required header fields must be present
     * in the message.</p> </li> <li> <p>Each part of a multipart MIME message must be
     * formatted properly.</p> </li> <li> <p>If you include attachments, they must be
     * in a file format that Amazon Pinpoint supports. </p> </li> <li> <p>The entire
     * message must be Base64 encoded.</p> </li> <li> <p>If any of the MIME parts in
     * your message contain content that is outside of the 7-bit ASCII character range,
     * you should encode that content to ensure that recipients' email clients render
     * the message properly.</p> </li> <li> <p>The length of any single line of text in
     * the message can't exceed 1,000 characters. This restriction is defined in <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p> </li> </ul>
     */
    inline void SetRaw(RawMessage&& value) { m_rawHasBeenSet = true; m_raw = std::move(value); }

    /**
     * <p>The raw email message. The message has to meet the following criteria:</p>
     * <ul> <li> <p>The message has to contain a header and a body, separated by one
     * blank line.</p> </li> <li> <p>All of the required header fields must be present
     * in the message.</p> </li> <li> <p>Each part of a multipart MIME message must be
     * formatted properly.</p> </li> <li> <p>If you include attachments, they must be
     * in a file format that Amazon Pinpoint supports. </p> </li> <li> <p>The entire
     * message must be Base64 encoded.</p> </li> <li> <p>If any of the MIME parts in
     * your message contain content that is outside of the 7-bit ASCII character range,
     * you should encode that content to ensure that recipients' email clients render
     * the message properly.</p> </li> <li> <p>The length of any single line of text in
     * the message can't exceed 1,000 characters. This restriction is defined in <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p> </li> </ul>
     */
    inline EmailContent& WithRaw(const RawMessage& value) { SetRaw(value); return *this;}

    /**
     * <p>The raw email message. The message has to meet the following criteria:</p>
     * <ul> <li> <p>The message has to contain a header and a body, separated by one
     * blank line.</p> </li> <li> <p>All of the required header fields must be present
     * in the message.</p> </li> <li> <p>Each part of a multipart MIME message must be
     * formatted properly.</p> </li> <li> <p>If you include attachments, they must be
     * in a file format that Amazon Pinpoint supports. </p> </li> <li> <p>The entire
     * message must be Base64 encoded.</p> </li> <li> <p>If any of the MIME parts in
     * your message contain content that is outside of the 7-bit ASCII character range,
     * you should encode that content to ensure that recipients' email clients render
     * the message properly.</p> </li> <li> <p>The length of any single line of text in
     * the message can't exceed 1,000 characters. This restriction is defined in <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p> </li> </ul>
     */
    inline EmailContent& WithRaw(RawMessage&& value) { SetRaw(std::move(value)); return *this;}


    /**
     * <p>The template to use for the email message.</p>
     */
    inline const Template& GetTemplate() const{ return m_template; }

    /**
     * <p>The template to use for the email message.</p>
     */
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    /**
     * <p>The template to use for the email message.</p>
     */
    inline void SetTemplate(const Template& value) { m_templateHasBeenSet = true; m_template = value; }

    /**
     * <p>The template to use for the email message.</p>
     */
    inline void SetTemplate(Template&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    /**
     * <p>The template to use for the email message.</p>
     */
    inline EmailContent& WithTemplate(const Template& value) { SetTemplate(value); return *this;}

    /**
     * <p>The template to use for the email message.</p>
     */
    inline EmailContent& WithTemplate(Template&& value) { SetTemplate(std::move(value)); return *this;}

  private:

    Message m_simple;
    bool m_simpleHasBeenSet = false;

    RawMessage m_raw;
    bool m_rawHasBeenSet = false;

    Template m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
