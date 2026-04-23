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
   * The email message configuration.<p><h3>See Also:</h3>   <a
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
     * The email text body.
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * The email text body.
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * The email text body.
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * The email text body.
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * The email text body.
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * The email text body.
     */
    inline CampaignEmailMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * The email text body.
     */
    inline CampaignEmailMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * The email text body.
     */
    inline CampaignEmailMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline CampaignEmailMessage& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline CampaignEmailMessage& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline CampaignEmailMessage& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}


    /**
     * The email html body.
     */
    inline const Aws::String& GetHtmlBody() const{ return m_htmlBody; }

    /**
     * The email html body.
     */
    inline bool HtmlBodyHasBeenSet() const { return m_htmlBodyHasBeenSet; }

    /**
     * The email html body.
     */
    inline void SetHtmlBody(const Aws::String& value) { m_htmlBodyHasBeenSet = true; m_htmlBody = value; }

    /**
     * The email html body.
     */
    inline void SetHtmlBody(Aws::String&& value) { m_htmlBodyHasBeenSet = true; m_htmlBody = std::move(value); }

    /**
     * The email html body.
     */
    inline void SetHtmlBody(const char* value) { m_htmlBodyHasBeenSet = true; m_htmlBody.assign(value); }

    /**
     * The email html body.
     */
    inline CampaignEmailMessage& WithHtmlBody(const Aws::String& value) { SetHtmlBody(value); return *this;}

    /**
     * The email html body.
     */
    inline CampaignEmailMessage& WithHtmlBody(Aws::String&& value) { SetHtmlBody(std::move(value)); return *this;}

    /**
     * The email html body.
     */
    inline CampaignEmailMessage& WithHtmlBody(const char* value) { SetHtmlBody(value); return *this;}


    /**
     * The email title (Or subject).
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * The email title (Or subject).
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * The email title (Or subject).
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * The email title (Or subject).
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * The email title (Or subject).
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * The email title (Or subject).
     */
    inline CampaignEmailMessage& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * The email title (Or subject).
     */
    inline CampaignEmailMessage& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * The email title (Or subject).
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
