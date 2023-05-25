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
    AWS_SES_API Body();
    AWS_SES_API Body(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API Body& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The content of the message, in text format. Use this for text-based email
     * clients, or clients on high-latency networks (such as mobile devices).</p>
     */
    inline const Content& GetText() const{ return m_text; }

    /**
     * <p>The content of the message, in text format. Use this for text-based email
     * clients, or clients on high-latency networks (such as mobile devices).</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The content of the message, in text format. Use this for text-based email
     * clients, or clients on high-latency networks (such as mobile devices).</p>
     */
    inline void SetText(const Content& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The content of the message, in text format. Use this for text-based email
     * clients, or clients on high-latency networks (such as mobile devices).</p>
     */
    inline void SetText(Content&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The content of the message, in text format. Use this for text-based email
     * clients, or clients on high-latency networks (such as mobile devices).</p>
     */
    inline Body& WithText(const Content& value) { SetText(value); return *this;}

    /**
     * <p>The content of the message, in text format. Use this for text-based email
     * clients, or clients on high-latency networks (such as mobile devices).</p>
     */
    inline Body& WithText(Content&& value) { SetText(std::move(value)); return *this;}


    /**
     * <p>The content of the message, in HTML format. Use this for email clients that
     * can process HTML. You can include clickable links, formatted text, and much more
     * in an HTML message.</p>
     */
    inline const Content& GetHtml() const{ return m_html; }

    /**
     * <p>The content of the message, in HTML format. Use this for email clients that
     * can process HTML. You can include clickable links, formatted text, and much more
     * in an HTML message.</p>
     */
    inline bool HtmlHasBeenSet() const { return m_htmlHasBeenSet; }

    /**
     * <p>The content of the message, in HTML format. Use this for email clients that
     * can process HTML. You can include clickable links, formatted text, and much more
     * in an HTML message.</p>
     */
    inline void SetHtml(const Content& value) { m_htmlHasBeenSet = true; m_html = value; }

    /**
     * <p>The content of the message, in HTML format. Use this for email clients that
     * can process HTML. You can include clickable links, formatted text, and much more
     * in an HTML message.</p>
     */
    inline void SetHtml(Content&& value) { m_htmlHasBeenSet = true; m_html = std::move(value); }

    /**
     * <p>The content of the message, in HTML format. Use this for email clients that
     * can process HTML. You can include clickable links, formatted text, and much more
     * in an HTML message.</p>
     */
    inline Body& WithHtml(const Content& value) { SetHtml(value); return *this;}

    /**
     * <p>The content of the message, in HTML format. Use this for email clients that
     * can process HTML. You can include clickable links, formatted text, and much more
     * in an HTML message.</p>
     */
    inline Body& WithHtml(Content&& value) { SetHtml(std::move(value)); return *this;}

  private:

    Content m_text;
    bool m_textHasBeenSet = false;

    Content m_html;
    bool m_htmlHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
