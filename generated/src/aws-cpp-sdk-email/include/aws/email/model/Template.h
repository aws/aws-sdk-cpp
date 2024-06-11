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
   * <p>The content of the email, composed of a subject line and either an HTML part
   * or a text-only part.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/Template">AWS API
   * Reference</a></p>
   */
  class Template
  {
  public:
    AWS_SES_API Template();
    AWS_SES_API Template(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API Template& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the template. You use this name when you send email using the
     * <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline Template& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline Template& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline Template& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line of the email.</p>
     */
    inline const Aws::String& GetSubjectPart() const{ return m_subjectPart; }
    inline bool SubjectPartHasBeenSet() const { return m_subjectPartHasBeenSet; }
    inline void SetSubjectPart(const Aws::String& value) { m_subjectPartHasBeenSet = true; m_subjectPart = value; }
    inline void SetSubjectPart(Aws::String&& value) { m_subjectPartHasBeenSet = true; m_subjectPart = std::move(value); }
    inline void SetSubjectPart(const char* value) { m_subjectPartHasBeenSet = true; m_subjectPart.assign(value); }
    inline Template& WithSubjectPart(const Aws::String& value) { SetSubjectPart(value); return *this;}
    inline Template& WithSubjectPart(Aws::String&& value) { SetSubjectPart(std::move(value)); return *this;}
    inline Template& WithSubjectPart(const char* value) { SetSubjectPart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email body that is visible to recipients whose email clients do not
     * display HTML content.</p>
     */
    inline const Aws::String& GetTextPart() const{ return m_textPart; }
    inline bool TextPartHasBeenSet() const { return m_textPartHasBeenSet; }
    inline void SetTextPart(const Aws::String& value) { m_textPartHasBeenSet = true; m_textPart = value; }
    inline void SetTextPart(Aws::String&& value) { m_textPartHasBeenSet = true; m_textPart = std::move(value); }
    inline void SetTextPart(const char* value) { m_textPartHasBeenSet = true; m_textPart.assign(value); }
    inline Template& WithTextPart(const Aws::String& value) { SetTextPart(value); return *this;}
    inline Template& WithTextPart(Aws::String&& value) { SetTextPart(std::move(value)); return *this;}
    inline Template& WithTextPart(const char* value) { SetTextPart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTML body of the email.</p>
     */
    inline const Aws::String& GetHtmlPart() const{ return m_htmlPart; }
    inline bool HtmlPartHasBeenSet() const { return m_htmlPartHasBeenSet; }
    inline void SetHtmlPart(const Aws::String& value) { m_htmlPartHasBeenSet = true; m_htmlPart = value; }
    inline void SetHtmlPart(Aws::String&& value) { m_htmlPartHasBeenSet = true; m_htmlPart = std::move(value); }
    inline void SetHtmlPart(const char* value) { m_htmlPartHasBeenSet = true; m_htmlPart.assign(value); }
    inline Template& WithHtmlPart(const Aws::String& value) { SetHtmlPart(value); return *this;}
    inline Template& WithHtmlPart(Aws::String&& value) { SetHtmlPart(std::move(value)); return *this;}
    inline Template& WithHtmlPart(const char* value) { SetHtmlPart(value); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_subjectPart;
    bool m_subjectPartHasBeenSet = false;

    Aws::String m_textPart;
    bool m_textPartHasBeenSet = false;

    Aws::String m_htmlPart;
    bool m_htmlPartHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
