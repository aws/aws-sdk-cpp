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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/Content.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Represents the body of the email message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/Body">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API Body
  {
  public:
    Body();
    Body(Aws::Utils::Json::JsonView jsonValue);
    Body& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that represents the version of the message that is displayed in
     * email clients that don't support HTML, or clients where the recipient has
     * disabled HTML rendering.</p>
     */
    inline const Content& GetText() const{ return m_text; }

    /**
     * <p>An object that represents the version of the message that is displayed in
     * email clients that don't support HTML, or clients where the recipient has
     * disabled HTML rendering.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>An object that represents the version of the message that is displayed in
     * email clients that don't support HTML, or clients where the recipient has
     * disabled HTML rendering.</p>
     */
    inline void SetText(const Content& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>An object that represents the version of the message that is displayed in
     * email clients that don't support HTML, or clients where the recipient has
     * disabled HTML rendering.</p>
     */
    inline void SetText(Content&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>An object that represents the version of the message that is displayed in
     * email clients that don't support HTML, or clients where the recipient has
     * disabled HTML rendering.</p>
     */
    inline Body& WithText(const Content& value) { SetText(value); return *this;}

    /**
     * <p>An object that represents the version of the message that is displayed in
     * email clients that don't support HTML, or clients where the recipient has
     * disabled HTML rendering.</p>
     */
    inline Body& WithText(Content&& value) { SetText(std::move(value)); return *this;}


    /**
     * <p>An object that represents the version of the message that is displayed in
     * email clients that support HTML. HTML messages can include formatted text,
     * hyperlinks, images, and more. </p>
     */
    inline const Content& GetHtml() const{ return m_html; }

    /**
     * <p>An object that represents the version of the message that is displayed in
     * email clients that support HTML. HTML messages can include formatted text,
     * hyperlinks, images, and more. </p>
     */
    inline bool HtmlHasBeenSet() const { return m_htmlHasBeenSet; }

    /**
     * <p>An object that represents the version of the message that is displayed in
     * email clients that support HTML. HTML messages can include formatted text,
     * hyperlinks, images, and more. </p>
     */
    inline void SetHtml(const Content& value) { m_htmlHasBeenSet = true; m_html = value; }

    /**
     * <p>An object that represents the version of the message that is displayed in
     * email clients that support HTML. HTML messages can include formatted text,
     * hyperlinks, images, and more. </p>
     */
    inline void SetHtml(Content&& value) { m_htmlHasBeenSet = true; m_html = std::move(value); }

    /**
     * <p>An object that represents the version of the message that is displayed in
     * email clients that support HTML. HTML messages can include formatted text,
     * hyperlinks, images, and more. </p>
     */
    inline Body& WithHtml(const Content& value) { SetHtml(value); return *this;}

    /**
     * <p>An object that represents the version of the message that is displayed in
     * email clients that support HTML. HTML messages can include formatted text,
     * hyperlinks, images, and more. </p>
     */
    inline Body& WithHtml(Content&& value) { SetHtml(std::move(value)); return *this;}

  private:

    Content m_text;
    bool m_textHasBeenSet;

    Content m_html;
    bool m_htmlHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
