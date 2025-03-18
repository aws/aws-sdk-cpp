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
   * <p>Indicates that a custom verification email template with the name you
   * specified already exists.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CustomVerificationEmailTemplateAlreadyExistsException">AWS
   * API Reference</a></p>
   */
  class CustomVerificationEmailTemplateAlreadyExistsException
  {
  public:
    AWS_SES_API CustomVerificationEmailTemplateAlreadyExistsException() = default;
    AWS_SES_API CustomVerificationEmailTemplateAlreadyExistsException(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API CustomVerificationEmailTemplateAlreadyExistsException& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates that the provided custom verification email template with the
     * specified template name already exists.</p>
     */
    inline const Aws::String& GetCustomVerificationEmailTemplateName() const { return m_customVerificationEmailTemplateName; }
    inline bool CustomVerificationEmailTemplateNameHasBeenSet() const { return m_customVerificationEmailTemplateNameHasBeenSet; }
    template<typename CustomVerificationEmailTemplateNameT = Aws::String>
    void SetCustomVerificationEmailTemplateName(CustomVerificationEmailTemplateNameT&& value) { m_customVerificationEmailTemplateNameHasBeenSet = true; m_customVerificationEmailTemplateName = std::forward<CustomVerificationEmailTemplateNameT>(value); }
    template<typename CustomVerificationEmailTemplateNameT = Aws::String>
    CustomVerificationEmailTemplateAlreadyExistsException& WithCustomVerificationEmailTemplateName(CustomVerificationEmailTemplateNameT&& value) { SetCustomVerificationEmailTemplateName(std::forward<CustomVerificationEmailTemplateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customVerificationEmailTemplateName;
    bool m_customVerificationEmailTemplateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
