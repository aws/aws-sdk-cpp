/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The textual body content of an email message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/MessageBody">AWS
   * API Reference</a></p>
   */
  class MessageBody
  {
  public:
    AWS_MAILMANAGER_API MessageBody();
    AWS_MAILMANAGER_API MessageBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API MessageBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The HTML body content of the message.</p>
     */
    inline const Aws::String& GetHtml() const{ return m_html; }
    inline bool HtmlHasBeenSet() const { return m_htmlHasBeenSet; }
    inline void SetHtml(const Aws::String& value) { m_htmlHasBeenSet = true; m_html = value; }
    inline void SetHtml(Aws::String&& value) { m_htmlHasBeenSet = true; m_html = std::move(value); }
    inline void SetHtml(const char* value) { m_htmlHasBeenSet = true; m_html.assign(value); }
    inline MessageBody& WithHtml(const Aws::String& value) { SetHtml(value); return *this;}
    inline MessageBody& WithHtml(Aws::String&& value) { SetHtml(std::move(value)); return *this;}
    inline MessageBody& WithHtml(const char* value) { SetHtml(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating if the email was malformed.</p>
     */
    inline bool GetMessageMalformed() const{ return m_messageMalformed; }
    inline bool MessageMalformedHasBeenSet() const { return m_messageMalformedHasBeenSet; }
    inline void SetMessageMalformed(bool value) { m_messageMalformedHasBeenSet = true; m_messageMalformed = value; }
    inline MessageBody& WithMessageMalformed(bool value) { SetMessageMalformed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plain text body content of the message.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline MessageBody& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline MessageBody& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline MessageBody& WithText(const char* value) { SetText(value); return *this;}
    ///@}
  private:

    Aws::String m_html;
    bool m_htmlHasBeenSet = false;

    bool m_messageMalformed;
    bool m_messageMalformedHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
