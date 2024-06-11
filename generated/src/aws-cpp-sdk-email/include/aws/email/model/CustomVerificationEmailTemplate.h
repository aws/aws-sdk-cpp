/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>Contains information about a custom verification email
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CustomVerificationEmailTemplate">AWS
   * API Reference</a></p>
   */
  class CustomVerificationEmailTemplate
  {
  public:
    AWS_SES_API CustomVerificationEmailTemplate();
    AWS_SES_API CustomVerificationEmailTemplate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API CustomVerificationEmailTemplate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline CustomVerificationEmailTemplate& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline CustomVerificationEmailTemplate& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline CustomVerificationEmailTemplate& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const{ return m_fromEmailAddress; }
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }
    inline void SetFromEmailAddress(const Aws::String& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = value; }
    inline void SetFromEmailAddress(Aws::String&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::move(value); }
    inline void SetFromEmailAddress(const char* value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.assign(value); }
    inline CustomVerificationEmailTemplate& WithFromEmailAddress(const Aws::String& value) { SetFromEmailAddress(value); return *this;}
    inline CustomVerificationEmailTemplate& WithFromEmailAddress(Aws::String&& value) { SetFromEmailAddress(std::move(value)); return *this;}
    inline CustomVerificationEmailTemplate& WithFromEmailAddress(const char* value) { SetFromEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline const Aws::String& GetTemplateSubject() const{ return m_templateSubject; }
    inline bool TemplateSubjectHasBeenSet() const { return m_templateSubjectHasBeenSet; }
    inline void SetTemplateSubject(const Aws::String& value) { m_templateSubjectHasBeenSet = true; m_templateSubject = value; }
    inline void SetTemplateSubject(Aws::String&& value) { m_templateSubjectHasBeenSet = true; m_templateSubject = std::move(value); }
    inline void SetTemplateSubject(const char* value) { m_templateSubjectHasBeenSet = true; m_templateSubject.assign(value); }
    inline CustomVerificationEmailTemplate& WithTemplateSubject(const Aws::String& value) { SetTemplateSubject(value); return *this;}
    inline CustomVerificationEmailTemplate& WithTemplateSubject(Aws::String&& value) { SetTemplateSubject(std::move(value)); return *this;}
    inline CustomVerificationEmailTemplate& WithTemplateSubject(const char* value) { SetTemplateSubject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline const Aws::String& GetSuccessRedirectionURL() const{ return m_successRedirectionURL; }
    inline bool SuccessRedirectionURLHasBeenSet() const { return m_successRedirectionURLHasBeenSet; }
    inline void SetSuccessRedirectionURL(const Aws::String& value) { m_successRedirectionURLHasBeenSet = true; m_successRedirectionURL = value; }
    inline void SetSuccessRedirectionURL(Aws::String&& value) { m_successRedirectionURLHasBeenSet = true; m_successRedirectionURL = std::move(value); }
    inline void SetSuccessRedirectionURL(const char* value) { m_successRedirectionURLHasBeenSet = true; m_successRedirectionURL.assign(value); }
    inline CustomVerificationEmailTemplate& WithSuccessRedirectionURL(const Aws::String& value) { SetSuccessRedirectionURL(value); return *this;}
    inline CustomVerificationEmailTemplate& WithSuccessRedirectionURL(Aws::String&& value) { SetSuccessRedirectionURL(std::move(value)); return *this;}
    inline CustomVerificationEmailTemplate& WithSuccessRedirectionURL(const char* value) { SetSuccessRedirectionURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline const Aws::String& GetFailureRedirectionURL() const{ return m_failureRedirectionURL; }
    inline bool FailureRedirectionURLHasBeenSet() const { return m_failureRedirectionURLHasBeenSet; }
    inline void SetFailureRedirectionURL(const Aws::String& value) { m_failureRedirectionURLHasBeenSet = true; m_failureRedirectionURL = value; }
    inline void SetFailureRedirectionURL(Aws::String&& value) { m_failureRedirectionURLHasBeenSet = true; m_failureRedirectionURL = std::move(value); }
    inline void SetFailureRedirectionURL(const char* value) { m_failureRedirectionURLHasBeenSet = true; m_failureRedirectionURL.assign(value); }
    inline CustomVerificationEmailTemplate& WithFailureRedirectionURL(const Aws::String& value) { SetFailureRedirectionURL(value); return *this;}
    inline CustomVerificationEmailTemplate& WithFailureRedirectionURL(Aws::String&& value) { SetFailureRedirectionURL(std::move(value)); return *this;}
    inline CustomVerificationEmailTemplate& WithFailureRedirectionURL(const char* value) { SetFailureRedirectionURL(value); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet = false;

    Aws::String m_templateSubject;
    bool m_templateSubjectHasBeenSet = false;

    Aws::String m_successRedirectionURL;
    bool m_successRedirectionURLHasBeenSet = false;

    Aws::String m_failureRedirectionURL;
    bool m_failureRedirectionURLHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
