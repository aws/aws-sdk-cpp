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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Specifies the content and settings for a message template that can be used in
   * messages that are sent through the email channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EmailTemplateRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EmailTemplateRequest
  {
  public:
    EmailTemplateRequest();
    EmailTemplateRequest(Aws::Utils::Json::JsonView jsonValue);
    EmailTemplateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * support HTML. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline const Aws::String& GetHtmlPart() const{ return m_htmlPart; }

    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * support HTML. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline bool HtmlPartHasBeenSet() const { return m_htmlPartHasBeenSet; }

    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * support HTML. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline void SetHtmlPart(const Aws::String& value) { m_htmlPartHasBeenSet = true; m_htmlPart = value; }

    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * support HTML. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline void SetHtmlPart(Aws::String&& value) { m_htmlPartHasBeenSet = true; m_htmlPart = std::move(value); }

    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * support HTML. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline void SetHtmlPart(const char* value) { m_htmlPartHasBeenSet = true; m_htmlPart.assign(value); }

    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * support HTML. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline EmailTemplateRequest& WithHtmlPart(const Aws::String& value) { SetHtmlPart(value); return *this;}

    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * support HTML. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline EmailTemplateRequest& WithHtmlPart(Aws::String&& value) { SetHtmlPart(std::move(value)); return *this;}

    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * support HTML. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline EmailTemplateRequest& WithHtmlPart(const char* value) { SetHtmlPart(value); return *this;}


    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline EmailTemplateRequest& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline EmailTemplateRequest& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline EmailTemplateRequest& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The message body, in text format, to use in email messages that are based on
     * the message template. We recommend using text format for email clients that
     * don't support HTML and clients that are connected to high-latency networks, such
     * as mobile devices.</p>
     */
    inline const Aws::String& GetTextPart() const{ return m_textPart; }

    /**
     * <p>The message body, in text format, to use in email messages that are based on
     * the message template. We recommend using text format for email clients that
     * don't support HTML and clients that are connected to high-latency networks, such
     * as mobile devices.</p>
     */
    inline bool TextPartHasBeenSet() const { return m_textPartHasBeenSet; }

    /**
     * <p>The message body, in text format, to use in email messages that are based on
     * the message template. We recommend using text format for email clients that
     * don't support HTML and clients that are connected to high-latency networks, such
     * as mobile devices.</p>
     */
    inline void SetTextPart(const Aws::String& value) { m_textPartHasBeenSet = true; m_textPart = value; }

    /**
     * <p>The message body, in text format, to use in email messages that are based on
     * the message template. We recommend using text format for email clients that
     * don't support HTML and clients that are connected to high-latency networks, such
     * as mobile devices.</p>
     */
    inline void SetTextPart(Aws::String&& value) { m_textPartHasBeenSet = true; m_textPart = std::move(value); }

    /**
     * <p>The message body, in text format, to use in email messages that are based on
     * the message template. We recommend using text format for email clients that
     * don't support HTML and clients that are connected to high-latency networks, such
     * as mobile devices.</p>
     */
    inline void SetTextPart(const char* value) { m_textPartHasBeenSet = true; m_textPart.assign(value); }

    /**
     * <p>The message body, in text format, to use in email messages that are based on
     * the message template. We recommend using text format for email clients that
     * don't support HTML and clients that are connected to high-latency networks, such
     * as mobile devices.</p>
     */
    inline EmailTemplateRequest& WithTextPart(const Aws::String& value) { SetTextPart(value); return *this;}

    /**
     * <p>The message body, in text format, to use in email messages that are based on
     * the message template. We recommend using text format for email clients that
     * don't support HTML and clients that are connected to high-latency networks, such
     * as mobile devices.</p>
     */
    inline EmailTemplateRequest& WithTextPart(Aws::String&& value) { SetTextPart(std::move(value)); return *this;}

    /**
     * <p>The message body, in text format, to use in email messages that are based on
     * the message template. We recommend using text format for email clients that
     * don't support HTML and clients that are connected to high-latency networks, such
     * as mobile devices.</p>
     */
    inline EmailTemplateRequest& WithTextPart(const char* value) { SetTextPart(value); return *this;}

  private:

    Aws::String m_htmlPart;
    bool m_htmlPartHasBeenSet;

    Aws::String m_subject;
    bool m_subjectHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_textPart;
    bool m_textPartHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
