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
   * <p>The template for email messages that threat protection sends to a user when
   * your threat protection automated response has a <i>Notify</i>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/NotifyEmailType">AWS
   * API Reference</a></p>
   */
  class NotifyEmailType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API NotifyEmailType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API NotifyEmailType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API NotifyEmailType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subject of the threat protection email notification.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    NotifyEmailType& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of an email notification formatted in HTML. Choose an
     * <code>HtmlBody</code> or a <code>TextBody</code> to send an HTML-formatted or
     * plaintext message, respectively.</p>
     */
    inline const Aws::String& GetHtmlBody() const { return m_htmlBody; }
    inline bool HtmlBodyHasBeenSet() const { return m_htmlBodyHasBeenSet; }
    template<typename HtmlBodyT = Aws::String>
    void SetHtmlBody(HtmlBodyT&& value) { m_htmlBodyHasBeenSet = true; m_htmlBody = std::forward<HtmlBodyT>(value); }
    template<typename HtmlBodyT = Aws::String>
    NotifyEmailType& WithHtmlBody(HtmlBodyT&& value) { SetHtmlBody(std::forward<HtmlBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of an email notification formatted in plaintext. Choose an
     * <code>HtmlBody</code> or a <code>TextBody</code> to send an HTML-formatted or
     * plaintext message, respectively.</p>
     */
    inline const Aws::String& GetTextBody() const { return m_textBody; }
    inline bool TextBodyHasBeenSet() const { return m_textBodyHasBeenSet; }
    template<typename TextBodyT = Aws::String>
    void SetTextBody(TextBodyT&& value) { m_textBodyHasBeenSet = true; m_textBody = std::forward<TextBodyT>(value); }
    template<typename TextBodyT = Aws::String>
    NotifyEmailType& WithTextBody(TextBodyT&& value) { SetTextBody(std::forward<TextBodyT>(value)); return *this;}
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
