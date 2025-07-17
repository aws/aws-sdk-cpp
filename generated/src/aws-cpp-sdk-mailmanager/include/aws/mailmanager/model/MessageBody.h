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
    AWS_MAILMANAGER_API MessageBody() = default;
    AWS_MAILMANAGER_API MessageBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API MessageBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The plain text body content of the message.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    MessageBody& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTML body content of the message.</p>
     */
    inline const Aws::String& GetHtml() const { return m_html; }
    inline bool HtmlHasBeenSet() const { return m_htmlHasBeenSet; }
    template<typename HtmlT = Aws::String>
    void SetHtml(HtmlT&& value) { m_htmlHasBeenSet = true; m_html = std::forward<HtmlT>(value); }
    template<typename HtmlT = Aws::String>
    MessageBody& WithHtml(HtmlT&& value) { SetHtml(std::forward<HtmlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating if the email was malformed.</p>
     */
    inline bool GetMessageMalformed() const { return m_messageMalformed; }
    inline bool MessageMalformedHasBeenSet() const { return m_messageMalformedHasBeenSet; }
    inline void SetMessageMalformed(bool value) { m_messageMalformedHasBeenSet = true; m_messageMalformed = value; }
    inline MessageBody& WithMessageMalformed(bool value) { SetMessageMalformed(value); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_html;
    bool m_htmlHasBeenSet = false;

    bool m_messageMalformed{false};
    bool m_messageMalformedHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
