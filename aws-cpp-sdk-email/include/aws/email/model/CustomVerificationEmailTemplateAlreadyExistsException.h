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
   * <p>Indicates that a custom verification email template with the name you
   * specified already exists.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CustomVerificationEmailTemplateAlreadyExistsException">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API CustomVerificationEmailTemplateAlreadyExistsException
  {
  public:
    CustomVerificationEmailTemplateAlreadyExistsException();
    CustomVerificationEmailTemplateAlreadyExistsException(const Aws::Utils::Xml::XmlNode& xmlNode);
    CustomVerificationEmailTemplateAlreadyExistsException& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates that the provided custom verification email template with the
     * specified template name already exists.</p>
     */
    inline const Aws::String& GetCustomVerificationEmailTemplateName() const{ return m_customVerificationEmailTemplateName; }

    /**
     * <p>Indicates that the provided custom verification email template with the
     * specified template name already exists.</p>
     */
    inline bool CustomVerificationEmailTemplateNameHasBeenSet() const { return m_customVerificationEmailTemplateNameHasBeenSet; }

    /**
     * <p>Indicates that the provided custom verification email template with the
     * specified template name already exists.</p>
     */
    inline void SetCustomVerificationEmailTemplateName(const Aws::String& value) { m_customVerificationEmailTemplateNameHasBeenSet = true; m_customVerificationEmailTemplateName = value; }

    /**
     * <p>Indicates that the provided custom verification email template with the
     * specified template name already exists.</p>
     */
    inline void SetCustomVerificationEmailTemplateName(Aws::String&& value) { m_customVerificationEmailTemplateNameHasBeenSet = true; m_customVerificationEmailTemplateName = std::move(value); }

    /**
     * <p>Indicates that the provided custom verification email template with the
     * specified template name already exists.</p>
     */
    inline void SetCustomVerificationEmailTemplateName(const char* value) { m_customVerificationEmailTemplateNameHasBeenSet = true; m_customVerificationEmailTemplateName.assign(value); }

    /**
     * <p>Indicates that the provided custom verification email template with the
     * specified template name already exists.</p>
     */
    inline CustomVerificationEmailTemplateAlreadyExistsException& WithCustomVerificationEmailTemplateName(const Aws::String& value) { SetCustomVerificationEmailTemplateName(value); return *this;}

    /**
     * <p>Indicates that the provided custom verification email template with the
     * specified template name already exists.</p>
     */
    inline CustomVerificationEmailTemplateAlreadyExistsException& WithCustomVerificationEmailTemplateName(Aws::String&& value) { SetCustomVerificationEmailTemplateName(std::move(value)); return *this;}

    /**
     * <p>Indicates that the provided custom verification email template with the
     * specified template name already exists.</p>
     */
    inline CustomVerificationEmailTemplateAlreadyExistsException& WithCustomVerificationEmailTemplateName(const char* value) { SetCustomVerificationEmailTemplateName(value); return *this;}

  private:

    Aws::String m_customVerificationEmailTemplateName;
    bool m_customVerificationEmailTemplateNameHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
