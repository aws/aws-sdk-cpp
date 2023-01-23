/**
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
   * <p>Represents textual data, plus an optional character set specification.</p>
   * <p>By default, the text must be 7-bit ASCII, due to the constraints of the SMTP
   * protocol. If the text must contain any other characters, then you must also
   * specify a character set. Examples include UTF-8, ISO-8859-1, and
   * Shift_JIS.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/Content">AWS API
   * Reference</a></p>
   */
  class Content
  {
  public:
    AWS_SES_API Content();
    AWS_SES_API Content(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API Content& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The textual data of the content.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>The textual data of the content.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The textual data of the content.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The textual data of the content.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The textual data of the content.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>The textual data of the content.</p>
     */
    inline Content& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>The textual data of the content.</p>
     */
    inline Content& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The textual data of the content.</p>
     */
    inline Content& WithData(const char* value) { SetData(value); return *this;}


    /**
     * <p>The character set of the content.</p>
     */
    inline const Aws::String& GetCharset() const{ return m_charset; }

    /**
     * <p>The character set of the content.</p>
     */
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }

    /**
     * <p>The character set of the content.</p>
     */
    inline void SetCharset(const Aws::String& value) { m_charsetHasBeenSet = true; m_charset = value; }

    /**
     * <p>The character set of the content.</p>
     */
    inline void SetCharset(Aws::String&& value) { m_charsetHasBeenSet = true; m_charset = std::move(value); }

    /**
     * <p>The character set of the content.</p>
     */
    inline void SetCharset(const char* value) { m_charsetHasBeenSet = true; m_charset.assign(value); }

    /**
     * <p>The character set of the content.</p>
     */
    inline Content& WithCharset(const Aws::String& value) { SetCharset(value); return *this;}

    /**
     * <p>The character set of the content.</p>
     */
    inline Content& WithCharset(Aws::String&& value) { SetCharset(std::move(value)); return *this;}

    /**
     * <p>The character set of the content.</p>
     */
    inline Content& WithCharset(const char* value) { SetCharset(value); return *this;}

  private:

    Aws::String m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_charset;
    bool m_charsetHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
