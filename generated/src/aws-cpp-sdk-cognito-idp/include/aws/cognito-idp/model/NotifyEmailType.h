/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class NotifyEmailType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API NotifyEmailType();
    AWS_COGNITOIDENTITYPROVIDER_API NotifyEmailType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API NotifyEmailType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email subject.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }
    inline NotifyEmailType& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}
    inline NotifyEmailType& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}
    inline NotifyEmailType& WithSubject(const char* value) { SetSubject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email HTML body.</p>
     */
    inline const Aws::String& GetHtmlBody() const{ return m_htmlBody; }
    inline bool HtmlBodyHasBeenSet() const { return m_htmlBodyHasBeenSet; }
    inline void SetHtmlBody(const Aws::String& value) { m_htmlBodyHasBeenSet = true; m_htmlBody = value; }
    inline void SetHtmlBody(Aws::String&& value) { m_htmlBodyHasBeenSet = true; m_htmlBody = std::move(value); }
    inline void SetHtmlBody(const char* value) { m_htmlBodyHasBeenSet = true; m_htmlBody.assign(value); }
    inline NotifyEmailType& WithHtmlBody(const Aws::String& value) { SetHtmlBody(value); return *this;}
    inline NotifyEmailType& WithHtmlBody(Aws::String&& value) { SetHtmlBody(std::move(value)); return *this;}
    inline NotifyEmailType& WithHtmlBody(const char* value) { SetHtmlBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email text body.</p>
     */
    inline const Aws::String& GetTextBody() const{ return m_textBody; }
    inline bool TextBodyHasBeenSet() const { return m_textBodyHasBeenSet; }
    inline void SetTextBody(const Aws::String& value) { m_textBodyHasBeenSet = true; m_textBody = value; }
    inline void SetTextBody(Aws::String&& value) { m_textBodyHasBeenSet = true; m_textBody = std::move(value); }
    inline void SetTextBody(const char* value) { m_textBodyHasBeenSet = true; m_textBody.assign(value); }
    inline NotifyEmailType& WithTextBody(const Aws::String& value) { SetTextBody(value); return *this;}
    inline NotifyEmailType& WithTextBody(Aws::String&& value) { SetTextBody(std::move(value)); return *this;}
    inline NotifyEmailType& WithTextBody(const char* value) { SetTextBody(value); return *this;}
    ///@}
  private:

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_htmlBody;
    bool m_htmlBodyHasBeenSet = false;

    Aws::String m_textBody;
    bool m_textBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
