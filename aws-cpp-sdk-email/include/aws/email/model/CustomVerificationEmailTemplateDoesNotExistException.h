﻿/**
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
   * specified does not exist.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CustomVerificationEmailTemplateDoesNotExistException">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API CustomVerificationEmailTemplateDoesNotExistException
  {
  public:
    CustomVerificationEmailTemplateDoesNotExistException();
    CustomVerificationEmailTemplateDoesNotExistException(const Aws::Utils::Xml::XmlNode& xmlNode);
    CustomVerificationEmailTemplateDoesNotExistException& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates that the provided custom verification email template does not
     * exist.</p>
     */
    inline const Aws::String& GetCustomVerificationEmailTemplateName() const{ return m_customVerificationEmailTemplateName; }

    /**
     * <p>Indicates that the provided custom verification email template does not
     * exist.</p>
     */
    inline bool CustomVerificationEmailTemplateNameHasBeenSet() const { return m_customVerificationEmailTemplateNameHasBeenSet; }

    /**
     * <p>Indicates that the provided custom verification email template does not
     * exist.</p>
     */
    inline void SetCustomVerificationEmailTemplateName(const Aws::String& value) { m_customVerificationEmailTemplateNameHasBeenSet = true; m_customVerificationEmailTemplateName = value; }

    /**
     * <p>Indicates that the provided custom verification email template does not
     * exist.</p>
     */
    inline void SetCustomVerificationEmailTemplateName(Aws::String&& value) { m_customVerificationEmailTemplateNameHasBeenSet = true; m_customVerificationEmailTemplateName = std::move(value); }

    /**
     * <p>Indicates that the provided custom verification email template does not
     * exist.</p>
     */
    inline void SetCustomVerificationEmailTemplateName(const char* value) { m_customVerificationEmailTemplateNameHasBeenSet = true; m_customVerificationEmailTemplateName.assign(value); }

    /**
     * <p>Indicates that the provided custom verification email template does not
     * exist.</p>
     */
    inline CustomVerificationEmailTemplateDoesNotExistException& WithCustomVerificationEmailTemplateName(const Aws::String& value) { SetCustomVerificationEmailTemplateName(value); return *this;}

    /**
     * <p>Indicates that the provided custom verification email template does not
     * exist.</p>
     */
    inline CustomVerificationEmailTemplateDoesNotExistException& WithCustomVerificationEmailTemplateName(Aws::String&& value) { SetCustomVerificationEmailTemplateName(std::move(value)); return *this;}

    /**
     * <p>Indicates that the provided custom verification email template does not
     * exist.</p>
     */
    inline CustomVerificationEmailTemplateDoesNotExistException& WithCustomVerificationEmailTemplateName(const char* value) { SetCustomVerificationEmailTemplateName(value); return *this;}

  private:

    Aws::String m_customVerificationEmailTemplateName;
    bool m_customVerificationEmailTemplateNameHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
