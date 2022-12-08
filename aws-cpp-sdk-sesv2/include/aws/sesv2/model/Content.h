/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that represents the content of the email, and optionally a
   * character set specification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/Content">AWS API
   * Reference</a></p>
   */
  class Content
  {
  public:
    AWS_SESV2_API Content();
    AWS_SESV2_API Content(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Content& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * protocol, Amazon SES uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline const Aws::String& GetCharset() const{ return m_charset; }

    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon SES uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }

    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon SES uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline void SetCharset(const Aws::String& value) { m_charsetHasBeenSet = true; m_charset = value; }

    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon SES uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline void SetCharset(Aws::String&& value) { m_charsetHasBeenSet = true; m_charset = std::move(value); }

    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon SES uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline void SetCharset(const char* value) { m_charsetHasBeenSet = true; m_charset.assign(value); }

    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon SES uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline Content& WithCharset(const Aws::String& value) { SetCharset(value); return *this;}

    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon SES uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline Content& WithCharset(Aws::String&& value) { SetCharset(std::move(value)); return *this;}

    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon SES uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline Content& WithCharset(const char* value) { SetCharset(value); return *this;}

  private:

    Aws::String m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_charset;
    bool m_charsetHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
