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
  class AWS_SES_API CustomVerificationEmailTemplate
  {
  public:
    CustomVerificationEmailTemplate();
    CustomVerificationEmailTemplate(const Aws::Utils::Xml::XmlNode& xmlNode);
    CustomVerificationEmailTemplate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline CustomVerificationEmailTemplate& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline CustomVerificationEmailTemplate& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline CustomVerificationEmailTemplate& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const{ return m_fromEmailAddress; }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline void SetFromEmailAddress(const Aws::String& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = value; }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline void SetFromEmailAddress(Aws::String&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::move(value); }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline void SetFromEmailAddress(const char* value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.assign(value); }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline CustomVerificationEmailTemplate& WithFromEmailAddress(const Aws::String& value) { SetFromEmailAddress(value); return *this;}

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline CustomVerificationEmailTemplate& WithFromEmailAddress(Aws::String&& value) { SetFromEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline CustomVerificationEmailTemplate& WithFromEmailAddress(const char* value) { SetFromEmailAddress(value); return *this;}


    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline const Aws::String& GetTemplateSubject() const{ return m_templateSubject; }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline bool TemplateSubjectHasBeenSet() const { return m_templateSubjectHasBeenSet; }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline void SetTemplateSubject(const Aws::String& value) { m_templateSubjectHasBeenSet = true; m_templateSubject = value; }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline void SetTemplateSubject(Aws::String&& value) { m_templateSubjectHasBeenSet = true; m_templateSubject = std::move(value); }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline void SetTemplateSubject(const char* value) { m_templateSubjectHasBeenSet = true; m_templateSubject.assign(value); }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline CustomVerificationEmailTemplate& WithTemplateSubject(const Aws::String& value) { SetTemplateSubject(value); return *this;}

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline CustomVerificationEmailTemplate& WithTemplateSubject(Aws::String&& value) { SetTemplateSubject(std::move(value)); return *this;}

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline CustomVerificationEmailTemplate& WithTemplateSubject(const char* value) { SetTemplateSubject(value); return *this;}


    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline const Aws::String& GetSuccessRedirectionURL() const{ return m_successRedirectionURL; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline bool SuccessRedirectionURLHasBeenSet() const { return m_successRedirectionURLHasBeenSet; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline void SetSuccessRedirectionURL(const Aws::String& value) { m_successRedirectionURLHasBeenSet = true; m_successRedirectionURL = value; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline void SetSuccessRedirectionURL(Aws::String&& value) { m_successRedirectionURLHasBeenSet = true; m_successRedirectionURL = std::move(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline void SetSuccessRedirectionURL(const char* value) { m_successRedirectionURLHasBeenSet = true; m_successRedirectionURL.assign(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline CustomVerificationEmailTemplate& WithSuccessRedirectionURL(const Aws::String& value) { SetSuccessRedirectionURL(value); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline CustomVerificationEmailTemplate& WithSuccessRedirectionURL(Aws::String&& value) { SetSuccessRedirectionURL(std::move(value)); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline CustomVerificationEmailTemplate& WithSuccessRedirectionURL(const char* value) { SetSuccessRedirectionURL(value); return *this;}


    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline const Aws::String& GetFailureRedirectionURL() const{ return m_failureRedirectionURL; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline bool FailureRedirectionURLHasBeenSet() const { return m_failureRedirectionURLHasBeenSet; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline void SetFailureRedirectionURL(const Aws::String& value) { m_failureRedirectionURLHasBeenSet = true; m_failureRedirectionURL = value; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline void SetFailureRedirectionURL(Aws::String&& value) { m_failureRedirectionURLHasBeenSet = true; m_failureRedirectionURL = std::move(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline void SetFailureRedirectionURL(const char* value) { m_failureRedirectionURLHasBeenSet = true; m_failureRedirectionURL.assign(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline CustomVerificationEmailTemplate& WithFailureRedirectionURL(const Aws::String& value) { SetFailureRedirectionURL(value); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline CustomVerificationEmailTemplate& WithFailureRedirectionURL(Aws::String&& value) { SetFailureRedirectionURL(std::move(value)); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline CustomVerificationEmailTemplate& WithFailureRedirectionURL(const char* value) { SetFailureRedirectionURL(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet;

    Aws::String m_templateSubject;
    bool m_templateSubjectHasBeenSet;

    Aws::String m_successRedirectionURL;
    bool m_successRedirectionURLHasBeenSet;

    Aws::String m_failureRedirectionURL;
    bool m_failureRedirectionURLHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
