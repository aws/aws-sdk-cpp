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
   * <p>Indicates that one or more of the replacement values you provided is invalid.
   * This error may occur when the TemplateData object contains invalid
   * JSON.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/InvalidRenderingParameterException">AWS
   * API Reference</a></p>
   */
  class InvalidRenderingParameterException
  {
  public:
    AWS_SES_API InvalidRenderingParameterException();
    AWS_SES_API InvalidRenderingParameterException(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API InvalidRenderingParameterException& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    
    inline InvalidRenderingParameterException& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    
    inline InvalidRenderingParameterException& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    
    inline InvalidRenderingParameterException& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
