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
    AWS_SES_API Content() = default;
    AWS_SES_API Content(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API Content& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The textual data of the content.</p>
     */
    inline const Aws::String& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::String>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::String>
    Content& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The character set of the content.</p>
     */
    inline const Aws::String& GetCharset() const { return m_charset; }
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }
    template<typename CharsetT = Aws::String>
    void SetCharset(CharsetT&& value) { m_charsetHasBeenSet = true; m_charset = std::forward<CharsetT>(value); }
    template<typename CharsetT = Aws::String>
    Content& WithCharset(CharsetT&& value) { SetCharset(std::forward<CharsetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_charset;
    bool m_charsetHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
