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
   * <p>Specifies the content and "From" address for an email message that's sent to
   * recipients of a campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignEmailMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API CampaignEmailMessage
  {
  public:
    CampaignEmailMessage();
    CampaignEmailMessage(Aws::Utils::Json::JsonView jsonValue);
    CampaignEmailMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The body of the email for recipients whose email clients don't support HTML
     * content.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The body of the email for recipients whose email clients don't support HTML
     * content.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The body of the email for recipients whose email clients don't support HTML
     * content.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The body of the email for recipients whose email clients don't support HTML
     * content.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The body of the email for recipients whose email clients don't support HTML
     * content.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The body of the email for recipients whose email clients don't support HTML
     * content.</p>
     */
    inline CampaignEmailMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The body of the email for recipients whose email clients don't support HTML
     * content.</p>
     */
    inline CampaignEmailMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The body of the email for recipients whose email clients don't support HTML
     * content.</p>
     */
    inline CampaignEmailMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The verified email address to send the email from. The default address is the
     * FromAddress specified for the email channel for the application.</p>
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }

    /**
     * <p>The verified email address to send the email from. The default address is the
     * FromAddress specified for the email channel for the application.</p>
     */
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }

    /**
     * <p>The verified email address to send the email from. The default address is the
     * FromAddress specified for the email channel for the application.</p>
     */
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }

    /**
     * <p>The verified email address to send the email from. The default address is the
     * FromAddress specified for the email channel for the application.</p>
     */
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }

    /**
     * <p>The verified email address to send the email from. The default address is the
     * FromAddress specified for the email channel for the application.</p>
     */
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }

    /**
     * <p>The verified email address to send the email from. The default address is the
     * FromAddress specified for the email channel for the application.</p>
     */
    inline CampaignEmailMessage& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}

    /**
     * <p>The verified email address to send the email from. The default address is the
     * FromAddress specified for the email channel for the application.</p>
     */
    inline CampaignEmailMessage& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}

    /**
     * <p>The verified email address to send the email from. The default address is the
     * FromAddress specified for the email channel for the application.</p>
     */
    inline CampaignEmailMessage& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}


    /**
     * <p>The body of the email, in HTML format, for recipients whose email clients
     * support HTML content.</p>
     */
    inline const Aws::String& GetHtmlBody() const{ return m_htmlBody; }

    /**
     * <p>The body of the email, in HTML format, for recipients whose email clients
     * support HTML content.</p>
     */
    inline bool HtmlBodyHasBeenSet() const { return m_htmlBodyHasBeenSet; }

    /**
     * <p>The body of the email, in HTML format, for recipients whose email clients
     * support HTML content.</p>
     */
    inline void SetHtmlBody(const Aws::String& value) { m_htmlBodyHasBeenSet = true; m_htmlBody = value; }

    /**
     * <p>The body of the email, in HTML format, for recipients whose email clients
     * support HTML content.</p>
     */
    inline void SetHtmlBody(Aws::String&& value) { m_htmlBodyHasBeenSet = true; m_htmlBody = std::move(value); }

    /**
     * <p>The body of the email, in HTML format, for recipients whose email clients
     * support HTML content.</p>
     */
    inline void SetHtmlBody(const char* value) { m_htmlBodyHasBeenSet = true; m_htmlBody.assign(value); }

    /**
     * <p>The body of the email, in HTML format, for recipients whose email clients
     * support HTML content.</p>
     */
    inline CampaignEmailMessage& WithHtmlBody(const Aws::String& value) { SetHtmlBody(value); return *this;}

    /**
     * <p>The body of the email, in HTML format, for recipients whose email clients
     * support HTML content.</p>
     */
    inline CampaignEmailMessage& WithHtmlBody(Aws::String&& value) { SetHtmlBody(std::move(value)); return *this;}

    /**
     * <p>The body of the email, in HTML format, for recipients whose email clients
     * support HTML content.</p>
     */
    inline CampaignEmailMessage& WithHtmlBody(const char* value) { SetHtmlBody(value); return *this;}


    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline CampaignEmailMessage& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline CampaignEmailMessage& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline CampaignEmailMessage& WithTitle(const char* value) { SetTitle(value); return *this;}

  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet;

    Aws::String m_fromAddress;
    bool m_fromAddressHasBeenSet;

    Aws::String m_htmlBody;
    bool m_htmlBodyHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
