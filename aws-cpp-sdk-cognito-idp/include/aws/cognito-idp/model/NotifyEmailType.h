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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The notify email type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/NotifyEmailType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API NotifyEmailType
  {
  public:
    NotifyEmailType();
    NotifyEmailType(Aws::Utils::Json::JsonView jsonValue);
    NotifyEmailType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The subject.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The subject.</p>
     */
    inline NotifyEmailType& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject.</p>
     */
    inline NotifyEmailType& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject.</p>
     */
    inline NotifyEmailType& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>The HTML body.</p>
     */
    inline const Aws::String& GetHtmlBody() const{ return m_htmlBody; }

    /**
     * <p>The HTML body.</p>
     */
    inline bool HtmlBodyHasBeenSet() const { return m_htmlBodyHasBeenSet; }

    /**
     * <p>The HTML body.</p>
     */
    inline void SetHtmlBody(const Aws::String& value) { m_htmlBodyHasBeenSet = true; m_htmlBody = value; }

    /**
     * <p>The HTML body.</p>
     */
    inline void SetHtmlBody(Aws::String&& value) { m_htmlBodyHasBeenSet = true; m_htmlBody = std::move(value); }

    /**
     * <p>The HTML body.</p>
     */
    inline void SetHtmlBody(const char* value) { m_htmlBodyHasBeenSet = true; m_htmlBody.assign(value); }

    /**
     * <p>The HTML body.</p>
     */
    inline NotifyEmailType& WithHtmlBody(const Aws::String& value) { SetHtmlBody(value); return *this;}

    /**
     * <p>The HTML body.</p>
     */
    inline NotifyEmailType& WithHtmlBody(Aws::String&& value) { SetHtmlBody(std::move(value)); return *this;}

    /**
     * <p>The HTML body.</p>
     */
    inline NotifyEmailType& WithHtmlBody(const char* value) { SetHtmlBody(value); return *this;}


    /**
     * <p>The text body.</p>
     */
    inline const Aws::String& GetTextBody() const{ return m_textBody; }

    /**
     * <p>The text body.</p>
     */
    inline bool TextBodyHasBeenSet() const { return m_textBodyHasBeenSet; }

    /**
     * <p>The text body.</p>
     */
    inline void SetTextBody(const Aws::String& value) { m_textBodyHasBeenSet = true; m_textBody = value; }

    /**
     * <p>The text body.</p>
     */
    inline void SetTextBody(Aws::String&& value) { m_textBodyHasBeenSet = true; m_textBody = std::move(value); }

    /**
     * <p>The text body.</p>
     */
    inline void SetTextBody(const char* value) { m_textBodyHasBeenSet = true; m_textBody.assign(value); }

    /**
     * <p>The text body.</p>
     */
    inline NotifyEmailType& WithTextBody(const Aws::String& value) { SetTextBody(value); return *this;}

    /**
     * <p>The text body.</p>
     */
    inline NotifyEmailType& WithTextBody(Aws::String&& value) { SetTextBody(std::move(value)); return *this;}

    /**
     * <p>The text body.</p>
     */
    inline NotifyEmailType& WithTextBody(const char* value) { SetTextBody(value); return *this;}

  private:

    Aws::String m_subject;
    bool m_subjectHasBeenSet;

    Aws::String m_htmlBody;
    bool m_htmlBodyHasBeenSet;

    Aws::String m_textBody;
    bool m_textBodyHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
