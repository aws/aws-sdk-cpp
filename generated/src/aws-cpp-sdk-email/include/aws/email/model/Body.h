/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/email/model/Content.h>
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
   * <p>Represents the body of the message. You can specify text, HTML, or both. If
   * you use both, then the message should display correctly in the widest variety of
   * email clients.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/Body">AWS API
   * Reference</a></p>
   */
  class Body
  {
  public:
    AWS_SES_API Body() = default;
    AWS_SES_API Body(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API Body& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The content of the message, in text format. Use this for text-based email
     * clients, or clients on high-latency networks (such as mobile devices).</p>
     */
    inline const Content& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Content>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Content>
    Body& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the message, in HTML format. Use this for email clients that
     * can process HTML. You can include clickable links, formatted text, and much more
     * in an HTML message.</p>
     */
    inline const Content& GetHtml() const { return m_html; }
    inline bool HtmlHasBeenSet() const { return m_htmlHasBeenSet; }
    template<typename HtmlT = Content>
    void SetHtml(HtmlT&& value) { m_htmlHasBeenSet = true; m_html = std::forward<HtmlT>(value); }
    template<typename HtmlT = Content>
    Body& WithHtml(HtmlT&& value) { SetHtml(std::forward<HtmlT>(value)); return *this;}
    ///@}
  private:

    Content m_text;
    bool m_textHasBeenSet = false;

    Content m_html;
    bool m_htmlHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
