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
   * <p>When included in a receipt rule, this action adds a header to the received
   * email.</p> <p>For information about adding a header using a receipt rule, see
   * the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-action-add-header.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/AddHeaderAction">AWS
   * API Reference</a></p>
   */
  class AddHeaderAction
  {
  public:
    AWS_SES_API AddHeaderAction();
    AWS_SES_API AddHeaderAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API AddHeaderAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the header to add to the incoming message. The name must contain
     * at least one character, and can contain up to 50 characters. It consists of
     * alphanumeric (a–z, A–Z, 0–9) characters and dashes.</p>
     */
    inline const Aws::String& GetHeaderName() const{ return m_headerName; }

    /**
     * <p>The name of the header to add to the incoming message. The name must contain
     * at least one character, and can contain up to 50 characters. It consists of
     * alphanumeric (a–z, A–Z, 0–9) characters and dashes.</p>
     */
    inline bool HeaderNameHasBeenSet() const { return m_headerNameHasBeenSet; }

    /**
     * <p>The name of the header to add to the incoming message. The name must contain
     * at least one character, and can contain up to 50 characters. It consists of
     * alphanumeric (a–z, A–Z, 0–9) characters and dashes.</p>
     */
    inline void SetHeaderName(const Aws::String& value) { m_headerNameHasBeenSet = true; m_headerName = value; }

    /**
     * <p>The name of the header to add to the incoming message. The name must contain
     * at least one character, and can contain up to 50 characters. It consists of
     * alphanumeric (a–z, A–Z, 0–9) characters and dashes.</p>
     */
    inline void SetHeaderName(Aws::String&& value) { m_headerNameHasBeenSet = true; m_headerName = std::move(value); }

    /**
     * <p>The name of the header to add to the incoming message. The name must contain
     * at least one character, and can contain up to 50 characters. It consists of
     * alphanumeric (a–z, A–Z, 0–9) characters and dashes.</p>
     */
    inline void SetHeaderName(const char* value) { m_headerNameHasBeenSet = true; m_headerName.assign(value); }

    /**
     * <p>The name of the header to add to the incoming message. The name must contain
     * at least one character, and can contain up to 50 characters. It consists of
     * alphanumeric (a–z, A–Z, 0–9) characters and dashes.</p>
     */
    inline AddHeaderAction& WithHeaderName(const Aws::String& value) { SetHeaderName(value); return *this;}

    /**
     * <p>The name of the header to add to the incoming message. The name must contain
     * at least one character, and can contain up to 50 characters. It consists of
     * alphanumeric (a–z, A–Z, 0–9) characters and dashes.</p>
     */
    inline AddHeaderAction& WithHeaderName(Aws::String&& value) { SetHeaderName(std::move(value)); return *this;}

    /**
     * <p>The name of the header to add to the incoming message. The name must contain
     * at least one character, and can contain up to 50 characters. It consists of
     * alphanumeric (a–z, A–Z, 0–9) characters and dashes.</p>
     */
    inline AddHeaderAction& WithHeaderName(const char* value) { SetHeaderName(value); return *this;}


    /**
     * <p>The content to include in the header. This value can contain up to 2048
     * characters. It can't contain newline (<code>\n</code>) or carriage return
     * (<code>\r</code>) characters.</p>
     */
    inline const Aws::String& GetHeaderValue() const{ return m_headerValue; }

    /**
     * <p>The content to include in the header. This value can contain up to 2048
     * characters. It can't contain newline (<code>\n</code>) or carriage return
     * (<code>\r</code>) characters.</p>
     */
    inline bool HeaderValueHasBeenSet() const { return m_headerValueHasBeenSet; }

    /**
     * <p>The content to include in the header. This value can contain up to 2048
     * characters. It can't contain newline (<code>\n</code>) or carriage return
     * (<code>\r</code>) characters.</p>
     */
    inline void SetHeaderValue(const Aws::String& value) { m_headerValueHasBeenSet = true; m_headerValue = value; }

    /**
     * <p>The content to include in the header. This value can contain up to 2048
     * characters. It can't contain newline (<code>\n</code>) or carriage return
     * (<code>\r</code>) characters.</p>
     */
    inline void SetHeaderValue(Aws::String&& value) { m_headerValueHasBeenSet = true; m_headerValue = std::move(value); }

    /**
     * <p>The content to include in the header. This value can contain up to 2048
     * characters. It can't contain newline (<code>\n</code>) or carriage return
     * (<code>\r</code>) characters.</p>
     */
    inline void SetHeaderValue(const char* value) { m_headerValueHasBeenSet = true; m_headerValue.assign(value); }

    /**
     * <p>The content to include in the header. This value can contain up to 2048
     * characters. It can't contain newline (<code>\n</code>) or carriage return
     * (<code>\r</code>) characters.</p>
     */
    inline AddHeaderAction& WithHeaderValue(const Aws::String& value) { SetHeaderValue(value); return *this;}

    /**
     * <p>The content to include in the header. This value can contain up to 2048
     * characters. It can't contain newline (<code>\n</code>) or carriage return
     * (<code>\r</code>) characters.</p>
     */
    inline AddHeaderAction& WithHeaderValue(Aws::String&& value) { SetHeaderValue(std::move(value)); return *this;}

    /**
     * <p>The content to include in the header. This value can contain up to 2048
     * characters. It can't contain newline (<code>\n</code>) or carriage return
     * (<code>\r</code>) characters.</p>
     */
    inline AddHeaderAction& WithHeaderValue(const char* value) { SetHeaderValue(value); return *this;}

  private:

    Aws::String m_headerName;
    bool m_headerNameHasBeenSet = false;

    Aws::String m_headerValue;
    bool m_headerValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
