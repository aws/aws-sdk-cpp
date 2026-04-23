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
   * <p>The content of the email, composed of a subject line, an HTML part, and a
   * text-only part.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/Template">AWS API
   * Reference</a></p>
   */
  class AWS_SES_API Template
  {
  public:
    Template();
    Template(const Aws::Utils::Xml::XmlNode& xmlNode);
    Template& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations.</p>
     */
    inline Template& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations.</p>
     */
    inline Template& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations.</p>
     */
    inline Template& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The subject line of the email.</p>
     */
    inline const Aws::String& GetSubjectPart() const{ return m_subjectPart; }

    /**
     * <p>The subject line of the email.</p>
     */
    inline bool SubjectPartHasBeenSet() const { return m_subjectPartHasBeenSet; }

    /**
     * <p>The subject line of the email.</p>
     */
    inline void SetSubjectPart(const Aws::String& value) { m_subjectPartHasBeenSet = true; m_subjectPart = value; }

    /**
     * <p>The subject line of the email.</p>
     */
    inline void SetSubjectPart(Aws::String&& value) { m_subjectPartHasBeenSet = true; m_subjectPart = std::move(value); }

    /**
     * <p>The subject line of the email.</p>
     */
    inline void SetSubjectPart(const char* value) { m_subjectPartHasBeenSet = true; m_subjectPart.assign(value); }

    /**
     * <p>The subject line of the email.</p>
     */
    inline Template& WithSubjectPart(const Aws::String& value) { SetSubjectPart(value); return *this;}

    /**
     * <p>The subject line of the email.</p>
     */
    inline Template& WithSubjectPart(Aws::String&& value) { SetSubjectPart(std::move(value)); return *this;}

    /**
     * <p>The subject line of the email.</p>
     */
    inline Template& WithSubjectPart(const char* value) { SetSubjectPart(value); return *this;}


    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline const Aws::String& GetTextPart() const{ return m_textPart; }

    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline bool TextPartHasBeenSet() const { return m_textPartHasBeenSet; }

    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline void SetTextPart(const Aws::String& value) { m_textPartHasBeenSet = true; m_textPart = value; }

    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline void SetTextPart(Aws::String&& value) { m_textPartHasBeenSet = true; m_textPart = std::move(value); }

    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline void SetTextPart(const char* value) { m_textPartHasBeenSet = true; m_textPart.assign(value); }

    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline Template& WithTextPart(const Aws::String& value) { SetTextPart(value); return *this;}

    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline Template& WithTextPart(Aws::String&& value) { SetTextPart(std::move(value)); return *this;}

    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline Template& WithTextPart(const char* value) { SetTextPart(value); return *this;}


    /**
     * <p>The HTML body of the email.</p>
     */
    inline const Aws::String& GetHtmlPart() const{ return m_htmlPart; }

    /**
     * <p>The HTML body of the email.</p>
     */
    inline bool HtmlPartHasBeenSet() const { return m_htmlPartHasBeenSet; }

    /**
     * <p>The HTML body of the email.</p>
     */
    inline void SetHtmlPart(const Aws::String& value) { m_htmlPartHasBeenSet = true; m_htmlPart = value; }

    /**
     * <p>The HTML body of the email.</p>
     */
    inline void SetHtmlPart(Aws::String&& value) { m_htmlPartHasBeenSet = true; m_htmlPart = std::move(value); }

    /**
     * <p>The HTML body of the email.</p>
     */
    inline void SetHtmlPart(const char* value) { m_htmlPartHasBeenSet = true; m_htmlPart.assign(value); }

    /**
     * <p>The HTML body of the email.</p>
     */
    inline Template& WithHtmlPart(const Aws::String& value) { SetHtmlPart(value); return *this;}

    /**
     * <p>The HTML body of the email.</p>
     */
    inline Template& WithHtmlPart(Aws::String&& value) { SetHtmlPart(std::move(value)); return *this;}

    /**
     * <p>The HTML body of the email.</p>
     */
    inline Template& WithHtmlPart(const char* value) { SetHtmlPart(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;

    Aws::String m_subjectPart;
    bool m_subjectPartHasBeenSet;

    Aws::String m_textPart;
    bool m_textPartHasBeenSet;

    Aws::String m_htmlPart;
    bool m_htmlPartHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
