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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object that represents the content of the email, and optionally a
   * character set specification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/Content">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API Content
  {
  public:
    Content();
    Content(Aws::Utils::Json::JsonView jsonValue);
    Content& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content of the message itself.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>The content of the message itself.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The content of the message itself.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The content of the message itself.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The content of the message itself.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>The content of the message itself.</p>
     */
    inline Content& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>The content of the message itself.</p>
     */
    inline Content& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The content of the message itself.</p>
     */
    inline Content& WithData(const char* value) { SetData(value); return *this;}


    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon Pinpoint uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline const Aws::String& GetCharset() const{ return m_charset; }

    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon Pinpoint uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }

    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon Pinpoint uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline void SetCharset(const Aws::String& value) { m_charsetHasBeenSet = true; m_charset = value; }

    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon Pinpoint uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline void SetCharset(Aws::String&& value) { m_charsetHasBeenSet = true; m_charset = std::move(value); }

    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon Pinpoint uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline void SetCharset(const char* value) { m_charsetHasBeenSet = true; m_charset.assign(value); }

    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon Pinpoint uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline Content& WithCharset(const Aws::String& value) { SetCharset(value); return *this;}

    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon Pinpoint uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline Content& WithCharset(Aws::String&& value) { SetCharset(std::move(value)); return *this;}

    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon Pinpoint uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline Content& WithCharset(const char* value) { SetCharset(value); return *this;}

  private:

    Aws::String m_data;
    bool m_dataHasBeenSet;

    Aws::String m_charset;
    bool m_charsetHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
