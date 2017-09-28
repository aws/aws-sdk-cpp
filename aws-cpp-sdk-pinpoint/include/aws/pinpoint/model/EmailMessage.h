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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * Email Message.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EmailMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EmailMessage
  {
  public:
    EmailMessage();
    EmailMessage(const Aws::Utils::Json::JsonValue& jsonValue);
    EmailMessage& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The message body of the notification, the email body or the text message.
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * The message body of the notification, the email body or the text message.
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * The message body of the notification, the email body or the text message.
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * The message body of the notification, the email body or the text message.
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * The message body of the notification, the email body or the text message.
     */
    inline EmailMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * The message body of the notification, the email body or the text message.
     */
    inline EmailMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * The message body of the notification, the email body or the text message.
     */
    inline EmailMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }

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
    inline EmailMessage& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline EmailMessage& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}

    /**
     * The email address used to send the email from. Defaults to use FromAddress
     * specified in the Email Channel.
     */
    inline EmailMessage& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}


    /**
     * The HTML part of the email.
     */
    inline const Aws::String& GetHtmlBody() const{ return m_htmlBody; }

    /**
     * The HTML part of the email.
     */
    inline void SetHtmlBody(const Aws::String& value) { m_htmlBodyHasBeenSet = true; m_htmlBody = value; }

    /**
     * The HTML part of the email.
     */
    inline void SetHtmlBody(Aws::String&& value) { m_htmlBodyHasBeenSet = true; m_htmlBody = std::move(value); }

    /**
     * The HTML part of the email.
     */
    inline void SetHtmlBody(const char* value) { m_htmlBodyHasBeenSet = true; m_htmlBody.assign(value); }

    /**
     * The HTML part of the email.
     */
    inline EmailMessage& WithHtmlBody(const Aws::String& value) { SetHtmlBody(value); return *this;}

    /**
     * The HTML part of the email.
     */
    inline EmailMessage& WithHtmlBody(Aws::String&& value) { SetHtmlBody(std::move(value)); return *this;}

    /**
     * The HTML part of the email.
     */
    inline EmailMessage& WithHtmlBody(const char* value) { SetHtmlBody(value); return *this;}


    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline EmailMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }


    /**
     * The ARN of the template to use for the email.
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * The ARN of the template to use for the email.
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }

    /**
     * The ARN of the template to use for the email.
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }

    /**
     * The ARN of the template to use for the email.
     */
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }

    /**
     * The ARN of the template to use for the email.
     */
    inline EmailMessage& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * The ARN of the template to use for the email.
     */
    inline EmailMessage& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * The ARN of the template to use for the email.
     */
    inline EmailMessage& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    /**
     * The subject of the email.
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * The subject of the email.
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * The subject of the email.
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * The subject of the email.
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * The subject of the email.
     */
    inline EmailMessage& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * The subject of the email.
     */
    inline EmailMessage& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * The subject of the email.
     */
    inline EmailMessage& WithTitle(const char* value) { SetTitle(value); return *this;}

  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet;

    Aws::String m_fromAddress;
    bool m_fromAddressHasBeenSet;

    Aws::String m_htmlBody;
    bool m_htmlBodyHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
