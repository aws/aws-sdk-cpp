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
    AWS_SES_API Template() = default;
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
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    Template& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line of the email.</p>
     */
    inline const Aws::String& GetSubjectPart() const { return m_subjectPart; }
    inline bool SubjectPartHasBeenSet() const { return m_subjectPartHasBeenSet; }
    template<typename SubjectPartT = Aws::String>
    void SetSubjectPart(SubjectPartT&& value) { m_subjectPartHasBeenSet = true; m_subjectPart = std::forward<SubjectPartT>(value); }
    template<typename SubjectPartT = Aws::String>
    Template& WithSubjectPart(SubjectPartT&& value) { SetSubjectPart(std::forward<SubjectPartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email body that is visible to recipients whose email clients do not
     * display HTML content.</p>
     */
    inline const Aws::String& GetTextPart() const { return m_textPart; }
    inline bool TextPartHasBeenSet() const { return m_textPartHasBeenSet; }
    template<typename TextPartT = Aws::String>
    void SetTextPart(TextPartT&& value) { m_textPartHasBeenSet = true; m_textPart = std::forward<TextPartT>(value); }
    template<typename TextPartT = Aws::String>
    Template& WithTextPart(TextPartT&& value) { SetTextPart(std::forward<TextPartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTML body of the email.</p>
     */
    inline const Aws::String& GetHtmlPart() const { return m_htmlPart; }
    inline bool HtmlPartHasBeenSet() const { return m_htmlPartHasBeenSet; }
    template<typename HtmlPartT = Aws::String>
    void SetHtmlPart(HtmlPartT&& value) { m_htmlPartHasBeenSet = true; m_htmlPart = std::forward<HtmlPartT>(value); }
    template<typename HtmlPartT = Aws::String>
    Template& WithHtmlPart(HtmlPartT&& value) { SetHtmlPart(std::forward<HtmlPartT>(value)); return *this;}
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
