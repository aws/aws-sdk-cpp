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
  class AWS_SES_API Body
  {
  public:
    Body();
    Body(const Aws::Utils::Xml::XmlNode& xmlNode);
    Body& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_textHasBeenSet;

    Content m_html;
    bool m_htmlHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
