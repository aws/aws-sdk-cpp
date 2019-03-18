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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SimpleEmailPart.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * An email composed of a subject, a text part and a html part.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SimpleEmail">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SimpleEmail
  {
  public:
    SimpleEmail();
    SimpleEmail(Aws::Utils::Json::JsonView jsonValue);
    SimpleEmail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The content of the message, in HTML format. Use this for email clients that can
     * process HTML. You can include clickable links, formatted text, and much more in
     * an HTML message.
     */
    inline const SimpleEmailPart& GetHtmlPart() const{ return m_htmlPart; }

    /**
     * The content of the message, in HTML format. Use this for email clients that can
     * process HTML. You can include clickable links, formatted text, and much more in
     * an HTML message.
     */
    inline bool HtmlPartHasBeenSet() const { return m_htmlPartHasBeenSet; }

    /**
     * The content of the message, in HTML format. Use this for email clients that can
     * process HTML. You can include clickable links, formatted text, and much more in
     * an HTML message.
     */
    inline void SetHtmlPart(const SimpleEmailPart& value) { m_htmlPartHasBeenSet = true; m_htmlPart = value; }

    /**
     * The content of the message, in HTML format. Use this for email clients that can
     * process HTML. You can include clickable links, formatted text, and much more in
     * an HTML message.
     */
    inline void SetHtmlPart(SimpleEmailPart&& value) { m_htmlPartHasBeenSet = true; m_htmlPart = std::move(value); }

    /**
     * The content of the message, in HTML format. Use this for email clients that can
     * process HTML. You can include clickable links, formatted text, and much more in
     * an HTML message.
     */
    inline SimpleEmail& WithHtmlPart(const SimpleEmailPart& value) { SetHtmlPart(value); return *this;}

    /**
     * The content of the message, in HTML format. Use this for email clients that can
     * process HTML. You can include clickable links, formatted text, and much more in
     * an HTML message.
     */
    inline SimpleEmail& WithHtmlPart(SimpleEmailPart&& value) { SetHtmlPart(std::move(value)); return *this;}


    /**
     * The subject of the message: A short summary of the content, which will appear in
     * the recipient's inbox.
     */
    inline const SimpleEmailPart& GetSubject() const{ return m_subject; }

    /**
     * The subject of the message: A short summary of the content, which will appear in
     * the recipient's inbox.
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * The subject of the message: A short summary of the content, which will appear in
     * the recipient's inbox.
     */
    inline void SetSubject(const SimpleEmailPart& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * The subject of the message: A short summary of the content, which will appear in
     * the recipient's inbox.
     */
    inline void SetSubject(SimpleEmailPart&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * The subject of the message: A short summary of the content, which will appear in
     * the recipient's inbox.
     */
    inline SimpleEmail& WithSubject(const SimpleEmailPart& value) { SetSubject(value); return *this;}

    /**
     * The subject of the message: A short summary of the content, which will appear in
     * the recipient's inbox.
     */
    inline SimpleEmail& WithSubject(SimpleEmailPart&& value) { SetSubject(std::move(value)); return *this;}


    /**
     * The content of the message, in text format. Use this for text-based email
     * clients, or clients on high-latency networks (such as mobile devices).
     */
    inline const SimpleEmailPart& GetTextPart() const{ return m_textPart; }

    /**
     * The content of the message, in text format. Use this for text-based email
     * clients, or clients on high-latency networks (such as mobile devices).
     */
    inline bool TextPartHasBeenSet() const { return m_textPartHasBeenSet; }

    /**
     * The content of the message, in text format. Use this for text-based email
     * clients, or clients on high-latency networks (such as mobile devices).
     */
    inline void SetTextPart(const SimpleEmailPart& value) { m_textPartHasBeenSet = true; m_textPart = value; }

    /**
     * The content of the message, in text format. Use this for text-based email
     * clients, or clients on high-latency networks (such as mobile devices).
     */
    inline void SetTextPart(SimpleEmailPart&& value) { m_textPartHasBeenSet = true; m_textPart = std::move(value); }

    /**
     * The content of the message, in text format. Use this for text-based email
     * clients, or clients on high-latency networks (such as mobile devices).
     */
    inline SimpleEmail& WithTextPart(const SimpleEmailPart& value) { SetTextPart(value); return *this;}

    /**
     * The content of the message, in text format. Use this for text-based email
     * clients, or clients on high-latency networks (such as mobile devices).
     */
    inline SimpleEmail& WithTextPart(SimpleEmailPart&& value) { SetTextPart(std::move(value)); return *this;}

  private:

    SimpleEmailPart m_htmlPart;
    bool m_htmlPartHasBeenSet;

    SimpleEmailPart m_subject;
    bool m_subjectHasBeenSet;

    SimpleEmailPart m_textPart;
    bool m_textPartHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
