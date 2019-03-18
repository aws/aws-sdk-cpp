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
#include <aws/core/utils/Array.h>
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
   * <p>The raw email message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/RawMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API RawMessage
  {
  public:
    RawMessage();
    RawMessage(Aws::Utils::Json::JsonView jsonValue);
    RawMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The raw email message. The message has to meet the following criteria:</p>
     * <ul> <li> <p>The message has to contain a header and a body, separated by one
     * blank line.</p> </li> <li> <p>All of the required header fields must be present
     * in the message.</p> </li> <li> <p>Each part of a multipart MIME message must be
     * formatted properly.</p> </li> <li> <p>Attachments must be in a file format that
     * Amazon Pinpoint supports. </p> </li> <li> <p>The entire message must be Base64
     * encoded.</p> </li> <li> <p>If any of the MIME parts in your message contain
     * content that is outside of the 7-bit ASCII character range, you should encode
     * that content to ensure that recipients' email clients render the message
     * properly.</p> </li> <li> <p>The length of any single line of text in the message
     * can't exceed 1,000 characters. This restriction is defined in <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p> </li> </ul>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const{ return m_data; }

    /**
     * <p>The raw email message. The message has to meet the following criteria:</p>
     * <ul> <li> <p>The message has to contain a header and a body, separated by one
     * blank line.</p> </li> <li> <p>All of the required header fields must be present
     * in the message.</p> </li> <li> <p>Each part of a multipart MIME message must be
     * formatted properly.</p> </li> <li> <p>Attachments must be in a file format that
     * Amazon Pinpoint supports. </p> </li> <li> <p>The entire message must be Base64
     * encoded.</p> </li> <li> <p>If any of the MIME parts in your message contain
     * content that is outside of the 7-bit ASCII character range, you should encode
     * that content to ensure that recipients' email clients render the message
     * properly.</p> </li> <li> <p>The length of any single line of text in the message
     * can't exceed 1,000 characters. This restriction is defined in <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p> </li> </ul>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The raw email message. The message has to meet the following criteria:</p>
     * <ul> <li> <p>The message has to contain a header and a body, separated by one
     * blank line.</p> </li> <li> <p>All of the required header fields must be present
     * in the message.</p> </li> <li> <p>Each part of a multipart MIME message must be
     * formatted properly.</p> </li> <li> <p>Attachments must be in a file format that
     * Amazon Pinpoint supports. </p> </li> <li> <p>The entire message must be Base64
     * encoded.</p> </li> <li> <p>If any of the MIME parts in your message contain
     * content that is outside of the 7-bit ASCII character range, you should encode
     * that content to ensure that recipients' email clients render the message
     * properly.</p> </li> <li> <p>The length of any single line of text in the message
     * can't exceed 1,000 characters. This restriction is defined in <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p> </li> </ul>
     */
    inline void SetData(const Aws::Utils::ByteBuffer& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The raw email message. The message has to meet the following criteria:</p>
     * <ul> <li> <p>The message has to contain a header and a body, separated by one
     * blank line.</p> </li> <li> <p>All of the required header fields must be present
     * in the message.</p> </li> <li> <p>Each part of a multipart MIME message must be
     * formatted properly.</p> </li> <li> <p>Attachments must be in a file format that
     * Amazon Pinpoint supports. </p> </li> <li> <p>The entire message must be Base64
     * encoded.</p> </li> <li> <p>If any of the MIME parts in your message contain
     * content that is outside of the 7-bit ASCII character range, you should encode
     * that content to ensure that recipients' email clients render the message
     * properly.</p> </li> <li> <p>The length of any single line of text in the message
     * can't exceed 1,000 characters. This restriction is defined in <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p> </li> </ul>
     */
    inline void SetData(Aws::Utils::ByteBuffer&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The raw email message. The message has to meet the following criteria:</p>
     * <ul> <li> <p>The message has to contain a header and a body, separated by one
     * blank line.</p> </li> <li> <p>All of the required header fields must be present
     * in the message.</p> </li> <li> <p>Each part of a multipart MIME message must be
     * formatted properly.</p> </li> <li> <p>Attachments must be in a file format that
     * Amazon Pinpoint supports. </p> </li> <li> <p>The entire message must be Base64
     * encoded.</p> </li> <li> <p>If any of the MIME parts in your message contain
     * content that is outside of the 7-bit ASCII character range, you should encode
     * that content to ensure that recipients' email clients render the message
     * properly.</p> </li> <li> <p>The length of any single line of text in the message
     * can't exceed 1,000 characters. This restriction is defined in <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p> </li> </ul>
     */
    inline RawMessage& WithData(const Aws::Utils::ByteBuffer& value) { SetData(value); return *this;}

    /**
     * <p>The raw email message. The message has to meet the following criteria:</p>
     * <ul> <li> <p>The message has to contain a header and a body, separated by one
     * blank line.</p> </li> <li> <p>All of the required header fields must be present
     * in the message.</p> </li> <li> <p>Each part of a multipart MIME message must be
     * formatted properly.</p> </li> <li> <p>Attachments must be in a file format that
     * Amazon Pinpoint supports. </p> </li> <li> <p>The entire message must be Base64
     * encoded.</p> </li> <li> <p>If any of the MIME parts in your message contain
     * content that is outside of the 7-bit ASCII character range, you should encode
     * that content to ensure that recipients' email clients render the message
     * properly.</p> </li> <li> <p>The length of any single line of text in the message
     * can't exceed 1,000 characters. This restriction is defined in <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p> </li> </ul>
     */
    inline RawMessage& WithData(Aws::Utils::ByteBuffer&& value) { SetData(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_data;
    bool m_dataHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
